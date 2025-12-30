/*
 * main.c
 *
 *  Created on: 2025 Dec 17 10:46:09
 *  Author: Administrator
 */




#include "DAVE.h"                 //Declarations from DAVE Code Generation (includes SFR declaration)
/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the APP initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */
#define BUFFER_SIZE                  6
uint8_t master_send_data[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint32_t master_rec_data;
typedef struct {
    uint8_t byte[6];
} SPI_Frame_t;
#define TMC6460_CHIP_ID                 0x00            /* 芯片 ID 寄存器地址 */
#define TMC6460_CHIP_ID_VALUE           0x36343630      /* 预期芯片 ID 值 */

/**
 * @brief  简单延时
 * @param  us: 延时微秒数（粗略估计，基于 XMC4300 @ 144MHz）
 */
 void Delay_us(uint32_t us)
{
    volatile uint32_t count = us * 50;
    while (count--);
}

 void process_app(TOBJ7000 *Rxpdo, TOBJ6000 *Txpdo)
 {
   /* OUTPUT PROCESSING */
   XMC_GPIO_SetOutputLevel(P_LED3, MAP2LEVEL(OUT_GENERIC->OUT_GEN_Bit1));
 }

 /**
  * @brief 通用的 SPI DMA 传输函数
  * @param handle   SPI 句柄指针（如 &SPI_MASTER_0）
  * @param cs_pin   片选引脚句柄指针（如 &CS_5）
  * @param tx_data  发送缓冲区首地址
  * @param rx_data  接收缓冲区首地址
  * @param length   传输字节数
  */
 SPI_MASTER_STATUS_t SPI_DMA_GenericTransfer(const SPI_MASTER_t *const handle,
                                            const DIGITAL_IO_t *const cs_pin,
                                            uint8_t *tx_data,
                                            uint8_t *rx_data,
                                            uint32_t length)
 {
     SPI_MASTER_STATUS_t status;

     // 1. 检查参数合法性
     if (handle == NULL || cs_pin == NULL || tx_data == NULL || rx_data == NULL || length == 0) {
         return SPI_MASTER_STATUS_BUFFER_INVALID;
     }

     // 2. 拉低片选 (开始通信)
     DIGITAL_IO_SetOutputLow(cs_pin);

     // 3. 启动 DMA 传输
     // 在 DMA 模式下，此函数是非阻塞的
     status = SPI_MASTER_Transfer(handle, tx_data, rx_data, length);

     if (status == SPI_MASTER_STATUS_SUCCESS) {
         // 4. 等待 DMA 传输完成
         // 检查运行时状态位 tx_busy 和 rx_busy
         while (SPI_MASTER_IsTxBusy(handle));
         while (SPI_MASTER_IsRxBusy(handle));
     }

     // 5. 拉高片选 (结束通信)
     DIGITAL_IO_SetOutputHigh(cs_pin);

     return status;
 }

 /**
  * @brief  通用的 TMC6460 寄存器读取函数（基于 DMA）
  * @param  handle  SPI_MASTER 句柄指针（如 &SPI_MASTER_0）
  * @param  cs_pin  片选引脚句柄指针（如 &CS_5）
  * @param  addr    16位寄存器地址
  * @return uint32_t 寄存器返回的 32 位数值
  */
 uint32_t SPI_TMC6460_ReadRegister(const SPI_MASTER_t *const handle,
                                   const DIGITAL_IO_t *const cs_pin,
                                   uint16_t addr)
 {
     uint8_t tx_buf[6] = {0};
     uint8_t rx_buf[6] = {0};
     uint32_t reg_value = 0;
     SPI_MASTER_STATUS_t status;

     /* --- 第一帧：发送读取命令和地址 --- */
     /* 根据 main.c 逻辑：前两个字节为地址，后四个字节填充 0 */
     tx_buf[0] = (uint8_t)((addr >> 8) & 0x03);
     tx_buf[1] = (uint8_t)(addr & 0xFF);

     /* 调用带参数的 DMA 传输函数 */
     status = SPI_DMA_GenericTransfer(handle, cs_pin, tx_buf, rx_buf, 6);

     if (status != SPI_MASTER_STATUS_SUCCESS) {
         return 0; // 传输失败返回 0
     }

     /* 根据 TMC 芯片特性，在两帧之间建议留出微小的处理时间 */
     Delay_us(5);

     /* --- 第二帧：发送哑数据(Dummy)以获取寄存器返回的内容 --- */
     /* 清空发送缓冲区，仅作为驱动时钟使用 */
     for(int i = 0; i < 6; i++) {
         tx_buf[i] = 0;
     }

     /* 再次执行 DMA 传输，此次传输接收到的 rx_buf 包含实际数据 */
     status = SPI_DMA_GenericTransfer(handle, cs_pin, tx_buf, rx_buf, 6);

     if (status == SPI_MASTER_STATUS_SUCCESS) {
         /* --- 解析 32 位数据 --- */
         /* 根据 main.c 解析逻辑：数据位于返回帧的 [2] 到 [5] 字节 */
         reg_value = ((uint32_t)rx_buf[2] << 24) |
                     ((uint32_t)rx_buf[3] << 16) |
                     ((uint32_t)rx_buf[4] << 8)  |
                     ((uint32_t)rx_buf[5]);
     }

     return reg_value;
 }
int main(void)
{
  DAVE_STATUS_t status;
  uint32_t chip_id;

  status = DAVE_Init();           /* Initialization of DAVE APPs  */

  if (status != DAVE_STATUS_SUCCESS)
  {
    /* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
    XMC_DEBUG("DAVE APPs initialization failed\n");

    while(1U)
    {

    }
  }
  else
  {
	  DIGITAL_IO_SetOutputLow(&LED);
	  Delay_us(200000);
	  DIGITAL_IO_SetOutputHigh(&LED);
	  Delay_us(200000);
  }

  DIGITAL_IO_SetOutputHigh(&SLEEPN5);
  Delay_us(4000);

  chip_id = SPI_TMC6460_ReadRegister(&SPI_MASTER_0, &CS_5, 0x00);

    //master_rec_data = TMC6460_SPI_Read(TMC6460_CHIP_ID);

        if (chip_id != TMC6460_CHIP_ID_VALUE)
        {
            /* SPI 通信失败：LED 闪烁，卡死 */
            while (1) {
                DIGITAL_IO_SetOutputLow(&LED);
                Delay_us(200000);
                DIGITAL_IO_SetOutputHigh(&LED);
                Delay_us(200000);
            }
        }
        /* SPI 通信成功：LED 常亮，继续执行 */
        DIGITAL_IO_SetOutputLow(&LED);
  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {


  }
}

void SYNC0IRQHandler (void)
{
	Sync0_Isr();
}

void SYNC1IRQHandler (void)
{
	Sync1_Isr();
}
