/*
* This source file is part of the EtherCAT Slave Stack Code licensed by Beckhoff Automation GmbH & Co KG, 33415 Verl, Germany.
* The corresponding license agreement applies. This hint shall not be removed.
*/

/**
* \addtogroup ryhand ryhand
* @{
*/

/**
\file ryhandObjects
\author ET9300Utilities.ApplicationHandler (Version 1.6.4.0) | EthercatSSC@beckhoff.com

\brief ryhand specific objects<br>
\brief NOTE : This file will be overwritten if a new object dictionary is generated!<br>
*/

#if defined(_RYHAND_) && (_RYHAND_ == 1)
#define PROTO
#else
#define PROTO extern
#endif
/******************************************************************************
*                    Object 0x1600 : Rxpdo process data mapping
******************************************************************************/
/**
* \addtogroup 0x1600 0x1600 | Rxpdo process data mapping
* @{
* \brief Object 0x1600 (Rxpdo process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x7000.1<br>
* SubIndex 2 - Reference to 0x7000.2<br>
* SubIndex 3 - Reference to 0x7000.3<br>
* SubIndex 4 - Reference to 0x7000.4<br>
* SubIndex 5 - Reference to 0x7000.5<br>
* SubIndex 6 - Reference to 0x7000.6<br>
* SubIndex 7 - Reference to 0x7000.7<br>
* SubIndex 8 - Reference to 0x7000.8<br>
* SubIndex 9 - Reference to 0x7000.9<br>
* SubIndex 10 - Reference to 0x7000.10<br>
* SubIndex 11 - Reference to 0x7000.11<br>
* SubIndex 12 - Reference to 0x7000.12<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1600[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x7000.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x7000.2 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Reference to 0x7000.3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x7000.4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x7000.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x7000.6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x7000.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x7000.8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x7000.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - Reference to 0x7000.10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - Reference to 0x7000.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex12 - Reference to 0x7000.12 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1600[] = "Rxpdo process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000"
"SubIndex 011\000"
"SubIndex 012\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x7000.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x7000.2 */
UINT32 SI3; /* Subindex3 - Reference to 0x7000.3 */
UINT32 SI4; /* Subindex4 - Reference to 0x7000.4 */
UINT32 SI5; /* Subindex5 - Reference to 0x7000.5 */
UINT32 SI6; /* Subindex6 - Reference to 0x7000.6 */
UINT32 SI7; /* Subindex7 - Reference to 0x7000.7 */
UINT32 SI8; /* Subindex8 - Reference to 0x7000.8 */
UINT32 SI9; /* Subindex9 - Reference to 0x7000.9 */
UINT32 SI10; /* Subindex10 - Reference to 0x7000.10 */
UINT32 SI11; /* Subindex11 - Reference to 0x7000.11 */
UINT32 SI12; /* Subindex12 - Reference to 0x7000.12 */
} OBJ_STRUCT_PACKED_END
TOBJ1600;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1600 RxpdoProcessDataMapping0x1600
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={12,0x70000110,0x700002C0,0x70000310,0x700004C0,0x70000510,0x700006C0,0x70000710,0x700008C0,0x70000910,0x70000AC0,0x70000B10,0x70000CC0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A00 : Txpdo process data mapping
******************************************************************************/
/**
* \addtogroup 0x1A00 0x1A00 | Txpdo process data mapping
* @{
* \brief Object 0x1A00 (Txpdo process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x6000.1<br>
* SubIndex 2 - Reference to 0x6000.2<br>
* SubIndex 3 - Reference to 0x6000.3<br>
* SubIndex 4 - Reference to 0x6000.4<br>
* SubIndex 5 - Reference to 0x6000.5<br>
* SubIndex 6 - Reference to 0x6000.6<br>
* SubIndex 7 - Reference to 0x6000.7<br>
* SubIndex 8 - Reference to 0x6000.8<br>
* SubIndex 9 - Reference to 0x6000.9<br>
* SubIndex 10 - Reference to 0x6000.10<br>
* SubIndex 11 - Reference to 0x6000.11<br>
* SubIndex 12 - Reference to 0x6000.12<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A00[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x6000.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x6000.2 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Reference to 0x6000.3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x6000.4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x6000.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x6000.6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x6000.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x6000.8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x6000.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - Reference to 0x6000.10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - Reference to 0x6000.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex12 - Reference to 0x6000.12 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A00[] = "Txpdo process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000"
"SubIndex 011\000"
"SubIndex 012\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x6000.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x6000.2 */
UINT32 SI3; /* Subindex3 - Reference to 0x6000.3 */
UINT32 SI4; /* Subindex4 - Reference to 0x6000.4 */
UINT32 SI5; /* Subindex5 - Reference to 0x6000.5 */
UINT32 SI6; /* Subindex6 - Reference to 0x6000.6 */
UINT32 SI7; /* Subindex7 - Reference to 0x6000.7 */
UINT32 SI8; /* Subindex8 - Reference to 0x6000.8 */
UINT32 SI9; /* Subindex9 - Reference to 0x6000.9 */
UINT32 SI10; /* Subindex10 - Reference to 0x6000.10 */
UINT32 SI11; /* Subindex11 - Reference to 0x6000.11 */
UINT32 SI12; /* Subindex12 - Reference to 0x6000.12 */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 TxpdoProcessDataMapping0x1A00
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={12,0x60000110,0x600002C0,0x60000310,0x600004C0,0x60000510,0x600006C0,0x60000710,0x600008C0,0x60000910,0x60000AC0,0x60000B10,0x60000CC0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C12 : SyncManager 2 assignment
******************************************************************************/
/**
* \addtogroup 0x1C12 0x1C12 | SyncManager 2 assignment
* @{
* \brief Object 0x1C12 (SyncManager 2 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C12[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C12[] = "SyncManager 2 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C12;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C12 sRxPDOassign
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={1,{0x1600}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C13 : SyncManager 3 assignment
******************************************************************************/
/**
* \addtogroup 0x1C13 0x1C13 | SyncManager 3 assignment
* @{
* \brief Object 0x1C13 (SyncManager 3 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C13[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C13[] = "SyncManager 3 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C13 sTxPDOassign
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={1,{0x1A00}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6000 : Txpdo
******************************************************************************/
/**
* \addtogroup 0x6000 0x6000 | Txpdo
* @{
* \brief Object 0x6000 (Txpdo) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Rxlen_1<br>
* SubIndex 2 - RxData_1<br>
* SubIndex 3 - Rxlen_2<br>
* SubIndex 4 - RxData_2<br>
* SubIndex 5 - Rxlen_3<br>
* SubIndex 6 - RxData_3<br>
* SubIndex 7 - Rxlen_4<br>
* SubIndex 8 - RxData_4<br>
* SubIndex 9 - Rxlen_5<br>
* SubIndex 10 - RxData_5<br>
* SubIndex 11 - Rxlen_6<br>
* SubIndex 12 - RxData_6<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex1 - Rxlen_1 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex2 - RxData_1 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex3 - Rxlen_2 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex4 - RxData_2 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex5 - Rxlen_3 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex6 - RxData_3 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex7 - Rxlen_4 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex8 - RxData_4 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex9 - Rxlen_5 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex10 - RxData_5 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex11 - Rxlen_6 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }}; /* Subindex12 - RxData_6 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6000[] = "Txpdo\000"
"Rxlen_1\000"
"RxData_1\000"
"Rxlen_2\000"
"RxData_2\000"
"Rxlen_3\000"
"RxData_3\000"
"Rxlen_4\000"
"RxData_4\000"
"Rxlen_5\000"
"RxData_5\000"
"Rxlen_6\000"
"RxData_6\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT16 Rxlen_1; /* Subindex1 - Rxlen_1 */
CHAR RxData_1[24]; /* Subindex2 - RxData_1 */
UINT16 Rxlen_2; /* Subindex3 - Rxlen_2 */
CHAR RxData_2[24]; /* Subindex4 - RxData_2 */
UINT16 Rxlen_3; /* Subindex5 - Rxlen_3 */
CHAR RxData_3[24]; /* Subindex6 - RxData_3 */
UINT16 Rxlen_4; /* Subindex7 - Rxlen_4 */
CHAR RxData_4[24]; /* Subindex8 - RxData_4 */
UINT16 Rxlen_5; /* Subindex9 - Rxlen_5 */
CHAR RxData_5[24]; /* Subindex10 - RxData_5 */
UINT16 Rxlen_6; /* Subindex11 - Rxlen_6 */
CHAR RxData_6[24]; /* Subindex12 - RxData_6 */
} OBJ_STRUCT_PACKED_END
TOBJ6000;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6000 Txpdo0x6000
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={12,0,"                        ",0,"                        ",0,"                        ",0,"                        ",0,"                        ",0,"                        "}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7000 : Rxpdo
******************************************************************************/
/**
* \addtogroup 0x7000 0x7000 | Rxpdo
* @{
* \brief Object 0x7000 (Rxpdo) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Txlen_1<br>
* SubIndex 2 - TxData_1<br>
* SubIndex 3 - Txlen_2<br>
* SubIndex 4 - TxData_2<br>
* SubIndex 5 - Txlen_3<br>
* SubIndex 6 - TxData_3<br>
* SubIndex 7 - Txlen_4<br>
* SubIndex 8 - TxData_4<br>
* SubIndex 9 - Txlen_5<br>
* SubIndex 10 - TxData_5<br>
* SubIndex 11 - Txlen_6<br>
* SubIndex 12 - TxData_6<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex1 - Txlen_1 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex2 - TxData_1 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex3 - Txlen_2 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex4 - TxData_2 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex5 - Txlen_3 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex6 - TxData_3 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex7 - Txlen_4 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex8 - TxData_4 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex9 - Txlen_5 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex10 - TxData_5 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex11 - Txlen_6 */
{ DEFTYPE_VISIBLESTRING , 0xC0 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }}; /* Subindex12 - TxData_6 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x7000[] = "Rxpdo\000"
"Txlen_1\000"
"TxData_1\000"
"Txlen_2\000"
"TxData_2\000"
"Txlen_3\000"
"TxData_3\000"
"Txlen_4\000"
"TxData_4\000"
"Txlen_5\000"
"TxData_5\000"
"Txlen_6\000"
"TxData_6\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT16 Txlen_1; /* Subindex1 - Txlen_1 */
CHAR TxData_1[24]; /* Subindex2 - TxData_1 */
UINT16 Txlen_2; /* Subindex3 - Txlen_2 */
CHAR TxData_2[24]; /* Subindex4 - TxData_2 */
UINT16 Txlen_3; /* Subindex5 - Txlen_3 */
CHAR TxData_3[24]; /* Subindex6 - TxData_3 */
UINT16 Txlen_4; /* Subindex7 - Txlen_4 */
CHAR TxData_4[24]; /* Subindex8 - TxData_4 */
UINT16 Txlen_5; /* Subindex9 - Txlen_5 */
CHAR TxData_5[24]; /* Subindex10 - TxData_5 */
UINT16 Txlen_6; /* Subindex11 - Txlen_6 */
CHAR TxData_6[24]; /* Subindex12 - TxData_6 */
} OBJ_STRUCT_PACKED_END
TOBJ7000;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7000 Rxpdo0x7000
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={12,0,"                        ",0,"                        ",0,"                        ",0,"                        ",0,"                        ",0,"                        "}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8000 : DevInfo
******************************************************************************/
/**
* \addtogroup 0x8000 0x8000 | DevInfo
* @{
* \brief Object 0x8000 (DevInfo) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Name<br>
* SubIndex 2 - Hv<br>
* SubIndex 3 - Sv<br>
* SubIndex 4 - Sn<br>
* SubIndex 5 - BuildTime<br>
* SubIndex 6 - BR_canfd_ctrl<br>
* SubIndex 7 - BR_canfd_data<br>
* SubIndex 8 - BR_485<br>
* SubIndex 9 - Use120<br>
* SubIndex 10 - Use485<br>
* SubIndex 11 - UseModbus<br>
* SubIndex 12 - 保留<br>
* SubIndex 13 - DevID<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READWRITE },
{ DEFTYPE_VISIBLESTRING , 0x100 , ACCESS_READ }, /* Subindex1 - Name */
{ DEFTYPE_VISIBLESTRING , 0x100 , ACCESS_READ }, /* Subindex2 - Hv */
{ DEFTYPE_VISIBLESTRING , 0x100 , ACCESS_READ }, /* Subindex3 - Sv */
{ DEFTYPE_VISIBLESTRING , 0x100 , ACCESS_READWRITE }, /* Subindex4 - Sn */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - BuildTime */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex6 - BR_canfd_ctrl */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex7 - BR_canfd_data */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex8 - BR_485 */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }, /* Subindex9 - Use120 */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }, /* Subindex10 - Use485 */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }, /* Subindex11 - UseModbus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }, /* Subindex12 - 保留 */
{ DEFTYPE_VISIBLESTRING , 0x30 , ACCESS_READWRITE }}; /* Subindex13 - DevID */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x8000[] = "DevInfo\000"
"Name\000"
"Hv\000"
"Sv\000"
"Sn\000"
"BuildTime\000"
"BR_canfd_ctrl\000"
"BR_canfd_data\000"
"BR_485\000"
"Use120\000"
"Use485\000"
"UseModbus\000"
"SubIndex 012\000"
"DevID\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
CHAR Name[32]; /* Subindex1 - Name */
CHAR Hv[32]; /* Subindex2 - Hv */
CHAR Sv[32]; /* Subindex3 - Sv */
CHAR Sn[32]; /* Subindex4 - Sn */
UINT32 BuildTime; /* Subindex5 - BuildTime */
UINT32 BR_canfd_ctrl; /* Subindex6 - BR_canfd_ctrl */
UINT32 BR_canfd_data; /* Subindex7 - BR_canfd_data */
UINT32 BR_485; /* Subindex8 - BR_485 */
UINT8 Use120; /* Subindex9 - Use120 */
UINT8 Use485; /* Subindex10 - Use485 */
UINT8 UseModbus; /* Subindex11 - UseModbus */
UINT8 SubIndex012; /* Subindex12 - SubIndex 012 */
CHAR DevID[6]; /* Subindex13 - DevID */
} OBJ_STRUCT_PACKED_END
TOBJ8000;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8000 DevInfo0x8000
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={13,"                                ","                                ","                                ","                                ",0x20240910,0x000F4240,0x004C4B40,0x004C4B40,0x00,0x00,0x00,0x00,"      "}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x9000 : SimulateCANFD
******************************************************************************/
/**
* \addtogroup 0x9000 0x9000 | SimulateCANFD
* @{
* \brief Object 0x9000 (SimulateCANFD) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - TxIndex<br>
* SubIndex 2 - TxID<br>
* SubIndex 3 - TxLen<br>
* SubIndex 4 - TxData<br>
* SubIndex 5 - RxIndex<br>
* SubIndex 6 - RxID<br>
* SubIndex 7 - RxLen<br>
* SubIndex 8 - RxData<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x9000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE }, /* Subindex1 - TxIndex */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE }, /* Subindex2 - TxID */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE }, /* Subindex3 - TxLen */
{ DEFTYPE_VISIBLESTRING , 0x200 , ACCESS_READWRITE }, /* Subindex4 - TxData */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE }, /* Subindex5 - RxIndex */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE }, /* Subindex6 - RxID */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE }, /* Subindex7 - RxLen */
{ DEFTYPE_VISIBLESTRING , 0x200 , ACCESS_READWRITE }}; /* Subindex8 - RxData */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x9000[] = "SimulateCANFD\000"
"TxIndex\000"
"TxID\000"
"TxLen\000"
"TxData\000"
"RxIndex\000"
"RxID\000"
"RxLen\000"
"RxData\000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT16 TxIndex; /* Subindex1 - TxIndex */
UINT16 TxID; /* Subindex2 - TxID */
UINT16 TxLen; /* Subindex3 - TxLen */
CHAR TxData[64]; /* Subindex4 - TxData */
UINT16 RxIndex; /* Subindex5 - RxIndex */
UINT16 RxID; /* Subindex6 - RxID */
UINT16 RxLen; /* Subindex7 - RxLen */
CHAR RxData[64]; /* Subindex8 - RxData */
} OBJ_STRUCT_PACKED_END
TOBJ9000;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ9000 SimulateCANFD0x9000
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={8,0,0,0,"                                                                ",0,0,0,"                                                                "}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x9001 : Param Action
******************************************************************************/
/**
* \addtogroup 0x9001 0x9001 | Param Action
* @{
* \brief Object 0x9001 (Param Action) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x9001 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x9001[] = "Param Action\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 ParamAction0x9001
#if defined(_RYHAND_) && (_RYHAND_ == 1)
= 0x0000
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0xF000 : Modular Device Profile
******************************************************************************/
/**
* \addtogroup 0xF000 0xF000 | Modular Device Profile
* @{
* \brief Object 0xF000 (Modular Device Profile) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Index distance <br>
* SubIndex 2 - Maximum number of modules <br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0xF000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }, /* Subindex1 - Index distance  */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }}; /* Subindex2 - Maximum number of modules  */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0xF000[] = "Modular Device Profile\000"
"Index distance \000"
"Maximum number of modules \000\377";
#endif //#ifdef _OBJD_

