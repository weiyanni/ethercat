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

/**
 * @brief  SPI 读取寄存器 (保持不变)
 */
static uint32_t TMC6460_SPI_Read(uint16_t addr)
{
//    uint8_t tx_frame[6] = {0};
//    uint8_t rx_frame[6] = {0};
//
//    /* 构造读命令帧 */
//    tx_frame[0] = (addr >> 8) & 0x03;
//    tx_frame[1] = addr & 0xFF;
//
//    /* 第一帧：发送读命令 */
//    DIGITAL_IO_SetOutputLow(&CS_5);
//    Delay_us(1);
//    SPI_MASTER_Transfer(&SPI_MASTER_5, tx_frame, rx_frame, 6);
//    while (SPI_MASTER_IsTxBusy(&SPI_MASTER_5));
//    while (SPI_MASTER_IsRxBusy(&SPI_MASTER_5));
//    DIGITAL_IO_SetOutputHigh(&CS_5);
//    Delay_us(5);
//
//    /* 第二帧：获取返回数据 */
//    tx_frame[0] = 0;
//    tx_frame[1] = 0;
//    DIGITAL_IO_SetOutputLow(&CS_5);
//    Delay_us(1);
//    SPI_MASTER_Transfer(&SPI_MASTER_5, tx_frame, rx_frame, 6);
//    while (SPI_MASTER_IsTxBusy(&SPI_MASTER_5));
//    while (SPI_MASTER_IsRxBusy(&SPI_MASTER_5));
//    DIGITAL_IO_SetOutputHigh(&CS_5);
//    Delay_us(5);
//
//    return ((uint32_t)rx_frame[2] << 24) |
//           ((uint32_t)rx_frame[3] << 16) |
//           ((uint32_t)rx_frame[4] << 8)  |
//           ((uint32_t)rx_frame[5]);
}

//片选引脚结构体
typedef struct {
    DIGITAL_IO_t *cs_pins[4];      // 最多支持4个片选
    uint8_t cs_active_levels[4];   // 每个片选的有效电平
    uint8_t cs_count;              // 实际使用的片选数量
} SPI_MultiCS_Config;

/*
 	 以DMA的方式进行spi通信
 */
void DMA_SPI_Transfer(uint8_t *tx_data, uint8_t *rx_data, uint32_t length) {
//    // 配置DMA源地址和目的地址
//    DMA_SetSourceAddress(&DMA_0, (uint32_t)tx_data);
//    DMA_SetDestinationAddress(&DMA_0, (uint32_t)&SPI_MASTER_0->OUTR);
//
//    // 配置DMA传输数量
//    DMA_SetBlockSize(&DMA_0, length);
//
//    // 启动DMA传输
//    DMA_Enable(&DMA_0);
//}
//
//// DMA传输完成中断回调
//void DMA_TransferComplete(void) {
//    // 处理DMA传输完成
}

int main(void)
{
  DAVE_STATUS_t status;
  SPI_Frame_t  rx_frame;
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

  chip_id = TMC6460_SPI_Read(TMC6460_CHIP_ID);

    //master_rec_data = TMC6460_SPI_Read(TMC6460_CHIP_ID);

        if (chip_id != TMC6460_CHIP_ID_VALUE) {
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
//	  DIGITAL_IO_ToggleOutput(&LED); // toggles level at pin
//	  for(delay_count = 0;delay_count<0xfffff;delay_count++);

  }
}