#ifndef _RYHAND_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT16 IndexDistance; /* Subindex1 - Index distance  */
UINT16 MaximumNumberOfModules; /* Subindex2 - Maximum number of modules  */
} OBJ_STRUCT_PACKED_END
TOBJF000;
#endif //#ifndef _RYHAND_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJF000 ModularDeviceProfile0xF000
#if defined(_RYHAND_) && (_RYHAND_ == 1)
={2,0x0010,0x0008}
#endif
;
/** @}*/







#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1600 */
{NULL , NULL ,  0x1600 , {DEFTYPE_PDOMAPPING , 12 | (OBJCODE_REC << 8)} , asEntryDesc0x1600 , aName0x1600 , &RxpdoProcessDataMapping0x1600 , NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 12 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &TxpdoProcessDataMapping0x1A00 , NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x6000 */
{NULL , NULL ,  0x6000 , {DEFTYPE_RECORD , 12 | (OBJCODE_REC << 8)} , asEntryDesc0x6000 , aName0x6000 , &Txpdo0x6000 , NULL , NULL , 0x0000 },
/* Object 0x7000 */
{NULL , NULL ,  0x7000 , {DEFTYPE_RECORD , 12 | (OBJCODE_REC << 8)} , asEntryDesc0x7000 , aName0x7000 , &Rxpdo0x7000 , NULL , NULL , 0x0000 },
/* Object 0x8000 */
{NULL , NULL ,  0x8000 , {DEFTYPE_RECORD , 13 | (OBJCODE_REC << 8)} , asEntryDesc0x8000 , aName0x8000 , &DevInfo0x8000 , NULL , NULL , 0x0000 },
/* Object 0x9000 */
{NULL , NULL ,  0x9000 , {DEFTYPE_RECORD , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x9000 , aName0x9000 , &SimulateCANFD0x9000 , NULL , NULL , 0x0000 },
/* Object 0x9001 */
{NULL , NULL ,  0x9001 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x9001 , aName0x9001 , &ParamAction0x9001 , NULL , NULL , 0x0000 },
/* Object 0xF000 */
{NULL , NULL ,  0xF000 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0xF000 , aName0xF000 , &ModularDeviceProfile0xF000 , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_

#undef PROTO

/** @}*/
#define _RYHAND_OBJECTS_H_
