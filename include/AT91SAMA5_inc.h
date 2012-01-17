#ifndef __AT91SAMA5_INC_H__
#define __AT91SAMA5_INC_H__

// *****************************************************************************
//               MEMORY MAPPING DEFINITIONS FOR AT91SAM9GX5
// *****************************************************************************
// EBI_CS1
#define AT91C_EBI_CS1		(0x20000000) // EBI Chip Select 1 base address
#define AT91C_EBI_CS1_SIZE	(0x20000000) // EBI Chip Select 1 size in byte (512 Mbytes)

// *****************************************************************************
//               BASE ADDRESS DEFINITIONS FOR AT91SAM9GX5
// *****************************************************************************
#define AT91C_BASE_MCI0		(0xF0000000) // (HSMCI0) Base Address
#define AT91C_BASE_HDMA		(0xFFFFE600) // (HDMA) Base Address
#define AT91C_BASE_HDMA_CH_0	(0xFFFFE63C) // (HDMA_CH_0) Base Address
#define AT91C_BASE_DDR2C        (0xFFFFEA00) // (DDR2C) Base Address
#define AT91C_BASE_CCFG		(0xFFFFED10) // (CCFG) Base Address
#define AT91C_BASE_DBGU		(0xFFFFEE00) // (DBGU) Base Address
#define AT91C_BASE_AIC		(0xFFFFF000) // (AIC) Base Address
#define AT91C_BASE_PIOA		(0xFFFFF200) // (PIOA) Base Address
#define AT91C_BASE_PIOB		(0xFFFFF400) // (PIOB) Base Address
#define AT91C_BASE_PIOD		(0xFFFFF800) // (PIOB) Base Address
#define AT91C_BASE_RSTC		(0xFFFFFE00) // (RSTC) Base Address
#define AT91C_BASE_PMC		(0xFFFFFC00) // (PMC) Base Address
#define AT91C_BASE_WDTC		(0xFFFFFE40) // (WDTC) Base Address

// *****************************************************************************
//               PERIPHERAL ID DEFINITIONS FOR AT91SAM9GX5
// *****************************************************************************
#define AT91C_ID_DBGU             ( 2)  // DBGU
#define AT91C_ID_PIOA             ( 6)  // Parallel IO Controller A
#define AT91C_ID_PIOB             ( 7)  // Parallel IO Controller B
#define AT91C_ID_PIOD             ( 9)  // Parallel IO Controller B
#define AT91C_ID_MCI0             (21)  // High Speed Multimedia Card Interface 0
#define AT91C_ID_HDMA             (30)  // DMA Controller 0
  
// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Parallel Input Output Controler
// *****************************************************************************
// *** Register offset in AT91S_PIO structure ***
#define PIO_PER(p)         ( 0 + (p) * 0x200)   // PIO Enable Register
#define PIO_PDR(p)         ( 4 + (p) * 0x200)   // PIO Disable Register
#define PIO_PSR(p)         ( 8 + (p) * 0x200)   // PIO Status Register
#define PIO_OER(p)         (16 + (p) * 0x200)   // Output Enable Register
#define PIO_ODR(p)         (20 + (p) * 0x200)   // Output Disable Registerr
#define PIO_OSR(p)         (24 + (p) * 0x200)   // Output Status Register
#define PIO_IFER(p)        (32 + (p) * 0x200)   // Input Filter Enable Register
#define PIO_IFDR(p)        (36 + (p) * 0x200)   // Input Filter Disable Register
#define PIO_IFSR(p)        (40 + (p) * 0x200)   // Input Filter Status Register
#define PIO_SODR(p)        (48 + (p) * 0x200)   // Set Output Data Register
#define PIO_CODR(p)        (52 + (p) * 0x200)   // Clear Output Data Register
#define PIO_ODSR(p)        (56 + (p) * 0x200)   // Output Data Status Register
#define PIO_PDSR(p)        (60 + (p) * 0x200)   // Pin Data Status Register
#define PIO_IER(p)         (64 + (p) * 0x200)   // Interrupt Enable Register
#define PIO_IDR(p)         (68 + (p) * 0x200)   // Interrupt Disable Register
#define PIO_IMR(p)         (72 + (p) * 0x200)   // Interrupt Mask Register
#define PIO_ISR(p)         (76 + (p) * 0x200)   // Interrupt Status Register
#define PIO_MDER(p)        (80 + (p) * 0x200)   // Multi-driver Enable Register
#define PIO_MDDR(p)        (84 + (p) * 0x200)   // Multi-driver Disable Register
#define PIO_MDSR(p)        (88 + (p) * 0x200)   // Multi-driver Status Register
#define PIO_PPUDR(p)       (96 + (p) * 0x200)   // Pull-up Disable Register
#define PIO_PPUER(p)       (100 + (p) * 0x200)  // Pull-up Enable Register
#define PIO_PPUSR(p)       (104 + (p) * 0x200)  // Pull-up Status Register
#define PIO_SP1(p)         (112 + (p) * 0x200)  // Select Peripheral 1 Register
#define PIO_SP2(p)         (116 + (p) * 0x200)  // Select Peripheral 2 Register
#define PIO_ABSR(p)        (120 + (p) * 0x200)  // AB Select Status Register
#define PIO_PPDDR(p)       (144 + (p) * 0x200)  // Pull-down Disable Register
#define PIO_PPDER(p)       (148 + (p) * 0x200)  // Pull-down Enable Register
#define PIO_PPDSR(p)       (152 + (p) * 0x200)  // Pull-down Status Register
#define PIO_OWER(p)        (160 + (p) * 0x200)  // Output Write Enable Register
#define PIO_OWDR(p)        (164 + (p) * 0x200)  // Output Write Disable Register
#define PIO_OWSR(p)        (168 + (p) * 0x200)  // Output Write Status Register
#define PIO_ADDRSIZE(p)    (236 + (p) * 0x200)  // PIO ADDRSIZE REGISTER
#define PIO_IPNAME1(p)     (240 + (p) * 0x200)  // PIO IPNAME1  REGISTER
#define PIO_IPNAME2(p)     (244 + (p) * 0x200)  // PIO IPNAME2  REGISTER
#define PIO_FEATURES(p)    (248 + (p) * 0x200)  // PIO FEATURES REGISTER
#define PIO_VER(p)         (252 + (p) * 0x200)  // PIO VERSION  REGISTER
#define PIO_SCHMITT(p)     (256 + (p) * 0x200)  // PIO SCHMITT Register
#define PIO_DELAY1(p)      (272 + (p) * 0x200)  // PIO DELAY1  Register
#define PIO_DRIVE1(p)      (276 + (p) * 0x200)  // PIO DRIVE1  Register
#define PIO_DRIVE2(p)      (280 + (p) * 0x200)  // PIO DRIVE2  Register
#define PIO_SENMR(p)       (336 + (p) * 0x200)  // Sensor Mode Register
#define PIO_SENIER(p)      (340 + (p) * 0x200)  // Sensor Interrupt Enable Register
#define PIO_SENIDR(p)      (344 + (p) * 0x200)  // Sensor Interrupt Disable Register
#define PIO_SENIMR(p)      (348 + (p) * 0x200)  // Sensor Interrupt Mask Register
#define PIO_SENISR(p)      (352 + (p) * 0x200)  // Sensor Interrupt Status Register
#define PIO_SENDATA(p)     (356 + (p) * 0x200)  // Sensor Data Register

#define AT91C_NR_PIO               (32 * 4)

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Debug Unit
// *****************************************************************************
// *** Register offset in AT91S_DBGU structure ***
#define DBGU_CR         ( 0)    // Control Register
#define DBGU_MR         ( 4)    // Mode Register
#define DBGU_IER        ( 8)    // Interrupt Enable Register
#define DBGU_IDR        (12)    // Interrupt Disable Register
#define DBGU_IMR        (16)    // Interrupt Mask Register
#define DBGU_CSR        (20)    // Channel Status Register
#define DBGU_RHR        (24)    // Receiver Holding Register
#define DBGU_THR        (28)    // Transmitter Holding Register
#define DBGU_BRGR       (32)    // Baud Rate Generator Register
#define DBGU_CIDR       (64)    // Chip ID Register
#define DBGU_EXID       (68)    // Chip ID Extension Register
#define DBGU_FNTR       (72)    // Force NTRST Register
#define DBGU_ADDRSIZE   (236)   // DBGU ADDRSIZE REGISTER
#define DBGU_IPNAME1    (240)   // DBGU IPNAME1 REGISTER
#define DBGU_IPNAME2    (244)   // DBGU IPNAME2 REGISTER
#define DBGU_FEATURES   (248)   // DBGU FEATURES REGISTER
#define DBGU_VER        (252)   // DBGU VERSION REGISTER
// -------- DBGU_CR : (DBGU Offset: 0x0) Debug Unit Control Register -------- 
#define AT91C_DBGU_RSTRX          (0x1UL <<  2) // (DBGU) Reset Receiver
#define AT91C_DBGU_RSTTX          (0x1UL <<  3) // (DBGU) Reset Transmitter
#define AT91C_DBGU_RXEN           (0x1UL <<  4) // (DBGU) Receiver Enable
#define AT91C_DBGU_RXDIS          (0x1UL <<  5) // (DBGU) Receiver Disable
#define AT91C_DBGU_TXEN           (0x1UL <<  6) // (DBGU) Transmitter Enable
#define AT91C_DBGU_TXDIS          (0x1UL <<  7) // (DBGU) Transmitter Disable
#define AT91C_DBGU_RSTSTA         (0x1UL <<  8) // (DBGU) Reset Status Bits
// -------- DBGU_MR : (DBGU Offset: 0x4) Debug Unit Mode Register -------- 
#define AT91C_DBGU_PAR            (0x7UL <<  9) // (DBGU) Parity type
#define 	AT91C_DBGU_PAR_EVEN                 (0x0UL <<  9)       // (DBGU) Even Parity
#define 	AT91C_DBGU_PAR_ODD                  (0x1UL <<  9)       // (DBGU) Odd Parity
#define 	AT91C_DBGU_PAR_SPACE                (0x2UL <<  9)       // (DBGU) Parity forced to 0 (Space)
#define 	AT91C_DBGU_PAR_MARK                 (0x3UL <<  9)       // (DBGU) Parity forced to 1 (Mark)
#define 	AT91C_DBGU_PAR_NONE                 (0x4UL <<  9)       // (DBGU) No Parity
#define AT91C_DBGU_CHMODE         (0x3UL << 14) // (DBGU) Channel Mode
#define 	AT91C_DBGU_CHMODE_NORMAL               (0x0UL << 14)    // (DBGU) Normal Mode: The debug unit channel operates as an RX/TX debug unit.
#define 	AT91C_DBGU_CHMODE_AUTO                 (0x1UL << 14)    // (DBGU) Automatic Echo: Receiver Data Input is connected to the TXD pin.
#define 	AT91C_DBGU_CHMODE_LOCAL                (0x2UL << 14)    // (DBGU) Local Loopback: Transmitter Output Signal is connected to Receiver Input Signal.
#define 	AT91C_DBGU_CHMODE_REMOTE               (0x3UL << 14)    // (DBGU) Remote Loopback: RXD pin is internally connected to TXD pin.
// -------- DBGU_IER : (DBGU Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
#define AT91C_DBGU_RXRDY          (0x1UL <<  0) // (DBGU) RXRDY Interrupt
#define AT91C_DBGU_TXRDY          (0x1UL <<  1) // (DBGU) TXRDY Interrupt
#define AT91C_DBGU_ENDRX          (0x1UL <<  3) // (DBGU) End of Receive Transfer Interrupt
#define AT91C_DBGU_ENDTX          (0x1UL <<  4) // (DBGU) End of Transmit Interrupt
#define AT91C_DBGU_OVRE           (0x1UL <<  5) // (DBGU) Overrun Interrupt
#define AT91C_DBGU_FRAME          (0x1UL <<  6) // (DBGU) Framing Error Interrupt
#define AT91C_DBGU_PARE           (0x1UL <<  7) // (DBGU) Parity Error Interrupt
#define AT91C_DBGU_TXEMPTY        (0x1UL <<  9) // (DBGU) TXEMPTY Interrupt
#define AT91C_DBGU_TXBUFE         (0x1UL << 11) // (DBGU) TXBUFE Interrupt
#define AT91C_DBGU_RXBUFF         (0x1UL << 12) // (DBGU) RXBUFF Interrupt
#define AT91C_DBGU_COMM_TX        (0x1UL << 30) // (DBGU) COMM_TX Interrupt
#define AT91C_DBGU_COMM_RX        (0x1UL << 31) // (DBGU) COMM_RX Interrupt
// -------- DBGU_IDR : (DBGU Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
// -------- DBGU_IMR : (DBGU Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
// -------- DBGU_CSR : (DBGU Offset: 0x14) Debug Unit Channel Status Register -------- 
// -------- DBGU_FNTR : (DBGU Offset: 0x48) Debug Unit FORCE_NTRST Register -------- 
#define AT91C_DBGU_FORCE_NTRST    (0x1UL <<  0) // (DBGU) Force NTRST in JTAG

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Usart
// *****************************************************************************
// *** Register offset in AT91S_USART structure ***
#define US_CR           ( 0)    // Control Register
#define US_MR           ( 4)    // Mode Register
#define US_IER          ( 8)    // Interrupt Enable Register
#define US_IDR          (12)    // Interrupt Disable Register
#define US_IMR          (16)    // Interrupt Mask Register
#define US_CSR          (20)    // Channel Status Register
#define US_RHR          (24)    // Receiver Holding Register
#define US_THR          (28)    // Transmitter Holding Register
#define US_BRGR         (32)    // Baud Rate Generator Register
#define US_RTOR         (36)    // Receiver Time-out Register
#define US_TTGR         (40)    // Transmitter Time-guard Register
#define US_FIDI         (64)    // FI_DI_Ratio Register
#define US_NER          (68)    // Nb Errors Register
#define US_IF           (76)    // IRDA_FILTER Register
#define US_MAN          (80)    // Manchester Encoder Decoder Register
#define US_ADDRSIZE     (236)   // US ADDRSIZE REGISTER
#define US_IPNAME1      (240)   // US IPNAME1 REGISTER
#define US_IPNAME2      (244)   // US IPNAME2 REGISTER
#define US_FEATURES     (248)   // US FEATURES REGISTER
#define US_VER          (252)   // VERSION Register
// -------- US_CR : (USART Offset: 0x0)  Control Register -------- 
#define AT91C_US_RSTRX            (0x1UL <<  2) // (USART) Reset Receiver
#define AT91C_US_RSTTX            (0x1UL <<  3) // (USART) Reset Transmitter
#define AT91C_US_RXEN             (0x1UL <<  4) // (USART) Receiver Enable
#define AT91C_US_RXDIS            (0x1UL <<  5) // (USART) Receiver Disable
#define AT91C_US_TXEN             (0x1UL <<  6) // (USART) Transmitter Enable
#define AT91C_US_TXDIS            (0x1UL <<  7) // (USART) Transmitter Disable
#define AT91C_US_RSTSTA           (0x1UL <<  8) // (USART) Reset Status Bits
#define AT91C_US_STTBRK           (0x1UL <<  9) // (USART) Start Break
#define AT91C_US_STPBRK           (0x1UL << 10) // (USART) Stop Break
#define AT91C_US_STTTO            (0x1UL << 11) // (USART) Start Time-out
#define AT91C_US_SENDA            (0x1UL << 12) // (USART) Send Address
#define AT91C_US_RSTIT            (0x1UL << 13) // (USART) Reset Iterations
#define AT91C_US_RSTNACK          (0x1UL << 14) // (USART) Reset Non Acknowledge
#define AT91C_US_RETTO            (0x1UL << 15) // (USART) Rearm Time-out
#define AT91C_US_DTREN            (0x1UL << 16) // (USART) Data Terminal ready Enable
#define AT91C_US_DTRDIS           (0x1UL << 17) // (USART) Data Terminal ready Disable
#define AT91C_US_RTSEN            (0x1UL << 18) // (USART) Request to Send enable
#define AT91C_US_RTSDIS           (0x1UL << 19) // (USART) Request to Send Disable
// -------- US_MR : (USART Offset: 0x4)  Mode Register -------- 
#define AT91C_US_USMODE           (0xFUL <<  0) // (USART) Usart mode
#define 	AT91C_US_USMODE_NORMAL               (0x0UL)    // (USART) Normal
#define 	AT91C_US_USMODE_RS485                (0x1UL)    // (USART) RS485
#define 	AT91C_US_USMODE_HWHSH                (0x2UL)    // (USART) Hardware Handshaking
#define 	AT91C_US_USMODE_MODEM                (0x3UL)    // (USART) Modem
#define 	AT91C_US_USMODE_ISO7816_0            (0x4UL)    // (USART) ISO7816 protocol: T = 0
#define 	AT91C_US_USMODE_ISO7816_1            (0x6UL)    // (USART) ISO7816 protocol: T = 1
#define 	AT91C_US_USMODE_IRDA                 (0x8UL)    // (USART) IrDA
#define 	AT91C_US_USMODE_SWHSH                (0xCUL)    // (USART) Software Handshaking
#define AT91C_US_CLKS             (0x3UL <<  4) // (USART) Clock Selection (Baud Rate generator Input Clock
#define 	AT91C_US_CLKS_CLOCK                (0x0UL <<  4)        // (USART) Clock
#define 	AT91C_US_CLKS_FDIV1                (0x1UL <<  4)        // (USART) fdiv1
#define 	AT91C_US_CLKS_SLOW                 (0x2UL <<  4)        // (USART) slow_clock (ARM)
#define 	AT91C_US_CLKS_EXT                  (0x3UL <<  4)        // (USART) External (SCK)
#define AT91C_US_CHRL             (0x3UL <<  6) // (USART) Clock Selection (Baud Rate generator Input Clock
#define 	AT91C_US_CHRL_5_BITS               (0x0UL <<  6)        // (USART) Character Length: 5 bits
#define 	AT91C_US_CHRL_6_BITS               (0x1UL <<  6)        // (USART) Character Length: 6 bits
#define 	AT91C_US_CHRL_7_BITS               (0x2UL <<  6)        // (USART) Character Length: 7 bits
#define 	AT91C_US_CHRL_8_BITS               (0x3UL <<  6)        // (USART) Character Length: 8 bits
#define AT91C_US_SYNC             (0x1UL <<  8) // (USART) Synchronous Mode Select
#define AT91C_US_PAR              (0x7UL <<  9) // (USART) Parity type
#define 	AT91C_US_PAR_EVEN                 (0x0UL <<  9) // (USART) Even Parity
#define 	AT91C_US_PAR_ODD                  (0x1UL <<  9) // (USART) Odd Parity
#define 	AT91C_US_PAR_SPACE                (0x2UL <<  9) // (USART) Parity forced to 0 (Space)
#define 	AT91C_US_PAR_MARK                 (0x3UL <<  9) // (USART) Parity forced to 1 (Mark)
#define 	AT91C_US_PAR_NONE                 (0x4UL <<  9) // (USART) No Parity
#define 	AT91C_US_PAR_MULTI_DROP           (0x6UL <<  9) // (USART) Multi-drop mode
#define AT91C_US_NBSTOP           (0x3UL << 12) // (USART) Number of Stop bits
#define 	AT91C_US_NBSTOP_1_BIT                (0x0UL << 12)      // (USART) 1 stop bit
#define 	AT91C_US_NBSTOP_15_BIT               (0x1UL << 12)      // (USART) Asynchronous (SYNC=0) 2 stop bits Synchronous (SYNC=1) 2 stop bits
#define 	AT91C_US_NBSTOP_2_BIT                (0x2UL << 12)      // (USART) 2 stop bits
#define AT91C_US_CHMODE           (0x3UL << 14) // (USART) Channel Mode
#define 	AT91C_US_CHMODE_NORMAL               (0x0UL << 14)      // (USART) Normal Mode: The USART channel operates as an RX/TX USART.
#define 	AT91C_US_CHMODE_AUTO                 (0x1UL << 14)      // (USART) Automatic Echo: Receiver Data Input is connected to the TXD pin.
#define 	AT91C_US_CHMODE_LOCAL                (0x2UL << 14)      // (USART) Local Loopback: Transmitter Output Signal is connected to Receiver Input Signal.
#define 	AT91C_US_CHMODE_REMOTE               (0x3UL << 14)      // (USART) Remote Loopback: RXD pin is internally connected to TXD pin.
#define AT91C_US_MSBF             (0x1UL << 16) // (USART) Bit Order
#define AT91C_US_MODE9            (0x1UL << 17) // (USART) 9-bit Character length
#define AT91C_US_CKLO             (0x1UL << 18) // (USART) Clock Output Select
#define AT91C_US_OVER             (0x1UL << 19) // (USART) Over Sampling Mode
#define AT91C_US_INACK            (0x1UL << 20) // (USART) Inhibit Non Acknowledge
#define AT91C_US_DSNACK           (0x1UL << 21) // (USART) Disable Successive NACK
#define AT91C_US_VAR_SYNC         (0x1UL << 22) // (USART) Variable synchronization of command/data sync Start Frame Delimiter
#define AT91C_US_MAX_ITER         (0x1UL << 24) // (USART) Number of Repetitions
#define AT91C_US_FILTER           (0x1UL << 28) // (USART) Receive Line Filter
#define AT91C_US_MANMODE          (0x1UL << 29) // (USART) Manchester Encoder/Decoder Enable
#define AT91C_US_MODSYNC          (0x1UL << 30) // (USART) Manchester Synchronization mode
#define AT91C_US_ONEBIT           (0x1UL << 31) // (USART) Start Frame Delimiter selector
// -------- US_IER : (USART Offset: 0x8)  Interrupt Enable Register -------- 
#define AT91C_US_RXRDY            (0x1UL <<  0) // (USART) RXRDY Interrupt
#define AT91C_US_TXRDY            (0x1UL <<  1) // (USART) TXRDY Interrupt
#define AT91C_US_RXBRK            (0x1UL <<  2) // (USART) Break Received/End of Break
#define AT91C_US_ENDRX            (0x1UL <<  3) // (USART) End of Receive Transfer Interrupt
#define AT91C_US_ENDTX            (0x1UL <<  4) // (USART) End of Transmit Interrupt
#define AT91C_US_OVRE             (0x1UL <<  5) // (USART) Overrun Interrupt
#define AT91C_US_FRAME            (0x1UL <<  6) // (USART) Framing Error Interrupt
#define AT91C_US_PARE             (0x1UL <<  7) // (USART) Parity Error Interrupt
#define AT91C_US_TIMEOUT          (0x1UL <<  8) // (USART) Receiver Time-out
#define AT91C_US_TXEMPTY          (0x1UL <<  9) // (USART) TXEMPTY Interrupt
#define AT91C_US_ITERATION        (0x1UL << 10) // (USART) Max number of Repetitions Reached
#define AT91C_US_TXBUFE           (0x1UL << 11) // (USART) TXBUFE Interrupt
#define AT91C_US_RXBUFF           (0x1UL << 12) // (USART) RXBUFF Interrupt
#define AT91C_US_NACK             (0x1UL << 13) // (USART) Non Acknowledge
#define AT91C_US_RIIC             (0x1UL << 16) // (USART) Ring INdicator Input Change Flag
#define AT91C_US_DSRIC            (0x1UL << 17) // (USART) Data Set Ready Input Change Flag
#define AT91C_US_DCDIC            (0x1UL << 18) // (USART) Data Carrier Flag
#define AT91C_US_CTSIC            (0x1UL << 19) // (USART) Clear To Send Input Change Flag
#define AT91C_US_MANE             (0x1UL << 20) // (USART) Manchester Error Interrupt
// -------- US_IDR : (USART Offset: 0xc)  Interrupt Disable Register -------- 
// -------- US_IMR : (USART Offset: 0x10)  Interrupt Mask Register -------- 
// -------- US_CSR : (USART Offset: 0x14)  Channel Status Register -------- 
#define AT91C_US_RI               (0x1UL << 20) // (USART) Image of RI Input
#define AT91C_US_DSR              (0x1UL << 21) // (USART) Image of DSR Input
#define AT91C_US_DCD              (0x1UL << 22) // (USART) Image of DCD Input
#define AT91C_US_CTS              (0x1UL << 23) // (USART) Image of CTS Input
#define AT91C_US_MANERR           (0x1UL << 24) // (USART) Manchester Error
// -------- US_MAN : (USART Offset: 0x50) Manchester Encoder Decoder Register -------- 
#define AT91C_US_TX_PL            (0xFUL <<  0) // (USART) Transmitter Preamble Length
#define AT91C_US_TX_PP            (0x3UL <<  8) // (USART) Transmitter Preamble Pattern
#define 	AT91C_US_TX_PP_ALL_ONE              (0x0UL <<  8)       // (USART) ALL_ONE
#define 	AT91C_US_TX_PP_ALL_ZERO             (0x1UL <<  8)       // (USART) ALL_ZERO
#define 	AT91C_US_TX_PP_ZERO_ONE             (0x2UL <<  8)       // (USART) ZERO_ONE
#define 	AT91C_US_TX_PP_ONE_ZERO             (0x3UL <<  8)       // (USART) ONE_ZERO
#define AT91C_US_TX_MPOL          (0x1UL << 12) // (USART) Transmitter Manchester Polarity
#define AT91C_US_RX_PL            (0xFUL << 16) // (USART) Receiver Preamble Length
#define AT91C_US_RX_PP            (0x3UL << 24) // (USART) Receiver Preamble Pattern detected
#define 	AT91C_US_RX_PP_ALL_ONE              (0x0UL << 24)       // (USART) ALL_ONE
#define 	AT91C_US_RX_PP_ALL_ZERO             (0x1UL << 24)       // (USART) ALL_ZERO
#define 	AT91C_US_RX_PP_ZERO_ONE             (0x2UL << 24)       // (USART) ZERO_ONE
#define 	AT91C_US_RX_PP_ONE_ZERO             (0x3UL << 24)       // (USART) ONE_ZERO
#define AT91C_US_RX_MPOL          (0x1UL << 28) // (USART) Receiver Manchester Polarity
#define AT91C_US_DRIFT            (0x1UL << 30) // (USART) Drift compensation

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Advanced Interrupt Controller
// *****************************************************************************
// *** Register offset in AT91S_AIC structure ***
#define AIC_SSR		(0x00)	// Source Select Register
#define AIC_SMR		(0x04)	// Source Mode Register
#define AIC_SVR		(0x08)	// Source Vector Register
#define AIC_IVR		(0x10)	// IRQ Vector Register
#define AIC_FVR		(0x14)	// FIQ Vector Register
#define AIC_ISR		(0x18)	// Interrupt Status Register
#define AIC_IPR0	(0x20)	// Interrupt Pending Register 0
#define AIC_IPR1	(0x24)	// Interrupt Pending Register 1
#define AIC_IPR2	(0x28)	// Interrupt Pending Register 2
#define AIC_IPR3	(0x2C)	// Interrupt Pending Register 3
#define AIC_IMR		(0x30)	// Interrupt Mask Register
#define AIC_CISR	(0x34)	// Core Interrupt Status Register
#define AIC_EOICR	(0x38)	// End of Interrupt Command Register
#define AIC_SPU		(0x3C)	// Spurious Vector Register
#define AIC_IECR	(0x40)	// Interrupt Enable Command Register
#define AIC_IDCR	(0x44)	// Interrupt Disable Command Register
#define AIC_ICCR	(0x48)	// Interrupt Clear Command Register
#define AIC_ISCR	(0x4C)	// Interrupt Set Command Register
#define AIC_FFER	(0x50)	// Fast Forcing Enable Register
#define AIC_FFDR	(0x54)	// Fast Forcing Disable Register
#define AIC_FFSR	(0x58)	// Fast Forcing Status Register
#define AIC_SVRRER	(0x60)	// SVR Return Enable Register
#define AIC_SVRRDR	(0x64)	// SVR Return Disable Register
#define AIC_SVRRSR	(0x68)	// SVR Return Status Register
#define AIC_DCR		(0x6C)	// Debug Control Register
#define AIC_WPMR	(0xE4)	// Write Protect Mode Register
#define AIC_WPSR	(0xE8)	// Write Protect Status Register
// -------- AIC_SMR : (AIC Offset: 0x0) Control Register -------- 
#define AT91C_AIC_PRIOR           (0x7UL <<  0) // (AIC) Priority Level
#define 	AT91C_AIC_PRIOR_LOWEST               (0x0UL)    // (AIC) Lowest priority level
#define 	AT91C_AIC_PRIOR_HIGHEST              (0x7UL)    // (AIC) Highest priority level
#define AT91C_AIC_SRCTYPE         (0x3UL <<  5) // (AIC) Interrupt Source Type
#define 	AT91C_AIC_SRCTYPE_INT_LEVEL_SENSITIVE  (0x0UL <<  5)    // (AIC) Internal Sources Code Label Level Sensitive
#define 	AT91C_AIC_SRCTYPE_INT_EDGE_TRIGGERED   (0x1UL <<  5)    // (AIC) Internal Sources Code Label Edge triggered
#define 	AT91C_AIC_SRCTYPE_EXT_HIGH_LEVEL       (0x2UL <<  5)    // (AIC) External Sources Code Label High-level Sensitive
#define 	AT91C_AIC_SRCTYPE_EXT_POSITIVE_EDGE    (0x3UL <<  5)    // (AIC) External Sources Code Label Positive Edge triggered
// -------- AIC_CISR : (AIC Offset: 0x114) AIC Core Interrupt Status Register -------- 
#define AT91C_AIC_NFIQ            (0x1UL <<  0) // (AIC) NFIQ Status
#define AT91C_AIC_NIRQ            (0x1UL <<  1) // (AIC) NIRQ Status
// -------- AIC_DCR : (AIC Offset: 0x138) AIC Debug Control Register -------- 
#define AT91C_AIC_DCR_PROT        (0x1UL <<  0) // (AIC) Protection Mode
#define AT91C_AIC_DCR_GMSK        (0x1UL <<  1) // (AIC) General Mask

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR HDMA Channel structure
// *****************************************************************************
// *** Register offset in AT91S_HDMA_CH structure ***
#define HDMA_SADDR      ( 0)    // HDMA Channel Source Address Register
#define HDMA_DADDR      ( 4)    // HDMA Channel Destination Address Register
#define HDMA_DSCR       ( 8)    // HDMA Channel Descriptor Address Register
#define HDMA_CTRLA      (12)    // HDMA Channel Control A Register
#define HDMA_CTRLB      (16)    // HDMA Channel Control B Register
#define HDMA_CFG        (20)    // HDMA Channel Configuration Register
#define HDMA_SPIP       (24)    // HDMA Channel Source Picture in Picture Configuration Register
#define HDMA_DPIP       (28)    // HDMA Channel Destination Picture in Picture Configuration Register
#define HDMA_BDSCR      (32)    // HDMA Reserved
#define HDMA_CADDR      (36)    // HDMA Reserved
// -------- HDMA_SADDR : (HDMA_CH Offset: 0x0)  -------- 
#define AT91C_SADDR               (0x0UL <<  0) // (HDMA_CH)
// -------- HDMA_DADDR : (HDMA_CH Offset: 0x4)  -------- 
#define AT91C_DADDR               (0x0UL <<  0) // (HDMA_CH)
// -------- HDMA_DSCR : (HDMA_CH Offset: 0x8)  -------- 
#define AT91C_HDMA_DSCR_IF        (0x3UL <<  0) // (HDMA_CH) Select AHB-Lite Interface for current channel
#define 	AT91C_HDMA_DSCR_IF_0                    (0x0UL) // (HDMA_CH) The Buffer Transfer descriptor is fetched via AHB-Lite Interface 0.
#define 	AT91C_HDMA_DSCR_IF_1                    (0x1UL) // (HDMA_CH) The Buffer Transfer descriptor is fetched via AHB-Lite Interface 1.
#define 	AT91C_HDMA_DSCR_IF_2                    (0x2UL) // (HDMA_CH) The Buffer Transfer descriptor is fetched via AHB-Lite Interface 2.
#define 	AT91C_HDMA_DSCR_IF_3                    (0x3UL) // (HDMA_CH) The Buffer Transfer descriptor is fetched via AHB-Lite Interface 3.
#define AT91C_HDMA_DSCR           (0x3FFFFFFFUL <<  2)  // (HDMA_CH) Buffer Transfer descriptor address. This address is word aligned.
// -------- HDMA_CTRLA : (HDMA_CH Offset: 0xc)  -------- 
#define AT91C_HDMA_BTSIZE         (0xFFFFUL <<  0)      // (HDMA_CH) Buffer Transfer Size.
#define AT91C_HDMA_SCSIZE         (0x7UL << 16) // (HDMA_CH) Source Chunk Transfer Size.
#define 	AT91C_HDMA_SCSIZE_1                    (0x0UL << 16)    // (HDMA_CH) 1.
#define 	AT91C_HDMA_SCSIZE_4                    (0x1UL << 16)    // (HDMA_CH) 4.
#define 	AT91C_HDMA_SCSIZE_8                    (0x2UL << 16)    // (HDMA_CH) 8.
#define 	AT91C_HDMA_SCSIZE_16                   (0x3UL << 16)    // (HDMA_CH) 16.
#define 	AT91C_HDMA_SCSIZE_32                   (0x4UL << 16)    // (HDMA_CH) 32.
#define 	AT91C_HDMA_SCSIZE_64                   (0x5UL << 16)    // (HDMA_CH) 64.
#define 	AT91C_HDMA_SCSIZE_128                  (0x6UL << 16)    // (HDMA_CH) 128.
#define 	AT91C_HDMA_SCSIZE_256                  (0x7UL << 16)    // (HDMA_CH) 256.
#define AT91C_HDMA_DCSIZE         (0x7UL << 20) // (HDMA_CH) Destination Chunk Transfer Size
#define 	AT91C_HDMA_DCSIZE_1                    (0x0UL << 20)    // (HDMA_CH) 1.
#define 	AT91C_HDMA_DCSIZE_4                    (0x1UL << 20)    // (HDMA_CH) 4.
#define 	AT91C_HDMA_DCSIZE_8                    (0x2UL << 20)    // (HDMA_CH) 8.
#define 	AT91C_HDMA_DCSIZE_16                   (0x3UL << 20)    // (HDMA_CH) 16.
#define 	AT91C_HDMA_DCSIZE_32                   (0x4UL << 20)    // (HDMA_CH) 32.
#define 	AT91C_HDMA_DCSIZE_64                   (0x5UL << 20)    // (HDMA_CH) 64.
#define 	AT91C_HDMA_DCSIZE_128                  (0x6UL << 20)    // (HDMA_CH) 128.
#define 	AT91C_HDMA_DCSIZE_256                  (0x7UL << 20)    // (HDMA_CH) 256.
#define AT91C_HDMA_SRC_WIDTH      (0x3UL << 24) // (HDMA_CH) Source Single Transfer Size
#define 	AT91C_HDMA_SRC_WIDTH_BYTE                 (0x0UL << 24) // (HDMA_CH) BYTE.
#define 	AT91C_HDMA_SRC_WIDTH_HALFWORD             (0x1UL << 24) // (HDMA_CH) HALF-WORD.
#define 	AT91C_HDMA_SRC_WIDTH_WORD                 (0x2UL << 24) // (HDMA_CH) WORD.
#define AT91C_HDMA_DST_WIDTH      (0x3UL << 28) // (HDMA_CH) Destination Single Transfer Size
#define 	AT91C_HDMA_DST_WIDTH_BYTE                 (0x0UL << 28) // (HDMA_CH) BYTE.
#define 	AT91C_HDMA_DST_WIDTH_HALFWORD             (0x1UL << 28) // (HDMA_CH) HALF-WORD.
#define 	AT91C_HDMA_DST_WIDTH_WORD                 (0x2UL << 28) // (HDMA_CH) WORD.
#define AT91C_HDMA_DONE           (0x1UL << 31) // (HDMA_CH)
// -------- HDMA_CTRLB : (HDMA_CH Offset: 0x10)  -------- 
#define AT91C_HDMA_SIF            (0x3UL <<  0) // (HDMA_CH) Source Interface Selection Field.
#define 	AT91C_HDMA_SIF_0                    (0x0UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 0.
#define 	AT91C_HDMA_SIF_1                    (0x1UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 1.
#define 	AT91C_HDMA_SIF_2                    (0x2UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 2.
#define 	AT91C_HDMA_SIF_3                    (0x3UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 3.
#define AT91C_HDMA_DIF            (0x3UL <<  4) // (HDMA_CH) Destination Interface Selection Field.
#define 	AT91C_HDMA_DIF_0                    (0x0UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 0.
#define 	AT91C_HDMA_DIF_1                    (0x1UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 1.
#define 	AT91C_HDMA_DIF_2                    (0x2UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 2.
#define 	AT91C_HDMA_DIF_3                    (0x3UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 3.
#define AT91C_HDMA_SRC_PIP        (0x1UL <<  8) // (HDMA_CH) Source Picture-in-Picture Mode
#define 	AT91C_HDMA_SRC_PIP_DISABLE              (0x0UL <<  8)   // (HDMA_CH) Source Picture-in-Picture mode is disabled.
#define 	AT91C_HDMA_SRC_PIP_ENABLE               (0x1UL <<  8)   // (HDMA_CH) Source Picture-in-Picture mode is enabled.
#define AT91C_HDMA_DST_PIP        (0x1UL << 12) // (HDMA_CH) Destination Picture-in-Picture Mode
#define 	AT91C_HDMA_DST_PIP_DISABLE              (0x0UL << 12)   // (HDMA_CH) Destination Picture-in-Picture mode is disabled.
#define 	AT91C_HDMA_DST_PIP_ENABLE               (0x1UL << 12)   // (HDMA_CH) Destination Picture-in-Picture mode is enabled.
#define AT91C_HDMA_SRC_DSCR       (0x1UL << 16) // (HDMA_CH) Source Buffer Descriptor Fetch operation
#define 	AT91C_HDMA_SRC_DSCR_FETCH_FROM_MEM       (0x0UL << 16)  // (HDMA_CH) Source address is updated when the descriptor is fetched from the memory.
#define 	AT91C_HDMA_SRC_DSCR_FETCH_DISABLE        (0x1UL << 16)  // (HDMA_CH) Buffer Descriptor Fetch operation is disabled for the Source.
#define AT91C_HDMA_DST_DSCR       (0x1UL << 20) // (HDMA_CH) Destination Buffer Descriptor operation
#define 	AT91C_HDMA_DST_DSCR_FETCH_FROM_MEM       (0x0UL << 20)  // (HDMA_CH) Destination address is updated when the descriptor is fetched from the memory.
#define 	AT91C_HDMA_DST_DSCR_FETCH_DISABLE        (0x1UL << 20)  // (HDMA_CH) Buffer Descriptor Fetch operation is disabled for the destination.
#define AT91C_HDMA_FC             (0x7UL << 21) // (HDMA_CH) This field defines which devices controls the size of the buffer transfer, also referred as to the Flow Controller.
#define 	AT91C_HDMA_FC_MEM2MEM              (0x0UL << 21)        // (HDMA_CH) Memory-to-Memory (DMA Controller).
#define 	AT91C_HDMA_FC_MEM2PER              (0x1UL << 21)        // (HDMA_CH) Memory-to-Peripheral (DMA Controller).
#define 	AT91C_HDMA_FC_PER2MEM              (0x2UL << 21)        // (HDMA_CH) Peripheral-to-Memory (DMA Controller).
#define 	AT91C_HDMA_FC_PER2PER              (0x3UL << 21)        // (HDMA_CH) Peripheral-to-Peripheral (DMA Controller).
#define 	AT91C_HDMA_FC_PER2MEM_PER          (0x4UL << 21)        // (HDMA_CH) Peripheral-to-Memory (Peripheral).
#define 	AT91C_HDMA_FC_MEM2PER_PER          (0x5UL << 21)        // (HDMA_CH) Memory-to-Peripheral (Peripheral).
#define 	AT91C_HDMA_FC_PER2PER_PER          (0x6UL << 21)        // (HDMA_CH) Peripheral-to-Peripheral (Source Peripheral).
#define AT91C_HDMA_SRC_ADDRESS_MODE (0x3UL << 24)       // (HDMA_CH) Type of addressing mode
#define 	AT91C_HDMA_SRC_ADDRESS_MODE_INCR                 (0x0UL << 24)  // (HDMA_CH) Incrementing Mode.
#define 	AT91C_HDMA_SRC_ADDRESS_MODE_DECR                 (0x1UL << 24)  // (HDMA_CH) Decrementing Mode.
#define 	AT91C_HDMA_SRC_ADDRESS_MODE_FIXED                (0x2UL << 24)  // (HDMA_CH) Fixed Mode.
#define AT91C_HDMA_DST_ADDRESS_MODE (0x3UL << 28)       // (HDMA_CH) Type of addressing mode
#define 	AT91C_HDMA_DST_ADDRESS_MODE_INCR                 (0x0UL << 28)  // (HDMA_CH) Incrementing Mode.
#define 	AT91C_HDMA_DST_ADDRESS_MODE_DECR                 (0x1UL << 28)  // (HDMA_CH) Decrementing Mode.
#define 	AT91C_HDMA_DST_ADDRESS_MODE_FIXED                (0x2UL << 28)  // (HDMA_CH) Fixed Mode.
#define AT91C_HDMA_AUTO           (0x1UL << 31) // (HDMA_CH) Automatic multiple buffer transfer enable
#define 	AT91C_HDMA_AUTO_DISABLE              (0x0UL << 31)      // (HDMA_CH) Automatic multiple buffer transfer is disabled.
#define 	AT91C_HDMA_AUTO_ENABLE               (0x1UL << 31)      // (HDMA_CH) Automatic multiple buffer transfer is enabled. This enables replay mode or contiguous mode when several buffers are transferred.
// -------- HDMA_CFG : (HDMA_CH Offset: 0x14)  -------- 
#define AT91C_HDMA_SRC_PER        (0xFUL <<  0) // (HDMA_CH) Channel Source Request is associated with peripheral identifier coded SRC_PER handshaking interface.
#define 	AT91C_HDMA_SRC_PER_0                    (0x0UL) // (HDMA_CH) HW Handshaking Interface number 0.
#define 	AT91C_HDMA_SRC_PER_1                    (0x1UL) // (HDMA_CH) HW Handshaking Interface number 1.
#define 	AT91C_HDMA_SRC_PER_2                    (0x2UL) // (HDMA_CH) HW Handshaking Interface number 2.
#define 	AT91C_HDMA_SRC_PER_3                    (0x3UL) // (HDMA_CH) HW Handshaking Interface number 3.
#define 	AT91C_HDMA_SRC_PER_4                    (0x4UL) // (HDMA_CH) HW Handshaking Interface number 4.
#define 	AT91C_HDMA_SRC_PER_5                    (0x5UL) // (HDMA_CH) HW Handshaking Interface number 5.
#define 	AT91C_HDMA_SRC_PER_6                    (0x6UL) // (HDMA_CH) HW Handshaking Interface number 6.
#define 	AT91C_HDMA_SRC_PER_7                    (0x7UL) // (HDMA_CH) HW Handshaking Interface number 7.
#define 	AT91C_HDMA_SRC_PER_8                    (0x8UL) // (HDMA_CH) HW Handshaking Interface number 8.
#define 	AT91C_HDMA_SRC_PER_9                    (0x9UL) // (HDMA_CH) HW Handshaking Interface number 9.
#define 	AT91C_HDMA_SRC_PER_10                   (0xAUL) // (HDMA_CH) HW Handshaking Interface number 10.
#define 	AT91C_HDMA_SRC_PER_11                   (0xBUL) // (HDMA_CH) HW Handshaking Interface number 11.
#define 	AT91C_HDMA_SRC_PER_12                   (0xCUL) // (HDMA_CH) HW Handshaking Interface number 12.
#define 	AT91C_HDMA_SRC_PER_13                   (0xDUL) // (HDMA_CH) HW Handshaking Interface number 13.
#define 	AT91C_HDMA_SRC_PER_14                   (0xEUL) // (HDMA_CH) HW Handshaking Interface number 14.
#define 	AT91C_HDMA_SRC_PER_15                   (0xFUL) // (HDMA_CH) HW Handshaking Interface number 15.
#define AT91C_HDMA_DST_PER        (0xFUL <<  4) // (HDMA_CH) Channel Destination Request is associated with peripheral identifier coded DST_PER handshaking interface.
#define 	AT91C_HDMA_DST_PER_0                    (0x0UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 0.
#define 	AT91C_HDMA_DST_PER_1                    (0x1UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 1.
#define 	AT91C_HDMA_DST_PER_2                    (0x2UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 2.
#define 	AT91C_HDMA_DST_PER_3                    (0x3UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 3.
#define 	AT91C_HDMA_DST_PER_4                    (0x4UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 4.
#define 	AT91C_HDMA_DST_PER_5                    (0x5UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 5.
#define 	AT91C_HDMA_DST_PER_6                    (0x6UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 6.
#define 	AT91C_HDMA_DST_PER_7                    (0x7UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 7.
#define 	AT91C_HDMA_DST_PER_8                    (0x8UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 8.
#define 	AT91C_HDMA_DST_PER_9                    (0x9UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 9.
#define 	AT91C_HDMA_DST_PER_10                   (0xAUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 10.
#define 	AT91C_HDMA_DST_PER_11                   (0xBUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 11.
#define 	AT91C_HDMA_DST_PER_12                   (0xCUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 12.
#define 	AT91C_HDMA_DST_PER_13                   (0xDUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 13.
#define 	AT91C_HDMA_DST_PER_14                   (0xEUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 14.
#define 	AT91C_HDMA_DST_PER_15                   (0xFUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 15.
#define AT91C_HDMA_SRC_REP        (0x1UL <<  8) // (HDMA_CH) Source Replay Mode
#define 	AT91C_HDMA_SRC_REP_CONTIGUOUS_ADDR      (0x0UL <<  8)   // (HDMA_CH) When automatic mode is activated, source address is contiguous between two buffers.
#define 	AT91C_HDMA_SRC_REP_RELOAD_ADDR          (0x1UL <<  8)   // (HDMA_CH) When automatic mode is activated, the source address and the control register are reloaded from previous transfer..
#define AT91C_HDMA_SRC_H2SEL      (0x1UL <<  9) // (HDMA_CH) Source Handshaking Mode
#define 	AT91C_HDMA_SRC_H2SEL_SW                   (0x0UL <<  9) // (HDMA_CH) Software handshaking interface is used to trigger a transfer request.
#define 	AT91C_HDMA_SRC_H2SEL_HW                   (0x1UL <<  9) // (HDMA_CH) Hardware handshaking interface is used to trigger a transfer request.
#define AT91C_HDMA_DST_REP        (0x1UL << 12) // (HDMA_CH) Destination Replay Mode
#define 	AT91C_HDMA_DST_REP_CONTIGUOUS_ADDR      (0x0UL << 12)   // (HDMA_CH) When automatic mode is activated, destination address is contiguous between two buffers.
#define 	AT91C_HDMA_DST_REP_RELOAD_ADDR          (0x1UL << 12)   // (HDMA_CH) When automatic mode is activated, the destination address and the control register are reloaded from previous transfer..
#define AT91C_HDMA_DST_H2SEL      (0x1UL << 13) // (HDMA_CH) Destination Handshaking Mode
#define 	AT91C_HDMA_DST_H2SEL_SW                   (0x0UL << 13) // (HDMA_CH) Software handshaking interface is used to trigger a transfer request.
#define 	AT91C_HDMA_DST_H2SEL_HW                   (0x1UL << 13) // (HDMA_CH) Hardware handshaking interface is used to trigger a transfer request.
#define AT91C_HDMA_SOD            (0x1UL << 16) // (HDMA_CH) STOP ON DONE
#define 	AT91C_HDMA_SOD_DISABLE              (0x0UL << 16)       // (HDMA_CH) STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
#define 	AT91C_HDMA_SOD_ENABLE               (0x1UL << 16)       // (HDMA_CH) STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
#define AT91C_HDMA_LOCK_IF        (0x1UL << 20) // (HDMA_CH) Interface Lock
#define 	AT91C_HDMA_LOCK_IF_DISABLE              (0x0UL << 20)   // (HDMA_CH) Interface Lock capability is disabled.
#define 	AT91C_HDMA_LOCK_IF_ENABLE               (0x1UL << 20)   // (HDMA_CH) Interface Lock capability is enabled.
#define AT91C_HDMA_LOCK_B         (0x1UL << 21) // (HDMA_CH) AHB Bus Lock
#define 	AT91C_HDMA_LOCK_B_DISABLE              (0x0UL << 21)    // (HDMA_CH) AHB Bus Locking capability is disabled.
#define 	AT91C_HDMA_LOCK_B_ENABLE               (0x1UL << 21)    // (HDMA_CH) AHB Bus Locking capability is enabled.
#define AT91C_HDMA_LOCK_IF_L      (0x1UL << 22) // (HDMA_CH) Master Interface Arbiter Lock
#define 	AT91C_HDMA_LOCK_IF_L_CHUNK                (0x0UL << 22) // (HDMA_CH) The Master Interface Arbiter is locked by the channel x for a chunk transfer.
#define 	AT91C_HDMA_LOCK_IF_L_BUFFER               (0x1UL << 22) // (HDMA_CH) The Master Interface Arbiter is locked by the channel x for a buffer transfer.
#define AT91C_HDMA_AHB_PROT       (0x7UL << 24) // (HDMA_CH) AHB Prot
#define AT91C_HDMA_FIFOCFG        (0x3UL << 28) // (HDMA_CH) FIFO Request Configuration
#define 	AT91C_HDMA_FIFOCFG_LARGESTBURST         (0x0UL << 28)   // (HDMA_CH) The largest defined length AHB burst is performed on the destination AHB interface.
#define 	AT91C_HDMA_FIFOCFG_HALFFIFO             (0x1UL << 28)   // (HDMA_CH) When half fifo size is available/filled a source/destination request is serviced.
#define 	AT91C_HDMA_FIFOCFG_ENOUGHSPACE          (0x2UL << 28)   // (HDMA_CH) When there is enough space/data available to perfom a single AHB access then the request is serviced.
// -------- HDMA_SPIP : (HDMA_CH Offset: 0x18)  -------- 
#define AT91C_SPIP_HOLE           (0xFFFFUL <<  0)      // (HDMA_CH) This field indicates the value to add to the address when the programmable boundary has been reached.
#define AT91C_SPIP_BOUNDARY       (0x3FFUL << 16)       // (HDMA_CH) This field indicates the number of source transfers to perform before the automatic address increment operation.
// -------- HDMA_DPIP : (HDMA_CH Offset: 0x1c)  -------- 
#define AT91C_DPIP_HOLE           (0xFFFFUL <<  0)      // (HDMA_CH) This field indicates the value to add to the address when the programmable boundary has been reached.
#define AT91C_DPIP_BOUNDARY       (0x3FFUL << 16)       // (HDMA_CH) This field indicates the number of source transfers to perform before the automatic address increment operation.
// -------- HDMA_BDSCR : (HDMA_CH Offset: 0x20)  -------- 
// -------- HDMA_CADDR : (HDMA_CH Offset: 0x24)  -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR AHB CCFG Interface
// *****************************************************************************
// *** Register offset in AT91S_CCFG structure ***
#define CCFG_ROM        ( 4)    //  Slave 1 (ROM) Wait-State Configuration Register
#define CCFG_UDPHS      (12)    //  USB Device HS configuration Register
#define CCFG_EBICSA     (16)    //  EBI Chip Select Assignement Register
#define CCFG_MATRIXVERSION (236)        //  Version Register
// -------- CCFG_ROM : (CCFG Offset: 0x4) AHB Slave 1 (ROM) Configuration -------- 
#define AT91C_ROM_WS_CFG          (0x1UL <<  0) // (CCFG) Rom Wait State Configuration
#define 	AT91C_ROM_WS_CFG_NO_WAIT              (0x0UL)   // (CCFG) ROM accesses are No Wait-State accesses.
#define 	AT91C_ROM_WS_CFG_SINGLE_WAIT          (0x1UL)   // (CCFG) ROM accesses are all One Wait-State accesses.
// -------- CCFG_UDPHS : (CCFG Offset: 0xc) USB Device HS configuration -------- 
#define AT91C_CCFG_DONT_USE_UTMI_LOCK (0x1UL <<  0)     // (CCFG)
#define 	AT91C_CCFG_DONT_USE_UTMI_LOCK_DONT_USE_LOCK        (0x0UL)      // (CCFG)
// -------- CCFG_EBICSA : (CCFG Offset: 0x10) EBI Chip Select Assignement Register -------- 
#define AT91C_EBI_CS1A            (0x1UL <<  1) // (CCFG) Chip Select 1 Assignment
#define 	AT91C_EBI_CS1A_SMC                  (0x0UL <<  1)       // (CCFG) Chip Select 1 is assigned to the Static Memory Controller.
#define 	AT91C_EBI_CS1A_SDRAMC               (0x1UL <<  1)       // (CCFG) Chip Select 1 is assigned to the SDRAM Controller.
#define AT91C_EBI_CS3A            (0x1UL <<  3) // (CCFG) Chip Select 3 Assignment
#define 	AT91C_EBI_CS3A_SMC                  (0x0UL <<  3)       // (CCFG) Chip Select 3 is only assigned to the Static Memory Controller and NCS3 behaves as defined by the SMC.
#define 	AT91C_EBI_CS3A_SM                   (0x1UL <<  3)       // (CCFG) Chip Select 3 is assigned to the Static Memory Controller and the SmartMedia Logic is activated.
#define AT91C_EBI_DBPUC           (0x1UL <<  8) // (CCFG) Data Bus Pull-up Configuration
#define AT91C_EBI_DBPDC           (0x1UL <<  9) // (CCFG) Data Bus Pull-down Configuration
#define AT91C_EBI_DRV             (0x1UL << 17) // (CCFG) EBI I/O Drive Configuration
#define 	AT91C_EBI_DRV_LD                   (0x0UL << 17)        // (CCFG) optimized for memories with Low  Drive
#define 	AT91C_EBI_DRV_HD                   (0x1UL << 17)        // (CCFG) optimized for memories with High Drive
#define AT91C_EBI_NFD0_ON_D16     (0x1UL << 24) // (CCFG) Nand Flash databus selection
#define AT91C_EBI_DDR_MP_EN       (0x1UL << 25) // (CCFG) DDR Multiport Enable

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR DDR2/SDRAM Controller
// *****************************************************************************
// *** Register offset in AT91S_HDDRSDRC2 structure ***
#define HDDRSDRC2_MR    ( 0)    // Mode Register
#define HDDRSDRC2_RTR   ( 4)    // Refresh Timer Register
#define HDDRSDRC2_CR    ( 8)    // Configuration Register
#define HDDRSDRC2_T0PR  (12)    // Timing0 Register
#define HDDRSDRC2_T1PR  (16)    // Timing1 Register
#define HDDRSDRC2_T2PR  (20)    // Timing2 Register
#define HDDRSDRC2_T3PR  (24)    // Timing3 Register
#define HDDRSDRC2_LPR   (28)    // Low-power Register
#define HDDRSDRC2_MDR   (32)    // Memory Device Register
#define HDDRSDRC2_DLL   (36)    // DLL Information Register
#define HDDRSDRC2_VER   (40)    // DLL Version Register
#define HDDRSDRC2_HS    (44)    // High Speed Register
#define HDDRSDRC2_REF   (48)    // Adjust Refresh Register
#define HDDRSDRC2_DELAY1 (52)   // Pad delay1 Register
#define HDDRSDRC2_DELAY2 (56)   // Pad delay2 Register
#define HDDRSDRC2_DELAY3 (60)   // Pad delay3 Register
#define HDDRSDRC2_DELAY4 (64)   // Pad delay4 Register
#define HDDRSDRC2_DELAY5 (68)   // Pad delay5 Register
#define HDDRSDRC2_DELAY6 (72)   // Pad delay6 Register
#define HDDRSDRC2_DELAY7 (76)   // Pad delay7 Register
#define HDDRSDRC2_DELAY8 (80)   // Pad delay8 Register
#define HDDRSDRC2_DRIVESTRENGTH (84)    // Drive Strength I/O Register
#define HDDRSDRC2_WPCR  (228)   // High Speed Register
#define HDDRSDRC2_WPSR  (232)   // High Speed Register
#define HDDRSDRC2_VERSION (252) // Version Register
// -------- HDDRSDRC2_MR : (HDDRSDRC2 Offset: 0x0) Mode Register -------- 
#define AT91C_DDRC2_MODE          (0x7UL <<  0) // (HDDRSDRC2) DDR/SDRAM Command Mode
#define 	AT91C_DDRC2_MODE_NORMAL_CMD           (0x0UL)   // (HDDRSDRC2) Normal Mode
#define 	AT91C_DDRC2_MODE_NOP_CMD              (0x1UL)   // (HDDRSDRC2) Issue a NOP Command at every access
#define 	AT91C_DDRC2_MODE_PRCGALL_CMD          (0x2UL)   // (HDDRSDRC2) Issue a All Banks Precharge Command at every access
#define 	AT91C_DDRC2_MODE_LMR_CMD              (0x3UL)   // (HDDRSDRC2) Issue a Load Mode Register at every access
#define 	AT91C_DDRC2_MODE_RFSH_CMD             (0x4UL)   // (HDDRSDRC2) Issue a Refresh
#define 	AT91C_DDRC2_MODE_EXT_LMR_CMD          (0x5UL)   // (HDDRSDRC2) Issue an Extended Load Mode Register
#define 	AT91C_DDRC2_MODE_DEEP_CMD             (0x6UL)   // (HDDRSDRC2) Enter Deep Power Mode
#define 	AT91C_DDRC2_MODE_Reserved             (0x7UL)   // (HDDRSDRC2) Reserved value
// -------- HDDRSDRC2_RTR : (HDDRSDRC2 Offset: 0x4) Refresh Timer Register -------- 
#define AT91C_DDRC2_COUNT         (0xFFFUL <<  0)       // (HDDRSDRC2) Refresh Timer Count
// -------- HDDRSDRC2_CR : (HDDRSDRC2 Offset: 0x8) Configuration Register -------- 
#define AT91C_DDRC2_NC            (0x3UL <<  0) // (HDDRSDRC2) Number of Column Bits
#define 	AT91C_DDRC2_NC_DDR9_SDR8            (0x0UL)     // (HDDRSDRC2) DDR 9 Bits | SDR 8 Bits
#define 	AT91C_DDRC2_NC_DDR10_SDR9           (0x1UL)     // (HDDRSDRC2) DDR 10 Bits | SDR 9 Bits
#define 	AT91C_DDRC2_NC_DDR11_SDR10          (0x2UL)     // (HDDRSDRC2) DDR 11 Bits | SDR 10 Bits
#define 	AT91C_DDRC2_NC_DDR12_SDR11          (0x3UL)     // (HDDRSDRC2) DDR 12 Bits | SDR 11 Bits
#define AT91C_DDRC2_NR            (0x3UL <<  2) // (HDDRSDRC2) Number of Row Bits
#define 	AT91C_DDRC2_NR_11                   (0x0UL <<  2)       // (HDDRSDRC2) 11 Bits
#define 	AT91C_DDRC2_NR_12                   (0x1UL <<  2)       // (HDDRSDRC2) 12 Bits
#define 	AT91C_DDRC2_NR_13                   (0x2UL <<  2)       // (HDDRSDRC2) 13 Bits
#define 	AT91C_DDRC2_NR_14                   (0x3UL <<  2)       // (HDDRSDRC2) 14 Bits
#define AT91C_DDRC2_CAS           (0x7UL <<  4) // (HDDRSDRC2) CAS Latency
#define 	AT91C_DDRC2_CAS_2                    (0x2UL <<  4)      // (HDDRSDRC2) 2 cycles (DDR1/SDR)
#define 	AT91C_DDRC2_CAS_3                    (0x3UL <<  4)      // (HDDRSDRC2) 3 cycles (DDR2/DDR1/SDR)
#define 	AT91C_DDRC2_CAS_4                    (0x4UL <<  4)      // (HDDRSDRC2) 4 cycles (DDR2)
#define 	AT91C_DDRC2_CAS_2_5                  (0x6UL <<  4)      // (HDDRSDRC2) 2.5 cycles (DDR1)
#define AT91C_DDRC2_DLL           (0x1UL <<  7) // (HDDRSDRC2) DLL Reset
#define 	AT91C_DDRC2_DLL_RESET_DISABLED       (0x0UL <<  7)      // (HDDRSDRC2) DLL normal mode
#define 	AT91C_DDRC2_DLL_RESET_ENABLED        (0x1UL <<  7)      // (HDDRSDRC2) Reset DLL
#define AT91C_DDRC2_DIC_DS        (0x1UL <<  8) // (HDDRSDRC2) Output driver impedance control
#define AT91C_DDRC2_OCD           (0x7UL << 12) // (HDDRSDRC2) Off chip driver
#define 	AT91C_DDRC2_OCD_EXIT                 (0x0UL << 12)      // (HDDRSDRC2) Exit OCD calibration mode.
#define 	AT91C_DDRC2_OCD_DEFAULT              (0x7UL << 12)      // (HDDRSDRC2) Program OCD calibration default value.
#define AT91C_DDRC2_DQMS          (0x1UL << 16) // (HDDRSDRC2) Data Mask share
#define 	AT91C_DDRC2_DQMS_NOT_SHARED           (0x0UL << 16)     // (HDDRSDRC2) Used DQM bits are not shared
#define 	AT91C_DDRC2_DQMS_SHARED               (0x1UL << 16)     // (HDDRSDRC2) Used DQM bits are shared
#define AT91C_DDRC2_ENRDM         (0x1UL << 17) // (HDDRSDRC2) DQS/DATA phase error correction
#define 	AT91C_DDRC2_ENRDM_OFF                  (0x0UL << 17)    // (HDDRSDRC2) phase error correction disabled
#define 	AT91C_DDRC2_ENRDM_ON                   (0x1UL << 17)    // (HDDRSDRC2) phase error correction enabled
#define AT91C_DDRC2_NB_BANKS      (0x1UL << 20) // (HDDRSDRC2) Number of Banks
#define 	AT91C_DDRC2_NB_BANKS_4              (0x0UL << 20)    // (HDDRSDRC2) 4 banks
#define 	AT91C_DDRC2_NB_BANKS_8              (0x1UL << 20)    // (HDDRSDRC2) 8 banks
#define AT91C_DDRC2_DECOD         (0x1UL << 22) // (HDDRSDRC2) Type of Decoding
#define 	AT91C_DDRC2_DECOD_SEQUENTIAL        (0x0UL << 22)
#define 	AT91C_DDRC2_DECOD_INTERLEAVED       (0x1UL << 22)
// -------- HDDRSDRC2_T0PR : (HDDRSDRC2 Offset: 0xc) Timing0 Register -------- 
#define AT91C_DDRC2_TRAS          (0xFUL <<  0) // (HDDRSDRC2) Active to precharge delay
#define 	AT91C_DDRC2_TRAS_0                    (0x0UL)   // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRAS_1                    (0x1UL)   // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRAS_2                    (0x2UL)   // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRAS_3                    (0x3UL)   // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRAS_4                    (0x4UL)   // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRAS_5                    (0x5UL)   // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRAS_6                    (0x6UL)   // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRAS_7                    (0x7UL)   // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRAS_8                    (0x8UL)   // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRAS_9                    (0x9UL)   // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRAS_10                   (0xAUL)   // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRAS_11                   (0xBUL)   // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRAS_12                   (0xCUL)   // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRAS_13                   (0xDUL)   // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRAS_14                   (0xEUL)   // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRAS_15                   (0xFUL)   // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TRCD          (0xFUL <<  4) // (HDDRSDRC2) Row to column delay
#define 	AT91C_DDRC2_TRCD_0                    (0x0UL <<  4)     // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRCD_1                    (0x1UL <<  4)     // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRCD_2                    (0x2UL <<  4)     // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRCD_3                    (0x3UL <<  4)     // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRCD_4                    (0x4UL <<  4)     // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRCD_5                    (0x5UL <<  4)     // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRCD_6                    (0x6UL <<  4)     // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRCD_7                    (0x7UL <<  4)     // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRCD_8                    (0x8UL <<  4)     // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRCD_9                    (0x9UL <<  4)     // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRCD_10                   (0xAUL <<  4)     // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRCD_11                   (0xBUL <<  4)     // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRCD_12                   (0xCUL <<  4)     // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRCD_13                   (0xDUL <<  4)     // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRCD_14                   (0xEUL <<  4)     // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRCD_15                   (0xFUL <<  4)     // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TWR           (0xFUL <<  8) // (HDDRSDRC2) Write recovery delay
#define 	AT91C_DDRC2_TWR_0                    (0x0UL <<  8)      // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TWR_1                    (0x1UL <<  8)      // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TWR_2                    (0x2UL <<  8)      // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TWR_3                    (0x3UL <<  8)      // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TWR_4                    (0x4UL <<  8)      // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TWR_5                    (0x5UL <<  8)      // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TWR_6                    (0x6UL <<  8)      // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TWR_7                    (0x7UL <<  8)      // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TWR_8                    (0x8UL <<  8)      // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TWR_9                    (0x9UL <<  8)      // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TWR_10                   (0xAUL <<  8)      // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TWR_11                   (0xBUL <<  8)      // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TWR_12                   (0xCUL <<  8)      // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TWR_13                   (0xDUL <<  8)      // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TWR_14                   (0xEUL <<  8)      // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TWR_15                   (0xFUL <<  8)      // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TRC           (0xFUL << 12) // (HDDRSDRC2) Row cycle delay
#define 	AT91C_DDRC2_TRC_0                    (0x0UL << 12)      // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRC_1                    (0x1UL << 12)      // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRC_2                    (0x2UL << 12)      // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRC_3                    (0x3UL << 12)      // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRC_4                    (0x4UL << 12)      // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRC_5                    (0x5UL << 12)      // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRC_6                    (0x6UL << 12)      // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRC_7                    (0x7UL << 12)      // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRC_8                    (0x8UL << 12)      // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRC_9                    (0x9UL << 12)      // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRC_10                   (0xAUL << 12)      // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRC_11                   (0xBUL << 12)      // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRC_12                   (0xCUL << 12)      // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRC_13                   (0xDUL << 12)      // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRC_14                   (0xEUL << 12)      // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRC_15                   (0xFUL << 12)      // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TRP           (0xFUL << 16) // (HDDRSDRC2) Row precharge delay
#define 	AT91C_DDRC2_TRP_0                    (0x0UL << 16)      // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRP_1                    (0x1UL << 16)      // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRP_2                    (0x2UL << 16)      // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRP_3                    (0x3UL << 16)      // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRP_4                    (0x4UL << 16)      // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRP_5                    (0x5UL << 16)      // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRP_6                    (0x6UL << 16)      // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRP_7                    (0x7UL << 16)      // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRP_8                    (0x8UL << 16)      // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRP_9                    (0x9UL << 16)      // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRP_10                   (0xAUL << 16)      // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRP_11                   (0xBUL << 16)      // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRP_12                   (0xCUL << 16)      // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRP_13                   (0xDUL << 16)      // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRP_14                   (0xEUL << 16)      // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRP_15                   (0xFUL << 16)      // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TRRD          (0xFUL << 20) // (HDDRSDRC2) Active bankA to Active bankB
#define 	AT91C_DDRC2_TRRD_0                    (0x0UL << 20)     // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRRD_1                    (0x1UL << 20)     // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRRD_2                    (0x2UL << 20)     // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRRD_3                    (0x3UL << 20)     // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRRD_4                    (0x4UL << 20)     // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRRD_5                    (0x5UL << 20)     // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRRD_6                    (0x6UL << 20)     // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRRD_7                    (0x7UL << 20)     // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRRD_8                    (0x8UL << 20)     // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRRD_9                    (0x9UL << 20)     // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRRD_10                   (0xAUL << 20)     // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRRD_11                   (0xBUL << 20)     // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRRD_12                   (0xCUL << 20)     // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRRD_13                   (0xDUL << 20)     // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRRD_14                   (0xEUL << 20)     // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRRD_15                   (0xFUL << 20)     // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TWTR          (0x7UL << 24) // (HDDRSDRC2) Internal write to read delay
#define 	AT91C_DDRC2_TWTR_0                    (0x0UL << 24)
#define 	AT91C_DDRC2_TWTR_1                    (0x1UL << 24)
#define 	AT91C_DDRC2_TWTR_2                    (0x2UL << 24)
#define 	AT91C_DDRC2_TWTR_3                    (0x3UL << 24)
#define 	AT91C_DDRC2_TWTR_4                    (0x4UL << 24)
#define 	AT91C_DDRC2_TWTR_5                    (0x5UL << 24)
#define 	AT91C_DDRC2_TWTR_6                    (0x6UL << 24)
#define 	AT91C_DDRC2_TWTR_7                    (0x7UL << 24)
#define AT91C_DDRC2_TMRD          (0xFUL << 28) // (HDDRSDRC2) Load mode register command to active or refresh command
#define 	AT91C_DDRC2_TMRD_0                    (0x0UL << 28)     // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TMRD_1                    (0x1UL << 28)     // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TMRD_2                    (0x2UL << 28)     // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TMRD_3                    (0x3UL << 28)     // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TMRD_4                    (0x4UL << 28)     // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TMRD_5                    (0x5UL << 28)     // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TMRD_6                    (0x6UL << 28)     // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TMRD_7                    (0x7UL << 28)     // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TMRD_8                    (0x8UL << 28)     // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TMRD_9                    (0x9UL << 28)     // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TMRD_10                   (0xAUL << 28)     // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TMRD_11                   (0xBUL << 28)     // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TMRD_12                   (0xCUL << 28)     // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TMRD_13                   (0xDUL << 28)     // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TMRD_14                   (0xEUL << 28)     // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TMRD_15                   (0xFUL << 28)     // (HDDRSDRC2) Value : 15
// -------- HDDRSDRC2_T1PR : (HDDRSDRC2 Offset: 0x10) Timing1 Register -------- 
#define AT91C_DDRC2_TRFC          (0x1FUL <<  0)        // (HDDRSDRC2) row cycle delay
#define 	AT91C_DDRC2_TRFC_0                    (0x0UL)   // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRFC_1                    (0x1UL)   // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRFC_2                    (0x2UL)   // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRFC_3                    (0x3UL)   // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRFC_4                    (0x4UL)   // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRFC_5                    (0x5UL)   // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRFC_6                    (0x6UL)   // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRFC_7                    (0x7UL)   // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRFC_8                    (0x8UL)   // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRFC_9                    (0x9UL)   // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRFC_10                   (0xAUL)   // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRFC_11                   (0xBUL)   // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRFC_12                   (0xCUL)   // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRFC_13                   (0xDUL)   // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRFC_14                   (0xEUL)   // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRFC_15                   (0xFUL)   // (HDDRSDRC2) Value : 15
#define 	AT91C_DDRC2_TRFC_16                   (0x10UL)  // (HDDRSDRC2) Value : 16
#define 	AT91C_DDRC2_TRFC_17                   (0x11UL)  // (HDDRSDRC2) Value : 17
#define 	AT91C_DDRC2_TRFC_18                   (0x12UL)  // (HDDRSDRC2) Value : 18
#define 	AT91C_DDRC2_TRFC_19                   (0x13UL)  // (HDDRSDRC2) Value : 19
#define 	AT91C_DDRC2_TRFC_20                   (0x14UL)  // (HDDRSDRC2) Value : 20
#define 	AT91C_DDRC2_TRFC_21                   (0x15UL)  // (HDDRSDRC2) Value : 21
#define 	AT91C_DDRC2_TRFC_22                   (0x16UL)  // (HDDRSDRC2) Value : 22
#define 	AT91C_DDRC2_TRFC_23                   (0x17UL)  // (HDDRSDRC2) Value : 23
#define 	AT91C_DDRC2_TRFC_24                   (0x18UL)  // (HDDRSDRC2) Value : 24
#define 	AT91C_DDRC2_TRFC_25                   (0x19UL)  // (HDDRSDRC2) Value : 25
#define 	AT91C_DDRC2_TRFC_26                   (0x1AUL)  // (HDDRSDRC2) Value : 26
#define 	AT91C_DDRC2_TRFC_27                   (0x1BUL)  // (HDDRSDRC2) Value : 27
#define 	AT91C_DDRC2_TRFC_28                   (0x1CUL)  // (HDDRSDRC2) Value : 28
#define 	AT91C_DDRC2_TRFC_29                   (0x1DUL)  // (HDDRSDRC2) Value : 29
#define 	AT91C_DDRC2_TRFC_30                   (0x1EUL)  // (HDDRSDRC2) Value : 30
#define 	AT91C_DDRC2_TRFC_31                   (0x1FUL)  // (HDDRSDRC2) Value : 31
#define AT91C_DDRC2_TXSNR         (0xFFUL <<  8)        // (HDDRSDRC2) Exit self refresh delay to Read command
#define 	AT91C_DDRC2_TXSNR_0                    (0x0UL <<  8)    // (HDDRSDRC2) Value :   0
#define 	AT91C_DDRC2_TXSNR_8                    (0x8UL <<  8)    // (HDDRSDRC2) Value :   8
#define 	AT91C_DDRC2_TXSNR_16                   (0x10UL <<  8)   // (HDDRSDRC2) Value :  16
#define 	AT91C_DDRC2_TXSNR_32                   (0x20UL <<  8)   // (HDDRSDRC2) Value :  32
#define 	AT91C_DDRC2_TXSNR_48                   (0x30UL <<  8)   // (HDDRSDRC2) Value :  48
#define 	AT91C_DDRC2_TXSNR_64                   (0x40UL <<  8)   // (HDDRSDRC2) Value :  64
#define 	AT91C_DDRC2_TXSNR_80                   (0x50UL <<  8)   // (HDDRSDRC2) Value :  80
#define 	AT91C_DDRC2_TXSNR_96                   (0x60UL <<  8)   // (HDDRSDRC2) Value :  96
#define 	AT91C_DDRC2_TXSNR_112                  (0x70UL <<  8)   // (HDDRSDRC2) Value : 112
#define 	AT91C_DDRC2_TXSNR_128                  (0x80UL <<  8)   // (HDDRSDRC2) Value : 128
#define 	AT91C_DDRC2_TXSNR_144                  (0x90UL <<  8)   // (HDDRSDRC2) Value : 144
#define 	AT91C_DDRC2_TXSNR_160                  (0xA0UL <<  8)   // (HDDRSDRC2) Value : 160
#define 	AT91C_DDRC2_TXSNR_176                  (0xB0UL <<  8)   // (HDDRSDRC2) Value : 176
#define 	AT91C_DDRC2_TXSNR_192                  (0xC0UL <<  8)   // (HDDRSDRC2) Value : 192
#define 	AT91C_DDRC2_TXSNR_208                  (0xD0UL <<  8)   // (HDDRSDRC2) Value : 208
#define 	AT91C_DDRC2_TXSNR_224                  (0xE0UL <<  8)   // (HDDRSDRC2) Value : 224
#define 	AT91C_DDRC2_TXSNR_240                  (0xF0UL <<  8)   // (HDDRSDRC2) Value : 240
#define 	AT91C_DDRC2_TXSNR_255                  (0xFFUL <<  8)   // (HDDRSDRC2) Value : 255
#define AT91C_DDRC2_TXSRD         (0xFFUL << 16)        // (HDDRSDRC2) Exit self refresh delay to Read command
#define 	AT91C_DDRC2_TXSRD_0                    (0x0UL << 16)    // (HDDRSDRC2) Value :   0
#define 	AT91C_DDRC2_TXSRD_8                    (0x8UL << 16)    // (HDDRSDRC2) Value :   8
#define 	AT91C_DDRC2_TXSRD_16                   (0x10UL << 16)   // (HDDRSDRC2) Value :  16
#define 	AT91C_DDRC2_TXSRD_32                   (0x20UL << 16)   // (HDDRSDRC2) Value :  32
#define 	AT91C_DDRC2_TXSRD_48                   (0x30UL << 16)   // (HDDRSDRC2) Value :  48
#define 	AT91C_DDRC2_TXSRD_64                   (0x40UL << 16)   // (HDDRSDRC2) Value :  64
#define 	AT91C_DDRC2_TXSRD_80                   (0x50UL << 16)   // (HDDRSDRC2) Value :  80
#define 	AT91C_DDRC2_TXSRD_96                   (0x60UL << 16)   // (HDDRSDRC2) Value :  96
#define 	AT91C_DDRC2_TXSRD_112                  (0x70UL << 16)   // (HDDRSDRC2) Value : 112
#define 	AT91C_DDRC2_TXSRD_128                  (0x80UL << 16)   // (HDDRSDRC2) Value : 128
#define 	AT91C_DDRC2_TXSRD_144                  (0x90UL << 16)   // (HDDRSDRC2) Value : 144
#define 	AT91C_DDRC2_TXSRD_160                  (0xA0UL << 16)   // (HDDRSDRC2) Value : 160
#define 	AT91C_DDRC2_TXSRD_176                  (0xB0UL << 16)   // (HDDRSDRC2) Value : 176
#define 	AT91C_DDRC2_TXSRD_192                  (0xC0UL << 16)   // (HDDRSDRC2) Value : 192
#define 	AT91C_DDRC2_TXSRD_208                  (0xD0UL << 16)   // (HDDRSDRC2) Value : 208
#define 	AT91C_DDRC2_TXSRD_224                  (0xE0UL << 16)   // (HDDRSDRC2) Value : 224
#define 	AT91C_DDRC2_TXSRD_240                  (0xF0UL << 16)   // (HDDRSDRC2) Value : 240
#define 	AT91C_DDRC2_TXSRD_255                  (0xFFUL << 16)   // (HDDRSDRC2) Value : 255
#define AT91C_DDRC2_TXP           (0xFUL << 24) // (HDDRSDRC2) Exit Power-down delay to first command
#define 	AT91C_DDRC2_TXP_0                    (0x0UL << 24)      // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TXP_1                    (0x1UL << 24)      // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TXP_2                    (0x2UL << 24)      // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TXP_3                    (0x3UL << 24)      // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TXP_4                    (0x4UL << 24)      // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TXP_5                    (0x5UL << 24)      // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TXP_6                    (0x6UL << 24)      // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TXP_7                    (0x7UL << 24)      // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TXP_8                    (0x8UL << 24)      // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TXP_9                    (0x9UL << 24)      // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TXP_10                   (0xAUL << 24)      // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TXP_11                   (0xBUL << 24)      // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TXP_12                   (0xCUL << 24)      // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TXP_13                   (0xDUL << 24)      // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TXP_14                   (0xEUL << 24)      // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TXP_15                   (0xFUL << 24)      // (HDDRSDRC2) Value : 15
// -------- HDDRSDRC2_T2PR : (HDDRSDRC2 Offset: 0x14) Timing2 Register -------- 
#define AT91C_DDRC2_TXARD         (0xFUL <<  0) // (HDDRSDRC2) Exit active power down delay to read command in 'Fast Exit' mode.
#define 	AT91C_DDRC2_TXARD_0                    (0x0UL)  // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TXARD_1                    (0x1UL)  // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TXARD_2                    (0x2UL)  // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TXARD_3                    (0x3UL)  // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TXARD_4                    (0x4UL)  // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TXARD_5                    (0x5UL)  // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TXARD_6                    (0x6UL)  // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TXARD_7                    (0x7UL)  // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TXARD_8                    (0x8UL)  // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TXARD_9                    (0x9UL)  // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TXARD_10                   (0xAUL)  // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TXARD_11                   (0xBUL)  // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TXARD_12                   (0xCUL)  // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TXARD_13                   (0xDUL)  // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TXARD_14                   (0xEUL)  // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TXARD_15                   (0xFUL)  // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TXARDS        (0xFUL <<  4) // (HDDRSDRC2) Exit active power down delay to read command in 'Slow Exit' mode.
#define 	AT91C_DDRC2_TXARDS_0                    (0x0UL <<  4)   // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TXARDS_1                    (0x1UL <<  4)   // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TXARDS_2                    (0x2UL <<  4)   // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TXARDS_3                    (0x3UL <<  4)   // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TXARDS_4                    (0x4UL <<  4)   // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TXARDS_5                    (0x5UL <<  4)   // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TXARDS_6                    (0x6UL <<  4)   // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TXARDS_7                    (0x7UL <<  4)   // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TXARDS_8                    (0x8UL <<  4)   // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TXARDS_9                    (0x9UL <<  4)   // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TXARDS_10                   (0xAUL <<  4)   // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TXARDS_11                   (0xBUL <<  4)   // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TXARDS_12                   (0xCUL <<  4)   // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TXARDS_13                   (0xDUL <<  4)   // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TXARDS_14                   (0xEUL <<  4)   // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TXARDS_15                   (0xFUL <<  4)   // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TRPA          (0xFUL << 8) // (HDDRSDRC2) Row precharge all delay
#define 	AT91C_DDRC2_TRPA_0                    (0x0UL << 8)     // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRPA_1                    (0x1UL << 8)     // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRPA_2                    (0x2UL << 8)     // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRPA_3                    (0x3UL << 8)     // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRPA_4                    (0x4UL << 8)     // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRPA_5                    (0x5UL << 8)     // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRPA_6                    (0x6UL << 8)     // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRPA_7                    (0x7UL << 8)     // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRPA_8                    (0x8UL << 8)     // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRPA_9                    (0x9UL << 8)     // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRPA_10                   (0xAUL << 8)     // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRPA_11                   (0xBUL << 8)     // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRPA_12                   (0xCUL << 8)     // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRPA_13                   (0xDUL << 8)     // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRPA_14                   (0xEUL << 8)     // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRPA_15                   (0xFUL << 8)     // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TRTP          (0xFUL << 12) // (HDDRSDRC2) Read to Precharge delay
#define 	AT91C_DDRC2_TRTP_0                    (0x0UL << 12)     // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TRTP_1                    (0x1UL << 12)     // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TRTP_2                    (0x2UL << 12)     // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TRTP_3                    (0x3UL << 12)     // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TRTP_4                    (0x4UL << 12)     // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TRTP_5                    (0x5UL << 12)     // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TRTP_6                    (0x6UL << 12)     // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TRTP_7                    (0x7UL << 12)     // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TRTP_8                    (0x8UL << 12)     // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TRTP_9                    (0x9UL << 12)     // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TRTP_10                   (0xAUL << 12)     // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TRTP_11                   (0xBUL << 12)     // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TRTP_12                   (0xCUL << 12)     // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TRTP_13                   (0xDUL << 12)     // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TRTP_14                   (0xEUL << 12)     // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TRTP_15                   (0xFUL << 12)     // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TFAW          (0xFUL << 16) // (HDDRSDRC2) Four Active window
#define 	AT91C_DDRC2_TFAW_0                    (0x0UL << 12)     // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TFAW_1                    (0x1UL << 12)     // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TFAW_2                    (0x2UL << 12)     // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TFAW_3                    (0x3UL << 12)     // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TFAW_4                    (0x4UL << 12)     // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TFAW_5                    (0x5UL << 12)     // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TFAW_6                    (0x6UL << 12)     // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TFAW_7                    (0x7UL << 12)     // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TFAW_8                    (0x8UL << 12)     // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TFAW_9                    (0x9UL << 12)     // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TFAW_10                   (0xAUL << 12)     // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TFAW_11                   (0xBUL << 12)     // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TFAW_12                   (0xCUL << 12)     // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TFAW_13                   (0xDUL << 12)     // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TFAW_14                   (0xEUL << 12)     // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TFAW_15                   (0xFUL << 12)     // (HDDRSDRC2) Value : 15
// -------- HDDRSDRC2_T3PR : (HDDRSDRC2 Offset: 0x18) Timing3 Register -------- 
#define AT91C_DDRC2_TANPD         (0xFUL <<  0) // (HDDRSDRC2) ODT to power down entry
#define 	AT91C_DDRC2_TANPD_0                    (0x0UL)  // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TANPD_1                    (0x1UL)  // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TANPD_2                    (0x2UL)  // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TANPD_3                    (0x3UL)  // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TANPD_4                    (0x4UL)  // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TANPD_5                    (0x5UL)  // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TANPD_6                    (0x6UL)  // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TANPD_7                    (0x7UL)  // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TANPD_8                    (0x8UL)  // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TANPD_9                    (0x9UL)  // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TANPD_10                   (0xAUL)  // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TANPD_11                   (0xBUL)  // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TANPD_12                   (0xCUL)  // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TANPD_13                   (0xDUL)  // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TANPD_14                   (0xEUL)  // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TANPD_15                   (0xFUL)  // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TAXPD         (0xFUL <<  4) // (HDDRSDRC2) ODT power down exit
#define 	AT91C_DDRC2_TAXPD_0                    (0x0UL <<  4)    // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TAXPD_1                    (0x1UL <<  4)    // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TAXPD_2                    (0x2UL <<  4)    // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TAXPD_3                    (0x3UL <<  4)    // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TAXPD_4                    (0x4UL <<  4)    // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TAXPD_5                    (0x5UL <<  4)    // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TAXPD_6                    (0x6UL <<  4)    // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TAXPD_7                    (0x7UL <<  4)    // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TAXPD_8                    (0x8UL <<  4)    // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TAXPD_9                    (0x9UL <<  4)    // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TAXPD_10                   (0xAUL <<  4)    // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TAXPD_11                   (0xBUL <<  4)    // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TAXPD_12                   (0xCUL <<  4)    // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TAXPD_13                   (0xDUL <<  4)    // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TAXPD_14                   (0xEUL <<  4)    // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TAXPD_15                   (0xFUL <<  4)    // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TAOFPD        (0xFUL <<  8) // (HDDRSDRC2) ODT turn off in power down mode
#define 	AT91C_DDRC2_TAOFPD_0                    (0x0UL <<  8)   // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TAOFPD_1                    (0x1UL <<  8)   // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TAOFPD_2                    (0x2UL <<  8)   // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TAOFPD_3                    (0x3UL <<  8)   // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TAOFPD_4                    (0x4UL <<  8)   // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TAOFPD_5                    (0x5UL <<  8)   // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TAOFPD_6                    (0x6UL <<  8)   // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TAOFPD_7                    (0x7UL <<  8)   // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TAOFPD_8                    (0x8UL <<  8)   // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TAOFPD_9                    (0x9UL <<  8)   // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TAOFPD_10                   (0xAUL <<  8)   // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TAOFPD_11                   (0xBUL <<  8)   // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TAOFPD_12                   (0xCUL <<  8)   // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TAOFPD_13                   (0xDUL <<  8)   // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TAOFPD_14                   (0xEUL <<  8)   // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TAOFPD_15                   (0xFUL <<  8)   // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TAOFD         (0xFUL << 12) // (HDDRSDRC2) ODT turn off delay
#define 	AT91C_DDRC2_TAOFD_0                    (0x0UL << 12)    // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TAOFD_1                    (0x1UL << 12)    // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TAOFD_2                    (0x2UL << 12)    // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TAOFD_3                    (0x3UL << 12)    // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TAOFD_4                    (0x4UL << 12)    // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TAOFD_5                    (0x5UL << 12)    // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TAOFD_6                    (0x6UL << 12)    // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TAOFD_7                    (0x7UL << 12)    // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TAOFD_8                    (0x8UL << 12)    // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TAOFD_9                    (0x9UL << 12)    // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TAOFD_10                   (0xAUL << 12)    // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TAOFD_11                   (0xBUL << 12)    // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TAOFD_12                   (0xCUL << 12)    // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TAOFD_13                   (0xDUL << 12)    // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TAOFD_14                   (0xEUL << 12)    // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TAOFD_15                   (0xFUL << 12)    // (HDDRSDRC2) Value : 15
#define AT91C_DDRC2_TAONPD        (0xFUL << 16) // (HDDRSDRC2) ODT turn on in power down mode
#define 	AT91C_DDRC2_TAONPD_0                    (0x0UL << 16)   // (HDDRSDRC2) Value :  0
#define 	AT91C_DDRC2_TAONPD_1                    (0x1UL << 16)   // (HDDRSDRC2) Value :  1
#define 	AT91C_DDRC2_TAONPD_2                    (0x2UL << 16)   // (HDDRSDRC2) Value :  2
#define 	AT91C_DDRC2_TAONPD_3                    (0x3UL << 16)   // (HDDRSDRC2) Value :  3
#define 	AT91C_DDRC2_TAONPD_4                    (0x4UL << 16)   // (HDDRSDRC2) Value :  4
#define 	AT91C_DDRC2_TAONPD_5                    (0x5UL << 16)   // (HDDRSDRC2) Value :  5
#define 	AT91C_DDRC2_TAONPD_6                    (0x6UL << 16)   // (HDDRSDRC2) Value :  6
#define 	AT91C_DDRC2_TAONPD_7                    (0x7UL << 16)   // (HDDRSDRC2) Value :  7
#define 	AT91C_DDRC2_TAONPD_8                    (0x8UL << 16)   // (HDDRSDRC2) Value :  8
#define 	AT91C_DDRC2_TAONPD_9                    (0x9UL << 16)   // (HDDRSDRC2) Value :  9
#define 	AT91C_DDRC2_TAONPD_10                   (0xAUL << 16)   // (HDDRSDRC2) Value : 10
#define 	AT91C_DDRC2_TAONPD_11                   (0xBUL << 16)   // (HDDRSDRC2) Value : 11
#define 	AT91C_DDRC2_TAONPD_12                   (0xCUL << 16)   // (HDDRSDRC2) Value : 12
#define 	AT91C_DDRC2_TAONPD_13                   (0xDUL << 16)   // (HDDRSDRC2) Value : 13
#define 	AT91C_DDRC2_TAONPD_14                   (0xEUL << 16)   // (HDDRSDRC2) Value : 14
#define 	AT91C_DDRC2_TAONPD_15                   (0xFUL << 16)   // (HDDRSDRC2) Value : 15
// -------- HDDRSDRC2_LPR : (HDDRSDRC2 Offset: 0x1c)  -------- 
#define AT91C_DDRC2_LPCB          (0x3UL <<  0) // (HDDRSDRC2) Low-power Command Bit
#define 	AT91C_DDRC2_LPCB_DISABLED             (0x0UL)   // (HDDRSDRC2) Low-power Feature is inhibited: no power-down, self refresh and Deep power mode are issued to the SDRAM device.
#define 	AT91C_DDRC2_LPCB_SELFREFRESH          (0x1UL)   // (HDDRSDRC2) The DDRSDRAMC Controller issues a Self Refresh Command to the SDRAM device, the clock(s) is/are de-activated and the CKE signal is set low. The SDRAM device leaves the self refresh mode when accessed and enters it after the access.
#define 	AT91C_DDRC2_LPCB_POWERDOWN            (0x2UL)   // (HDDRSDRC2) The HDDRSDRC2 Controller issues a Power-down Command to the SDRAM device after each access, the CKE signal is set low. The SDRAM device leaves the power-down mode when accessed and enters it after the access.
#define 	AT91C_DDRC2_LPCB_DEEP_PWD             (0x3UL)   // (HDDRSDRC2) The HDDRSDRC2 Controller issues a Deep Power-down Command to the Mobile SDRAM device. This mode is unique to Mobile SDRAM devices
#define AT91C_DDRC2_CLK_FR        (0x1UL <<  2) // (HDDRSDRC2) Clock frozen Command Bit
#define 	AT91C_DDRC2_CLK_FR_DISABLED             (0x0UL <<  2)   // (HDDRSDRC2) Low-power Feature is inhibited: no power-down, self refresh and Deep power mode are issued to the SDRAM device.
#define 	AT91C_DDRC2_CLK_FR_SELFREFRESH          (0x1UL <<  2)   // (HDDRSDRC2) The DDRSDRAMC Controller issues a Self Refresh Command to the SDRAM device, the clock(s) is/are de-activated and the CKE signal is set low. The SDRAM device leaves the self refresh mode when accessed and enters it after the access.
#define 	AT91C_DDRC2_CLK_FR_POWERDOWN            (0x2UL <<  2)   // (HDDRSDRC2) The HDDRSDRC2 Controller issues a Power-down Command to the SDRAM device after each access, the CKE signal is set low. The SDRAM device leaves the power-down mode when accessed and enters it after the access.
#define 	AT91C_DDRC2_CLK_FR_DEEP_PWD             (0x3UL <<  2)   // (HDDRSDRC2) The HDDRSDRC2 Controller issues a Deep Power-down Command to the Mobile SDRAM device. This mode is unique to Mobile SDRAM devices
#define AT91C_DDRC2_PASR          (0x7UL <<  4) // (HDDRSDRC2) Partial Array Self Refresh
#define AT91C_                    (0x0UL <<  8) // (HDDRSDRC2)
#define AT91C_DDRC2_DS            (0x3UL << 10) // (HDDRSDRC2) Drive strength
#define AT91C_DDRC2_TIMEOUT       (0x3UL << 12) // (HDDRSDRC2) low-power mode delay
#define 	AT91C_DDRC2_TIMEOUT_0                    (0x0UL << 12)  // (HDDRSDRC2) The SDRAM controller activates the SDRAM low-power mode immediately after the end of the last transfer.
#define 	AT91C_DDRC2_TIMEOUT_64                   (0x1UL << 12)  // (HDDRSDRC2) The SDRAM controller activates the SDRAM low-power mode 64 clock cycles after the end of the last transfer.
#define 	AT91C_DDRC2_TIMEOUT_128                  (0x2UL << 12)  // (HDDRSDRC2) The SDRAM controller activates the SDRAM low-power mode 128 clock cycles after the end of the last transfer.
#define 	AT91C_DDRC2_TIMEOUT_Reserved             (0x3UL << 12)  // (HDDRSDRC2) Reserved
#define AT91C_DDRC2_ADPE          (0x1UL << 16) // (HDDRSDRC2) Active Power Down Exit time
#define 	AT91C_DDRC2_ADPE_FAST                 (0x0UL << 16)     // (HDDRSDRC2) Fast Exit
#define 	AT91C_DDRC2_ADPE_SLOW                 (0x1UL << 16)     // (HDDRSDRC2) Slow Exit
// -------- HDDRSDRC2_MDR : (HDDRSDRC2 Offset: 0x20) Memory Device Register -------- 
#define AT91C_DDRC2_MD            (0x7UL <<  0) // (HDDRSDRC2) memory device
#define 	AT91C_DDRC2_MD_SDR_SDRAM            (0x0UL)     // (HDDRSDRC2) SDR SDRAM
#define 	AT91C_DDRC2_MD_LP_SDR_SDRAM         (0x1UL)     // (HDDRSDRC2) Low Power SDR SDRAM
#define 	AT91C_DDRC2_MD_DDR_SDRAM            (0x2UL)     // (HDDRSDRC2) DDR SDRAM
#define 	AT91C_DDRC2_MD_LP_DDR_SDRAM         (0x3UL)     // (HDDRSDRC2) Low Power DDR SDRAM
#define 	AT91C_DDRC2_MD_DDR2_SDRAM           (0x6UL)     // (HDDRSDRC2) DDR2 SDRAM
#define AT91C_DDRC2_DBW           (0x1UL <<  4) // (HDDRSDRC2) Data Bus Width
#define 	AT91C_DDRC2_DBW_32_BITS              (0x0UL <<  4)      // (HDDRSDRC2) 32 Bits datas bus
#define 	AT91C_DDRC2_DBW_16_BITS              (0x1UL <<  4)      // (HDDRSDRC2) 16 Bits datas bus
// -------- HDDRSDRC2_DLL : (HDDRSDRC2 Offset: 0x24) DLL Information Register -------- 
#define AT91C_DDRC2_MDINC         (0x1UL <<  0) // (HDDRSDRC2) DLL Master Delay Increment
#define AT91C_DDRC2_MDDEC         (0x1UL <<  1) // (HDDRSDRC2) DLL Master Delay Decrement
#define AT91C_DDRC2_MDOVF         (0x1UL <<  2) // (HDDRSDRC2) DLL Master Delay Overflow Flag
#define AT91C_DDRC2_SDCOVF        (0x1UL <<  3) // (HDDRSDRC2) DLL Slave Delay Correction Overflow Flag
#define AT91C_DDRC2_SDCUDF        (0x1UL <<  4) // (HDDRSDRC2) DLL Slave Delay Correction Underflow Flag
#define AT91C_DDRC2_SDERF         (0x1UL <<  5) // (HDDRSDRC2) DLL Slave Delay Correction Error Flag
#define AT91C_DDRC2_MDVAL         (0xFFUL <<  8)        // (HDDRSDRC2) DLL Master Delay Value
#define AT91C_DDRC2_SDVAL         (0xFFUL << 16)        // (HDDRSDRC2) DLL Slave Delay Value
#define AT91C_DDRC2_SDCVAL        (0xFFUL << 24)        // (HDDRSDRC2) DLL Slave Delay Correction Value
// -------- HDDRSDRC2_HS : (HDDRSDRC2 Offset: 0x2c) High Speed Register -------- 
#define AT91C_DDRC2_DA            (0x1UL <<  0) // (HDDRSDRC2) Decode cycle
#define AT91C_DDRC2_NO_OPT        (0x1UL <<  1) // (HDDRSDRC2) Disable optimization
#define AT91C_DDRC2_NO_ANT        (0x1UL <<  2) // (HDDRSDRC2) Disable Anticipated read
#define AT91C_DDRC2_RES_DQS       (0x1UL <<  3) // (HDDRSDRC2) Reset DQS Active
// -------- HDDRSDRC2_ADJ_REF : (HDDRSDRC2 Offset: 0x30) Adjust Refresh Register -------- 
#define AT91C_COUNT_ADJ           (0xFFFFUL <<  0)      // (HDDRSDRC2) ADJust REFresh timer counter
#define AT91C_ADJ_REF             (0x1UL << 16) // (HDDRSDRC2) ADJust REFresh
#define AT91C_SRR_VALUE           (0xFUL << 20) // (HDDRSDRC2) Content of Status Read Register
// -------- HDDRSDRC2_DELAY1 : (HDDRSDRC2 Offset: 0x34) Pad delay1 Register -------- 
#define AT91C_DDRC2_DELAY         (0xFUL <<  0) // (HDDRSDRC2) Pad delay value
// -------- HDDRSDRC2_DELAY2 : (HDDRSDRC2 Offset: 0x38) Pad delay2 Register -------- 
// -------- HDDRSDRC2_DELAY3 : (HDDRSDRC2 Offset: 0x3c) Pad delay3 Register -------- 
// -------- HDDRSDRC2_DELAY4 : (HDDRSDRC2 Offset: 0x40) Pad delay4 Register -------- 
// -------- HDDRSDRC2_DELAY5 : (HDDRSDRC2 Offset: 0x44) Pad delay5 Register -------- 
// -------- HDDRSDRC2_DELAY6 : (HDDRSDRC2 Offset: 0x48) Pad delay6 Register -------- 
// -------- HDDRSDRC2_DELAY7 : (HDDRSDRC2 Offset: 0x4c) Pad delay7 Register -------- 
// -------- HDDRSDRC2_DELAY8 : (HDDRSDRC2 Offset: 0x50) Pad delay8 Register -------- 
// -------- HDDRSDRC2_DRIVESTRENGTH : (HDDRSDRC2 Offset: 0x54) Drive Strength I/O Register -------- 
#define AT91C_DDRC2_DSC           (0x1UL <<  0) // (HDDRSDRC2) Drive Strength Configuration
// -------- HDDRSDRC2_WPCR : (HDDRSDRC2 Offset: 0xe4) Write Protect Control Register -------- 
#define AT91C_DDRC2_WPEN          (0x1UL <<  0) // (HDDRSDRC2) write protect enable
#define AT91C_DDRC2_WPKEY         (0xFFFFFFUL <<  8)    // (HDDRSDRC2) write protect key
// -------- HDDRSDRC2_WPSR : (HDDRSDRC2 Offset: 0xe8) Write Protect Status Register -------- 
#define AT91C_DDRC2_WPVS          (0x1UL <<  0) // (HDDRSDRC2) write protect violation status
#define AT91C_DDRC2_WPSRC         (0xFFFFUL <<  8)      // (HDDRSDRC2) write protect source address

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Reset Controller Interface
// *****************************************************************************
// *** Register offset in AT91S_RSTC structure ***
#define RSTC_RCR        ( 0)    // Reset Control Register
#define RSTC_RSR        ( 4)    // Reset Status Register
#define RSTC_RMR        ( 8)    // Reset Mode Register
#define RSTC_VER        (252)   // Version Register
// -------- RSTC_RCR : (RSTC Offset: 0x0) Reset Control Register -------- 
#define AT91C_RSTC_PROCRST        (0x1UL <<  0) // (RSTC) Processor Reset
#define AT91C_RSTC_ICERST         (0x1UL <<  1) // (RSTC) ICE Interface Reset
#define AT91C_RSTC_PERRST         (0x1UL <<  2) // (RSTC) Peripheral Reset
#define AT91C_RSTC_EXTRST         (0x1UL <<  3) // (RSTC) External Reset
#define AT91C_RSTC_KEY            (0xFFUL << 24)        // (RSTC) Password
// -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register -------- 
#define AT91C_RSTC_URSTS          (0x1UL <<  0) // (RSTC) User Reset Status
#define AT91C_RSTC_RSTTYP         (0x7UL <<  8) // (RSTC) Reset Type
#define 	AT91C_RSTC_RSTTYP_GENERAL              (0x0UL <<  8)    // (RSTC) General reset. Both VDDCORE and VDDBU rising.
#define 	AT91C_RSTC_RSTTYP_WAKEUP               (0x1UL <<  8)    // (RSTC) WakeUp Reset. VDDCORE rising.
#define 	AT91C_RSTC_RSTTYP_WATCHDOG             (0x2UL <<  8)    // (RSTC) Watchdog Reset. Watchdog overflow occured.
#define 	AT91C_RSTC_RSTTYP_SOFTWARE             (0x3UL <<  8)    // (RSTC) Software Reset. Processor reset required by the software.
#define 	AT91C_RSTC_RSTTYP_USER                 (0x4UL <<  8)    // (RSTC) User Reset. NRST pin detected low.
#define AT91C_RSTC_NRSTL          (0x1UL << 16) // (RSTC) NRST pin level
#define AT91C_RSTC_SRCMP          (0x1UL << 17) // (RSTC) Software Reset Command in Progress.
// -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register -------- 
#define AT91C_RSTC_URSTEN         (0x1UL <<  0) // (RSTC) User Reset Enable
#define AT91C_RSTC_URSTIEN        (0x1UL <<  4) // (RSTC) User Reset Interrupt Enable
#define AT91C_RSTC_ERSTL          (0xFUL <<  8) // (RSTC) User Reset Enable

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Power Management Controller 3 V204
// *****************************************************************************
// *** Register offset in AT91S_PMC structure ***
#define PMC_SCER        ( 0)    // System Clock Enable Register
#define PMC_SCDR        ( 4)    // System Clock Disable Register
#define PMC_SCSR        ( 8)    // System Clock Status Register
#define PMC_PCER        (16)    // Peripheral Clock Enable Register  (0:31 PERI_ID)
#define PMC_PCDR        (20)    // Peripheral Clock Disable Register (0:31 PERI_ID)
#define PMC_PCSR        (24)    // Peripheral Clock Status Register  (0:31 PERI_ID)
#define PMC_UCKR        (28)    // UTMI Clock Configuration Register
#define PMC_MOR         (32)    // Main Oscillator Register
#define PMC_MCFR        (36)    // Main Clock  Frequency Register
#define PMC_PLLAR       (40)    // PLL A Register
#define PMC_PLLBR       (44)    // PLL B Register
#define PMC_MCKR        (48)    // Master Clock Register
#define PMC_USB         (56)    // USB clock register
#define PMC_SMD         (60)    // SMD clock register
#define PMC_PCKR        (64)    // Programmable Clock 0 Register
#define PMC_IER         (96)    // Interrupt Enable Register
#define PMC_IDR         (100)   // Interrupt Disable Register
#define PMC_SR          (104)   // Status Register
#define PMC_IMR         (108)   // Interrupt Mask Register
#define PMC_FSMR        (112)   // Fast Startup Mode Register
#define PMC_FSPR        (116)   // Fast Startup Polarity Register
#define PMC_FOCR        (120)   // Fault Output Clear Register
#define PMC_PLLICPR     (128)   // PLL Charge Pump Current Register
#define PMC_ADDRSIZE    (236)   //
#define PMC_NAME1       (240)   //
#define PMC_NAME2       (244)   //
#define PMC_FEATURES    (248)   //
#define PMC_VERSION     (252)   //
#define PMC_PCER1       (256)   // Peripheral Clock Enable Register  32:63 PERI_ID
#define PMC_PCDR1       (260)   // Peripheral Clock Disable Register 32:63 PERI_ID
#define PMC_PCSR1       (264)   // Peripheral Clock Status Register  32:63 PERI_ID
#define PMC_PCR         (268)   // Peripheral Control Register
// -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register -------- 
#define AT91C_PMC_DDR             (0x1UL <<  2) // (PMC) DDR controller Clock2x
#define AT91C_PMC_UHP             (0x1UL <<  6) // (PMC) USB Host Port Clock
#define AT91C_PMC_UDP             (0x1UL <<  7) // (PMC) USB Device Port Clock
#define AT91C_PMC_PCK0            (0x1UL <<  8) // (PMC) Programmable Clock Output
#define AT91C_PMC_PCK1            (0x1UL <<  9) // (PMC) Programmable Clock Output
// -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register -------- 
// -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register -------- 
#define AT91C_PMC_PCK             (0x1UL <<  0) // (PMC) Processor Clock
// -------- CKGR_UCKR : (PMC Offset: 0x1c) UTMI Clock Configuration Register -------- 
#define AT91C_CKGR_UOSCEN         (0x1UL <<  0) // (PMC) UTMI Oscillator Enable
#define AT91C_CKGR_OSCBYPASS      (0x1UL <<  1) // (PMC) UTMI Oscillator Bypass
#define AT91C_CKGR_OSCOUNT        (0xFFUL <<  8)        // (PMC) UTMI Oscillator Start-up Time
#define AT91C_CKGR_UPLLEN         (0x1UL << 16) // (PMC) UTMI PLL Enable
#define 	AT91C_CKGR_UPLLEN_DISABLED             (0x0UL << 16)    // (PMC) The UTMI PLL is disabled
#define 	AT91C_CKGR_UPLLEN_ENABLED              (0x1UL << 16)    // (PMC) The UTMI PLL is enabled
#define AT91C_CKGR_UPLLCOUNT      (0xFUL << 20) // (PMC) UTMI Oscillator Start-up Time
#define AT91C_CKGR_BIASEN         (0x1UL << 24) // (PMC) UTMI BIAS Enable
#define 	AT91C_CKGR_BIASEN_DISABLED             (0x0UL << 24)    // (PMC) The UTMI BIAS is disabled
#define 	AT91C_CKGR_BIASEN_ENABLED              (0x1UL << 24)    // (PMC) The UTMI BIAS is enabled
#define AT91C_CKGR_BIASCOUNT      (0xFUL << 28) // (PMC) UTMI BIAS Start-up Time
// -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register -------- 
#define AT91C_CKGR_MOSCXTEN       (0x1UL <<  0) // (PMC) Main Crystal Oscillator Enable
#define AT91C_CKGR_MOSCXTBY       (0x1UL <<  1) // (PMC) Main Crystal Oscillator Bypass
#define AT91C_CKGR_WAITMODE       (0x1UL <<  2) // (PMC) Main Crystal Oscillator Bypass
#define AT91C_CKGR_MOSCRCEN       (0x1UL <<  3) // (PMC) Main On-Chip RC Oscillator Enable
#define AT91C_CKGR_MOSCXTST       (0xFFUL <<  8)        // (PMC) Main Crystal Oscillator Start-up Time
#define AT91C_CKGR_KEY            (0xFFUL << 16)        // (PMC) Clock Generator Controller Writing Protection Key
#define AT91C_CKGR_MOSCSEL        (0x1UL << 24) // (PMC) Main Oscillator Selection
#define AT91C_CKGR_CFDEN          (0x1UL << 25) // (PMC) Clock Failure Detector Enable
// -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Frequency Register -------- 
#define AT91C_CKGR_MAINF          (0xFFFFUL <<  0)      // (PMC) Main Clock Frequency
#define AT91C_CKGR_MAINRDY        (0x1UL << 16) // (PMC) Main Clock Ready
// -------- CKGR_PLLAR : (PMC Offset: 0x28) PLL A Register -------- 
#define AT91C_CKGR_DIVA           (0xFFUL <<  0)        // (PMC) Divider A Selected
#define 	AT91C_CKGR_DIVA_0                    (0x0UL)    // (PMC) Divider A output is 0
#define 	AT91C_CKGR_DIVA_BYPASS               (0x1UL)    // (PMC) Divider A is bypassed
#define AT91C_CKGR_PLLACOUNT      (0x3FUL <<  8)        // (PMC) PLL A Counter
#define AT91C_CKGR_OUTA           (0x3UL << 14) // (PMC) PLL A Output Frequency Range
#define 	AT91C_CKGR_OUTA_0                    (0x0UL << 14)      // (PMC) Please refer to the PLLA datasheet
#define 	AT91C_CKGR_OUTA_1                    (0x1UL << 14)      // (PMC) Please refer to the PLLA datasheet
#define 	AT91C_CKGR_OUTA_2                    (0x2UL << 14)      // (PMC) Please refer to the PLLA datasheet
#define 	AT91C_CKGR_OUTA_3                    (0x3UL << 14)      // (PMC) Please refer to the PLLA datasheet
#define 	AT91C_CKGR_OUTA_7                    (0x7UL << 14)      // (PMC) Please refer to the PLLA datasheet
#define AT91C_CKGR_MULA           (0x7FFUL << 16)       // (PMC) PLL A Multiplier
#define AT91C_CKGR_SRCA           (0x1UL << 29) // (PMC)
// -------- CKGR_PLLBR : (PMC Offset: 0x2c) PLL B Register -------- 
#define AT91C_CKGR_DIVB           (0xFFUL <<  0)        // (PMC) Divider B Selected
#define 	AT91C_CKGR_DIVB_0                    (0x0UL)    // (PMC) Divider B output is 0
#define 	AT91C_CKGR_DIVB_BYPASS               (0x1UL)    // (PMC) Divider B is bypassed
#define AT91C_CKGR_PLLBCOUNT      (0x3FUL <<  8)        // (PMC) PLL B Counter
#define AT91C_CKGR_OUTB           (0x3UL << 14) // (PMC) PLL B Output Frequency Range
#define 	AT91C_CKGR_OUTB_0                    (0x0UL << 14)      // (PMC) Please refer to the PLLB datasheet
#define 	AT91C_CKGR_OUTB_1                    (0x1UL << 14)      // (PMC) Please refer to the PLLB datasheet
#define 	AT91C_CKGR_OUTB_2                    (0x2UL << 14)      // (PMC) Please refer to the PLLB datasheet
#define 	AT91C_CKGR_OUTB_3                    (0x3UL << 14)      // (PMC) Please refer to the PLLB datasheet
#define AT91C_CKGR_MULB           (0x7FFUL << 16)       // (PMC) PLL B Multiplier
// -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register -------- 
#define AT91C_PMC_CSS             (0x7UL <<  0) // (PMC) Programmable Clock Selection
#define 	AT91C_PMC_CSS_SLOW_CLK             (0x0UL)      // (PMC) Slow Clock is selected
#define 	AT91C_PMC_CSS_MAIN_CLK             (0x1UL)      // (PMC) Main Clock is selected
#define 	AT91C_PMC_CSS_PLLA_CLK             (0x2UL)      // (PMC) Clock from PLL A is selected
#define 	AT91C_PMC_CSS_UPLL_CLK             (0x3UL)      // (PMC) Clock from UTMI PLL is selected
#define 	AT91C_PMC_CSS_SYS_CLK              (0x4UL)      // (PMC) System clock is selected
#define AT91C_PMC_PRES            (0xFUL <<  4) // (PMC) Programmable Clock Prescaler
#define 	AT91C_PMC_PRES_CLK                  (0x0UL <<  4)       // (PMC) Selected clock
#define 	AT91C_PMC_PRES_CLK_2                (0x1UL <<  4)       // (PMC) Selected clock divided by 2
#define 	AT91C_PMC_PRES_CLK_4                (0x2UL <<  4)       // (PMC) Selected clock divided by 4
#define 	AT91C_PMC_PRES_CLK_8                (0x3UL <<  4)       // (PMC) Selected clock divided by 8
#define 	AT91C_PMC_PRES_CLK_16               (0x4UL <<  4)       // (PMC) Selected clock divided by 16
#define 	AT91C_PMC_PRES_CLK_32               (0x5UL <<  4)       // (PMC) Selected clock divided by 32
#define 	AT91C_PMC_PRES_CLK_64               (0x6UL <<  4)       // (PMC) Selected clock divided by 64
#define 	AT91C_PMC_PRES_CLK_3                (0x7UL <<  4)       // (PMC) Selected clock divided by 3
#define 	AT91C_PMC_PRES_CLK_1_5              (0x8UL <<  4)       // (PMC) Selected clock divided by 1.5
#define AT91C_PMC_MDIV            (0x3UL <<  8) // (PMC) Master Clock Division
#define 	AT91C_PMC_MDIV_1                    (0x0UL <<  8)       // (PMC) Processor clock = Master Clock ; DDR Clock = Master Clock
#define 	AT91C_PMC_MDIV_2                    (0x1UL <<  8)       // (PMC) Processor clock = 2 * Master Clock ; DDR Clock = 2 * Master Clock
#define 	AT91C_PMC_MDIV_4                    (0x2UL <<  8)       // (PMC) Processor clock = 4 * Master Clock ; DDR Clock = 2 * Master Clock
#define 	AT91C_PMC_MDIV_3                    (0x3UL <<  8)       // (PMC) Processor clock = 3 * Master Clock ; DDR Clock = 2 * Master Clock
#define AT91C_PMC_PLLADIV2        (0x1UL << 12) // (PMC) PLLA divisor by 2
#define 	AT91C_PMC_PLLADIV2_1                    (0x0UL << 12)   // (PMC) PLLA clock frequency is divided by 1
#define 	AT91C_PMC_PLLADIV2_2                    (0x1UL << 12)   // (PMC) PLLA clock frequency is divided by 2
// -------- PMC_USB : (PMC Offset: 0x38) USB Clock Register -------- 
#define AT91C_PMC_USBS            (0x1UL <<  0) // (PMC) USBS
#define 	AT91C_PMC_USBS_USB_PLLA             (0x0UL)     // (PMC) USB Clock Input is PLLA
#define 	AT91C_PMC_USBS_USB_UPLL             (0x1UL)     // (PMC) USB Clock Input is UPLL
#define AT91C_PMC_USBDIV          (0xFUL <<  8) // (PMC) USBDIV
#define 	AT91C_PMC_USBDIV_1                    (0x0UL <<  8)     // (PMC) USB Clock divided by 1
#define 	AT91C_PMC_USBDIV_2                    (0x1UL <<  8)     // (PMC) USB Clock divided by 2
#define 	AT91C_PMC_USBDIV_3                    (0x2UL <<  8)     // (PMC) USB Clock divided by 3
#define 	AT91C_PMC_USBDIV_4                    (0x3UL <<  8)     // (PMC) USB Clock divided by 4
#define 	AT91C_PMC_USBDIV_5                    (0x4UL <<  8)     // (PMC) USB Clock divided by 5
#define 	AT91C_PMC_USBDIV_6                    (0x5UL <<  8)     // (PMC) USB Clock divided by 6
#define 	AT91C_PMC_USBDIV_7                    (0x6UL <<  8)     // (PMC) USB Clock divided by 7
#define 	AT91C_PMC_USBDIV_8                    (0x7UL <<  8)     // (PMC) USB Clock divided by 8
#define 	AT91C_PMC_USBDIV_9                    (0x8UL <<  8)     // (PMC) USB Clock divided by 9
#define 	AT91C_PMC_USBDIV_10                   (0x9UL <<  8)     // (PMC) USB Clock divided by 10
#define 	AT91C_PMC_USBDIV_11                   (0xAUL <<  8)     // (PMC) USB Clock divided by 11
#define 	AT91C_PMC_USBDIV_12                   (0xBUL <<  8)     // (PMC) USB Clock divided by 12
#define 	AT91C_PMC_USBDIV_13                   (0xCUL <<  8)     // (PMC) USB Clock divided by 13
#define 	AT91C_PMC_USBDIV_14                   (0xDUL <<  8)     // (PMC) USB Clock divided by 14
#define 	AT91C_PMC_USBDIV_15                   (0xEUL <<  8)     // (PMC) USB Clock divided by 15
#define 	AT91C_PMC_USBDIV_16                   (0xFUL <<  8)     // (PMC) USB Clock divided by 16
// -------- PMC_SMD : (PMC Offset: 0x3c) SMD Clock Register -------- 
#define AT91C_PMC_SMDS            (0x1UL <<  0) // (PMC) SMDS
#define 	AT91C_PMC_SMDS_SMD_PLLA             (0x0UL)     // (PMC) SMD Clock Input is PLLA
#define 	AT91C_PMC_SMDS_SMD_PLLB             (0x1UL)     // (PMC) SMD Clock Input is PLLB
#define AT91C_PMC_SMDDIV          (0x1FUL <<  8)        // (PMC) SMDDIV
#define 	AT91C_PMC_SMDDIV_1                    (0x0UL <<  8)     // (PMC) SMD Clock divided by 1
#define 	AT91C_PMC_SMDDIV_2                    (0x1UL <<  8)     // (PMC) SMD Clock divided by 2
#define 	AT91C_PMC_SMDDIV_3                    (0x2UL <<  8)     // (PMC) SMD Clock divided by 3
#define 	AT91C_PMC_SMDDIV_4                    (0x3UL <<  8)     // (PMC) SMD Clock divided by 4
#define 	AT91C_PMC_SMDDIV_5                    (0x4UL <<  8)     // (PMC) SMD Clock divided by 5
#define 	AT91C_PMC_SMDDIV_6                    (0x5UL <<  8)     // (PMC) SMD Clock divided by 6
#define 	AT91C_PMC_SMDDIV_7                    (0x6UL <<  8)     // (PMC) SMD Clock divided by 7
#define 	AT91C_PMC_SMDDIV_8                    (0x7UL <<  8)     // (PMC) SMD Clock divided by 8
#define 	AT91C_PMC_SMDDIV_9                    (0x8UL <<  8)     // (PMC) SMD Clock divided by 9
#define 	AT91C_PMC_SMDDIV_10                   (0x9UL <<  8)     // (PMC) SMD Clock divided by 10
#define 	AT91C_PMC_SMDDIV_11                   (0xAUL <<  8)     // (PMC) SMD Clock divided by 11
#define 	AT91C_PMC_SMDDIV_12                   (0xBUL <<  8)     // (PMC) SMD Clock divided by 12
#define 	AT91C_PMC_SMDDIV_13                   (0xCUL <<  8)     // (PMC) SMD Clock divided by 13
#define 	AT91C_PMC_SMDDIV_14                   (0xDUL <<  8)     // (PMC) SMD Clock divided by 14
#define 	AT91C_PMC_SMDDIV_15                   (0xEUL <<  8)     // (PMC) SMD Clock divided by 15
#define 	AT91C_PMC_SMDDIV_16                   (0xFUL <<  8)     // (PMC) SMD Clock divided by 16
#define 	AT91C_PMC_SMDDIV_17                   (0x10UL <<  8)    // (PMC) SMD Clock divided by 17
#define 	AT91C_PMC_SMDDIV_18                   (0x11UL <<  8)    // (PMC) SMD Clock divided by 18
#define 	AT91C_PMC_SMDDIV_19                   (0x12UL <<  8)    // (PMC) SMD Clock divided by 19
#define 	AT91C_PMC_SMDDIV_20                   (0x13UL <<  8)    // (PMC) SMD Clock divided by 20
#define 	AT91C_PMC_SMDDIV_21                   (0x14UL <<  8)    // (PMC) SMD Clock divided by 21
#define 	AT91C_PMC_SMDDIV_22                   (0x15UL <<  8)    // (PMC) SMD Clock divided by 22
#define 	AT91C_PMC_SMDDIV_23                   (0x16UL <<  8)    // (PMC) SMD Clock divided by 23
#define 	AT91C_PMC_SMDDIV_24                   (0x17UL <<  8)    // (PMC) SMD Clock divided by 24
#define 	AT91C_PMC_SMDDIV_25                   (0x18UL <<  8)    // (PMC) SMD Clock divided by 25
#define 	AT91C_PMC_SMDDIV_26                   (0x19UL <<  8)    // (PMC) SMD Clock divided by 26
#define 	AT91C_PMC_SMDDIV_27                   (0x1AUL <<  8)    // (PMC) SMD Clock divided by 27
#define 	AT91C_PMC_SMDDIV_28                   (0x1BUL <<  8)    // (PMC) SMD Clock divided by 28
#define 	AT91C_PMC_SMDDIV_29                   (0x1CUL <<  8)    // (PMC) SMD Clock divided by 29
#define 	AT91C_PMC_SMDDIV_30                   (0x1DUL <<  8)    // (PMC) SMD Clock divided by 30
#define 	AT91C_PMC_SMDDIV_31                   (0x1EUL <<  8)    // (PMC) SMD Clock divided by 31
#define 	AT91C_PMC_SMDDIV_32                   (0x1FUL <<  8)    // (PMC) SMD Clock divided by 32
// -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register -------- 
#define AT91C_PMC_SLCKMCK         (0x1UL <<  8) // (PMC) Programmable Clock Prescaler
#define 	AT91C_PMC_SLCKMCK_SLCK                 (0x0UL <<  8)    // (PMC) Slow Clock selected
#define 	AT91C_PMC_SLCKMCK_MCK                  (0x1UL <<  8)    // (PMC) Master Clock selected
// -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register -------- 
#define AT91C_PMC_MOSCXTS         (0x1UL <<  0) // (PMC) Main Crystal Oscillator Status/Enable/Disable/Mask
#define AT91C_PMC_LOCKA           (0x1UL <<  1) // (PMC) PLL A Status/Enable/Disable/Mask
#define AT91C_PMC_MCKRDY          (0x1UL <<  3) // (PMC) Master Clock Status/Enable/Disable/Mask
#define AT91C_PMC_LOCKU           (0x1UL <<  6) // (PMC) PLL UTMI Status/Enable/Disable/Mask
#define AT91C_PMC_PCKRDY0         (0x1UL <<  8) // (PMC) PCK0_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_PCKRDY1         (0x1UL <<  9) // (PMC) PCK1_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_MOSCSELS        (0x1UL << 16) // (PMC) Main Oscillator Selection Status
#define AT91C_PMC_MOSCRCS         (0x1UL << 17) // (PMC) Main On-Chip RC Oscillator Status
#define AT91C_PMC_CFDEV           (0x1UL << 18) // (PMC) Clock Failure Detector Event
// -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register -------- 
// -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register -------- 
#define AT91C_PMC_CFDS            (0x1UL << 19) // (PMC) Clock Failure Detector Status
#define AT91C_PMC_FOS             (0x1UL << 20) // (PMC) Clock Failure Detector Fault Output Status
// -------- PMC_IMR : (PMC Offset: 0x6c) PMC Interrupt Mask Register -------- 
// -------- PMC_FSMR : (PMC Offset: 0x70) Fast Startup Mode Register -------- 
#define AT91C_PMC_FSTT            (0xFFFFUL <<  0)      // (PMC) Fast Start-up Input Enable 0 to 15
#define AT91C_PMC_RTTAL           (0x1UL << 16) // (PMC) RTT Alarm Enable
#define AT91C_PMC_RTCAL           (0x1UL << 17) // (PMC) RTC Alarm Enable
#define AT91C_PMC_USBAL           (0x1UL << 18) // (PMC) USB Alarm Enable
#define AT91C_PMC_LPM             (0x1UL << 20) // (PMC) Low Power Mode
// -------- PMC_FSPR : (PMC Offset: 0x74) Fast Startup Polarity Register -------- 
#define AT91C_PMC_FSTP            (0xFFFFUL <<  0)      // (PMC) Fast Start-up Input Polarity 0 to 15
// -------- PMC_FOCR : (PMC Offset: 0x78) Fault Output Clear Register -------- 
#define AT91C_PMC_FOCLR           (0x1UL <<  0) // (PMC) Fault Output Clear
// -------- PMC_PLLICPR : (PMC Offset: 0x80) PLL Charge Pump Current Register -------- 
#define AT91C_PMC_ICPPLLA         (0xFUL <<  0) // (PMC) PLLA charge pump current setting
#define 	AT91C_PMC_ICPPLLA_0                    (0x0UL)  // (PMC) 595-800 MHz
#define 	AT91C_PMC_ICPPLLA_1                    (0x1UL)  // (PMC) 395-600 MHz
#define AT91C_PMC_REALLOCK        (0x1UL <<  7) // (PMC) PLLs use real lock signals when 1
#define AT91C_PMC_IPLLA           (0xFUL <<  8) // (PMC) PLLA special setting
#define 	AT91C_PMC_IPLLA_0                    (0x0UL <<  8)      // (PMC) Internal LFT
#define 	AT91C_PMC_IPLLA_1                    (0x1UL <<  8)      // (PMC) External LFT
// -------- PMC_FEATURES : (PMC Offset: 0xf8)   -------- 
#define AT91C_PMC_CFGAHBCLK       (0x1UL <<  0) // (PMC)
#define 	AT91C_PMC_CFGAHBCLK_0                    (0x0UL)        // (PMC)
#define 	AT91C_PMC_CFGAHBCLK_1                    (0x1UL)        // (PMC)
#define AT91C_PMC_HCLKEN          (0x1UL <<  1) // (PMC)
#define 	AT91C_PMC_HCLKEN_0                    (0x0UL <<  1)     // (PMC)
#define 	AT91C_PMC_HCLKEN_1                    (0x1UL <<  1)     // (PMC)
#define AT91C_PMC_PERMCLK         (0x1UL <<  2) // (PMC)
#define 	AT91C_PMC_PERMCLK_0                    (0x0UL <<  2)    // (PMC)
#define 	AT91C_PMC_PERMCLK_1                    (0x1UL <<  2)    // (PMC)
#define AT91C_PMC_CORE2           (0x1UL <<  3) // (PMC)
#define 	AT91C_PMC_CORE2_0                    (0x0UL <<  3)      // (PMC)
#define 	AT91C_PMC_CORE2_1                    (0x1UL <<  3)      // (PMC)
#define AT91C_PMC_USBDEVCK        (0x1UL <<  4) // (PMC)
#define 	AT91C_PMC_USBDEVCK_0                    (0x0UL <<  4)   // (PMC)
#define 	AT91C_PMC_USBDEVCK_1                    (0x1UL <<  4)   // (PMC)
#define AT91C_PMC_USBHOSTCK       (0x1UL <<  5) // (PMC)
#define 	AT91C_PMC_USBHOSTCK_0                    (0x0UL <<  5)  // (PMC)
#define 	AT91C_PMC_USBHOSTCK_1                    (0x1UL <<  5)  // (PMC)
#define AT91C_PMC_USBOTGCK        (0x1UL <<  6) // (PMC)
#define 	AT91C_PMC_USBOTGCK_0                    (0x0UL <<  6)   // (PMC)
#define 	AT91C_PMC_USBOTGCK_1                    (0x1UL <<  6)   // (PMC)
#define AT91C_PMC_UHSYNRST        (0x1UL <<  7) // (PMC)
#define 	AT91C_PMC_UHSYNRST_0                    (0x0UL <<  7)   // (PMC)
#define 	AT91C_PMC_UHSYNRST_1                    (0x1UL <<  7)   // (PMC)
#define AT91C_PMC_UOSYNRST        (0x1UL <<  8) // (PMC)
#define 	AT91C_PMC_UOSYNRST_0                    (0x0UL <<  8)   // (PMC)
#define 	AT91C_PMC_UOSYNRST_1                    (0x1UL <<  8)   // (PMC)
#define AT91C_PMC_PLLENPOL        (0x1UL <<  9) // (PMC)
#define 	AT91C_PMC_PLLENPOL_0                    (0x0UL <<  9)   // (PMC)
#define 	AT91C_PMC_PLLENPOL_1                    (0x1UL <<  9)   // (PMC)
#define AT91C_PMC_BIASREG         (0x1UL << 10) // (PMC)
#define 	AT91C_PMC_BIASREG_0                    (0x0UL << 10)    // (PMC)
#define 	AT91C_PMC_BIASREG_1                    (0x1UL << 10)    // (PMC)
#define AT91C_PMC_OUTPLL          (0x1UL << 11) // (PMC)
#define 	AT91C_PMC_OUTPLL_0                    (0x0UL << 11)     // (PMC)
#define 	AT91C_PMC_OUTPLL_1                    (0x1UL << 11)     // (PMC)
#define AT91C_PMC_OUTCURR         (0x1UL << 12) // (PMC)
#define 	AT91C_PMC_OUTCURR_0                    (0x0UL << 12)    // (PMC)
#define 	AT91C_PMC_OUTCURR_1                    (0x1UL << 12)    // (PMC)
#define AT91C_PMC_FWUP            (0x1UL << 13) // (PMC)
#define 	AT91C_PMC_FWUP_0                    (0x0UL << 13)       // (PMC)
#define 	AT91C_PMC_FWUP_1                    (0x1UL << 13)       // (PMC)
#define AT91C_PMC_SELMAINCLK      (0x1UL << 14) // (PMC)
#define 	AT91C_PMC_SELMAINCLK_0                    (0x0UL << 14) // (PMC)
#define 	AT91C_PMC_SELMAINCLK_1                    (0x1UL << 14) // (PMC)
#define AT91C_PMC_RSTCLKM         (0x1UL << 15) // (PMC)
#define 	AT91C_PMC_RSTCLKM_0                    (0x0UL << 15)    // (PMC)
#define 	AT91C_PMC_RSTCLKM_1                    (0x1UL << 15)    // (PMC)
#define AT91C_PMC_NB_PERIPH_CLOCK (0xFFUL << 16)        // (PMC)
// -------- PMC_VERSION : (PMC Offset: 0xfc)   -------- 
#define AT91C_PMC_Version         (0xFFFFUL <<  0)      // (PMC)
#define 	AT91C_PMC_Version_0                    (0x0UL)  // (PMC)
#define 	AT91C_PMC_Version_1                    (0x1UL)  // (PMC)
#define AT91C_PMC_MFN             (0x7UL << 16) // (PMC)
#define 	AT91C_PMC_MFN_0                    (0x0UL << 16)        // (PMC)
#define 	AT91C_PMC_MFN_1                    (0x1UL << 16)        // (PMC)
// -------- PMC_PCR : (PMC Offset: 0x10c) Peripheral Control Register -------- 
#define AT91C_PMC_PID             (0x3FUL <<  0)        // (PMC) Peripheral Identifier
#define AT91C_PMC_CMD             (0x1UL << 12) // (PMC) Read / Write Command
#define AT91C_PMC_DIV             (0x3UL << 16) // (PMC) Peripheral clock Divider
#define AT91C_PMC_EN              (0x1UL << 28) // (PMC) Peripheral Clock Enable

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Watchdog Timer Controller Interface
// *****************************************************************************
// *** Register offset in AT91S_WDTC structure ***
#define WDTC_WDCR       ( 0)    // Watchdog Control Register
#define WDTC_WDMR       ( 4)    // Watchdog Mode Register
#define WDTC_WDSR       ( 8)    // Watchdog Status Register
// -------- WDTC_WDCR : (WDTC Offset: 0x0) Periodic Interval Image Register -------- 
#define AT91C_WDTC_WDRSTT         (0x1UL <<  0) // (WDTC) Watchdog Restart
#define AT91C_WDTC_KEY            (0xFFUL << 24)        // (WDTC) Watchdog KEY Password
// -------- WDTC_WDMR : (WDTC Offset: 0x4) Watchdog Mode Register -------- 
#define AT91C_WDTC_WDV            (0xFFFUL <<  0)       // (WDTC) Watchdog Timer Restart
#define AT91C_WDTC_WDFIEN         (0x1UL << 12) // (WDTC) Watchdog Fault Interrupt Enable
#define AT91C_WDTC_WDRSTEN        (0x1UL << 13) // (WDTC) Watchdog Reset Enable
#define AT91C_WDTC_WDRPROC        (0x1UL << 14) // (WDTC) Watchdog Timer Restart
#define AT91C_WDTC_WDDIS          (0x1UL << 15) // (WDTC) Watchdog Disable
#define AT91C_WDTC_WDD            (0xFFFUL << 16)       // (WDTC) Watchdog Delta Value
#define AT91C_WDTC_WDDBGHLT       (0x1UL << 28) // (WDTC) Watchdog Debug Halt
#define AT91C_WDTC_WDIDLEHLT      (0x1UL << 29) // (WDTC) Watchdog Idle Halt
// -------- WDTC_WDSR : (WDTC Offset: 0x8) Watchdog Status Register -------- 
#define AT91C_WDTC_WDUNF          (0x1UL <<  0) // (WDTC) Watchdog Underflow
#define AT91C_WDTC_WDERR          (0x1UL <<  1) // (WDTC) Watchdog Error

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Multimedia Card Interface
// *****************************************************************************
// *** Register offset in AT91S_MCI structure ***
#define MCI_CR          ( 0)    // MCI Control Register
#define MCI_MR          ( 4)    // MCI Mode Register
#define MCI_DTOR        ( 8)    // MCI Data Timeout Register
#define MCI_SDCR        (12)    // MCI SD/SDIO Card Register
#define MCI_ARGR        (16)    // MCI Argument Register
#define MCI_CMDR        (20)    // MCI Command Register
#define MCI_BLKR        (24)    // MCI Block Register
#define MCI_CSTOR       (28)    // MCI Completion Signal Timeout Register
#define MCI_RSPR        (32)    // MCI Response Register
#define MCI_RDR         (48)    // MCI Receive Data Register
#define MCI_TDR         (52)    // MCI Transmit Data Register
#define MCI_SR          (64)    // MCI Status Register
#define MCI_IER         (68)    // MCI Interrupt Enable Register
#define MCI_IDR         (72)    // MCI Interrupt Disable Register
#define MCI_IMR         (76)    // MCI Interrupt Mask Register
#define MCI_DMA         (80)    // MCI DMA Configuration Register
#define MCI_CFG         (84)    // MCI Configuration Register
#define MCI_WPCR        (228)   // MCI Write Protection Control Register
#define MCI_WPSR        (232)   // MCI Write Protection Status Register
#define MCI_ADDRSIZE    (236)   // MCI ADDRSIZE REGISTER
#define MCI_IPNAME1     (240)   // MCI IPNAME1 REGISTER
#define MCI_IPNAME2     (244)   // MCI IPNAME2 REGISTER
#define MCI_FEATURES    (248)   // MCI FEATURES REGISTER
#define MCI_VER         (252)   // MCI VERSION REGISTER
#define MCI_FIFO        (512)   // MCI FIFO Aperture Register
// -------- MCI_CR : (MCI Offset: 0x0) MCI Control Register -------- 
#define AT91C_MCI_MCIEN           (0x1UL <<  0) // (MCI) Multimedia Interface Enable
#define 	AT91C_MCI_MCIEN_0                    (0x0UL)    // (MCI) No effect
#define 	AT91C_MCI_MCIEN_1                    (0x1UL)    // (MCI) Enable the MultiMedia Interface if MCIDIS is 0
#define AT91C_MCI_MCIDIS          (0x1UL <<  1) // (MCI) Multimedia Interface Disable
#define 	AT91C_MCI_MCIDIS_0                    (0x0UL <<  1)     // (MCI) No effect
#define 	AT91C_MCI_MCIDIS_1                    (0x1UL <<  1)     // (MCI) Disable the MultiMedia Interface
#define AT91C_MCI_PWSEN           (0x1UL <<  2) // (MCI) Power Save Mode Enable
#define 	AT91C_MCI_PWSEN_0                    (0x0UL <<  2)      // (MCI) No effect
#define 	AT91C_MCI_PWSEN_1                    (0x1UL <<  2)      // (MCI) Enable the Power-saving mode if PWSDIS is 0.
#define AT91C_MCI_PWSDIS          (0x1UL <<  3) // (MCI) Power Save Mode Disable
#define 	AT91C_MCI_PWSDIS_0                    (0x0UL <<  3)     // (MCI) No effect
#define 	AT91C_MCI_PWSDIS_1                    (0x1UL <<  3)     // (MCI) Disable the Power-saving mode.
#define AT91C_MCI_IOWAITEN        (0x1UL <<  4) // (MCI) SDIO Read Wait Enable
#define 	AT91C_MCI_IOWAITEN_0                    (0x0UL <<  4)   // (MCI) No effect
#define 	AT91C_MCI_IOWAITEN_1                    (0x1UL <<  4)   // (MCI) Enables the SDIO Read Wait Operation.
#define AT91C_MCI_IOWAITDIS       (0x1UL <<  5) // (MCI) SDIO Read Wait Disable
#define 	AT91C_MCI_IOWAITDIS_0                    (0x0UL <<  5)  // (MCI) No effect
#define 	AT91C_MCI_IOWAITDIS_1                    (0x1UL <<  5)  // (MCI) Disables the SDIO Read Wait Operation.
#define AT91C_MCI_SWRST           (0x1UL <<  7) // (MCI) MCI Software reset
#define 	AT91C_MCI_SWRST_0                    (0x0UL <<  7)      // (MCI) No effect
#define 	AT91C_MCI_SWRST_1                    (0x1UL <<  7)      // (MCI) Resets the MCI
// -------- MCI_MR : (MCI Offset: 0x4) MCI Mode Register -------- 
#define AT91C_MCI_CLKDIV          (0xFFUL <<  0)        // (MCI) Clock Divider
#define AT91C_MCI_PWSDIV          (0x7UL <<  8) // (MCI) Power Saving Divider
#define AT91C_MCI_RDPROOF         (0x1UL << 11) // (MCI) Read Proof Enable
#define 	AT91C_MCI_RDPROOF_DISABLE              (0x0UL << 11)    // (MCI) Disables Read Proof
#define 	AT91C_MCI_RDPROOF_ENABLE               (0x1UL << 11)    // (MCI) Enables Read Proof
#define AT91C_MCI_WRPROOF         (0x1UL << 12) // (MCI) Write Proof Enable
#define 	AT91C_MCI_WRPROOF_DISABLE              (0x0UL << 12)    // (MCI) Disables Write Proof
#define 	AT91C_MCI_WRPROOF_ENABLE               (0x1UL << 12)    // (MCI) Enables Write Proof
#define AT91C_MCI_PDCFBYTE        (0x1UL << 13) // (MCI) PDC Force Byte Transfer
#define 	AT91C_MCI_PDCFBYTE_DISABLE              (0x0UL << 13)   // (MCI) Disables PDC Force Byte Transfer
#define 	AT91C_MCI_PDCFBYTE_ENABLE               (0x1UL << 13)   // (MCI) Enables PDC Force Byte Transfer
#define AT91C_MCI_PDCPADV         (0x1UL << 14) // (MCI) PDC Padding Value
#define AT91C_MCI_PDCMODE         (0x1UL << 15) // (MCI) PDC Oriented Mode
#define 	AT91C_MCI_PDCMODE_DISABLE              (0x0UL << 15)    // (MCI) Disables PDC Transfer
#define 	AT91C_MCI_PDCMODE_ENABLE               (0x1UL << 15)    // (MCI) Enables PDC Transfer
#define AT91C_MCI_CLKODD          (0x1UL << 16) // (MCI) CLKODD
#define AT91C_MCI_BLKLEN          (0xFFFFUL << 16)      // (MCI) Data Block Length
// -------- MCI_DTOR : (MCI Offset: 0x8) MCI Data Timeout Register -------- 
#define AT91C_MCI_DTOCYC          (0xFUL <<  0) // (MCI) Data Timeout Cycle Number
#define AT91C_MCI_DTOMUL          (0x7UL <<  4) // (MCI) Data Timeout Multiplier
#define 	AT91C_MCI_DTOMUL_1                    (0x0UL <<  4)     // (MCI) DTOCYC x 1
#define 	AT91C_MCI_DTOMUL_16                   (0x1UL <<  4)     // (MCI) DTOCYC x 16
#define 	AT91C_MCI_DTOMUL_128                  (0x2UL <<  4)     // (MCI) DTOCYC x 128
#define 	AT91C_MCI_DTOMUL_256                  (0x3UL <<  4)     // (MCI) DTOCYC x 256
#define 	AT91C_MCI_DTOMUL_1024                 (0x4UL <<  4)     // (MCI) DTOCYC x 1024
#define 	AT91C_MCI_DTOMUL_4096                 (0x5UL <<  4)     // (MCI) DTOCYC x 4096
#define 	AT91C_MCI_DTOMUL_65536                (0x6UL <<  4)     // (MCI) DTOCYC x 65536
#define 	AT91C_MCI_DTOMUL_1048576              (0x7UL <<  4)     // (MCI) DTOCYC x 1048576
// -------- MCI_SDCR : (MCI Offset: 0xc) MCI SD Card Register -------- 
#define AT91C_MCI_SCDSEL          (0x3UL <<  0) // (MCI) SD Card/SDIO Selector
#define 	AT91C_MCI_SCDSEL_SLOTA                (0x0UL)   // (MCI) Slot A selected
#define 	AT91C_MCI_SCDSEL_SLOTB                (0x1UL)   // (MCI) Slot B selected
#define 	AT91C_MCI_SCDSEL_SLOTC                (0x2UL)   // (MCI) Slot C selected
#define 	AT91C_MCI_SCDSEL_SLOTD                (0x3UL)   // (MCI) Slot D selected
#define AT91C_MCI_SCDBUS          (0x3UL <<  6) // (MCI) SDCard/SDIO Bus Width
#define 	AT91C_MCI_SCDBUS_1BIT                 (0x0UL <<  6)     // (MCI) 1-bit data bus
#define 	AT91C_MCI_SCDBUS_4BITS                (0x2UL <<  6)     // (MCI) 4-bits data bus
#define 	AT91C_MCI_SCDBUS_8BITS                (0x3UL <<  6)     // (MCI) 8-bits data bus
// -------- MCI_CMDR : (MCI Offset: 0x14) MCI Command Register -------- 
#define AT91C_MCI_CMDNB           (0x3FUL <<  0)        // (MCI) Command Number
#define AT91C_MCI_RSPTYP          (0x3UL <<  6) // (MCI) Response Type
#define 	AT91C_MCI_RSPTYP_NO                   (0x0UL <<  6)     // (MCI) No response
#define 	AT91C_MCI_RSPTYP_48                   (0x1UL <<  6)     // (MCI) 48-bit response
#define 	AT91C_MCI_RSPTYP_136                  (0x2UL <<  6)     // (MCI) 136-bit response
#define 	AT91C_MCI_RSPTYP_R1B                  (0x3UL <<  6)     // (MCI) R1b response
#define AT91C_MCI_SPCMD           (0x7UL <<  8) // (MCI) Special CMD
#define 	AT91C_MCI_SPCMD_NONE                 (0x0UL <<  8)      // (MCI) Not a special CMD
#define 	AT91C_MCI_SPCMD_INIT                 (0x1UL <<  8)      // (MCI) Initialization CMD
#define 	AT91C_MCI_SPCMD_SYNC                 (0x2UL <<  8)      // (MCI) Synchronized CMD
#define 	AT91C_MCI_SPCMD_CE_ATA               (0x3UL <<  8)      // (MCI) CE-ATA Completion Signal disable CMD
#define 	AT91C_MCI_SPCMD_IT_CMD               (0x4UL <<  8)      // (MCI) Interrupt command
#define 	AT91C_MCI_SPCMD_IT_REP               (0x5UL <<  8)      // (MCI) Interrupt response
#define AT91C_MCI_OPDCMD          (0x1UL << 11) // (MCI) Open Drain Command
#define 	AT91C_MCI_OPDCMD_PUSHPULL             (0x0UL << 11)     // (MCI) Push/pull command
#define 	AT91C_MCI_OPDCMD_OPENDRAIN            (0x1UL << 11)     // (MCI) Open drain command
#define AT91C_MCI_MAXLAT          (0x1UL << 12) // (MCI) Maximum Latency for Command to respond
#define 	AT91C_MCI_MAXLAT_5                    (0x0UL << 12)     // (MCI) 5 cycles maximum latency
#define 	AT91C_MCI_MAXLAT_64                   (0x1UL << 12)     // (MCI) 64 cycles maximum latency
#define AT91C_MCI_TRCMD           (0x3UL << 16) // (MCI) Transfer CMD
#define 	AT91C_MCI_TRCMD_NO                   (0x0UL << 16)      // (MCI) No transfer
#define 	AT91C_MCI_TRCMD_START                (0x1UL << 16)      // (MCI) Start transfer
#define 	AT91C_MCI_TRCMD_STOP                 (0x2UL << 16)      // (MCI) Stop transfer
#define AT91C_MCI_TRDIR           (0x1UL << 18) // (MCI) Transfer Direction
#define 	AT91C_MCI_TRDIR_WRITE                (0x0UL << 18)      // (MCI) Write
#define 	AT91C_MCI_TRDIR_READ                 (0x1UL << 18)      // (MCI) Read
#define AT91C_MCI_TRTYP           (0x7UL << 19) // (MCI) Transfer Type
#define 	AT91C_MCI_TRTYP_BLOCK                (0x0UL << 19)      // (MCI) MMC/SDCard Single Block Transfer type
#define 	AT91C_MCI_TRTYP_MULTIPLE             (0x1UL << 19)      // (MCI) MMC/SDCard Multiple Block transfer type
#define 	AT91C_MCI_TRTYP_STREAM               (0x2UL << 19)      // (MCI) MMC Stream transfer type
#define 	AT91C_MCI_TRTYP_SDIO_BYTE            (0x4UL << 19)      // (MCI) SDIO Byte transfer type
#define 	AT91C_MCI_TRTYP_SDIO_BLOCK           (0x5UL << 19)      // (MCI) SDIO Block transfer type
#define AT91C_MCI_IOSPCMD         (0x3UL << 24) // (MCI) SDIO Special Command
#define 	AT91C_MCI_IOSPCMD_NONE                 (0x0UL << 24)    // (MCI) NOT a special command
#define 	AT91C_MCI_IOSPCMD_SUSPEND              (0x1UL << 24)    // (MCI) SDIO Suspend Command
#define 	AT91C_MCI_IOSPCMD_RESUME               (0x2UL << 24)    // (MCI) SDIO Resume Command
#define AT91C_MCI_ATACS           (0x1UL << 26) // (MCI) ATA with command completion signal
#define 	AT91C_MCI_ATACS_NORMAL               (0x0UL << 26)      // (MCI) normal operation mode
#define 	AT91C_MCI_ATACS_COMPLETION           (0x1UL << 26)      // (MCI) completion signal is expected within MCI_CSTOR
// -------- MCI_BLKR : (MCI Offset: 0x18) MCI Block Register -------- 
#define AT91C_MCI_BCNT            (0xFFFFUL <<  0)      // (MCI) MMC/SDIO Block Count / SDIO Byte Count
// -------- MCI_CSTOR : (MCI Offset: 0x1c) MCI Completion Signal Timeout Register -------- 
#define AT91C_MCI_CSTOCYC         (0xFUL <<  0) // (MCI) Completion Signal Timeout Cycle Number
#define AT91C_MCI_CSTOMUL         (0x7UL <<  4) // (MCI) Completion Signal Timeout Multiplier
#define 	AT91C_MCI_CSTOMUL_1                    (0x0UL <<  4)    // (MCI) CSTOCYC x 1
#define 	AT91C_MCI_CSTOMUL_16                   (0x1UL <<  4)    // (MCI) CSTOCYC x  16
#define 	AT91C_MCI_CSTOMUL_128                  (0x2UL <<  4)    // (MCI) CSTOCYC x  128
#define 	AT91C_MCI_CSTOMUL_256                  (0x3UL <<  4)    // (MCI) CSTOCYC x  256
#define 	AT91C_MCI_CSTOMUL_1024                 (0x4UL <<  4)    // (MCI) CSTOCYC x  1024
#define 	AT91C_MCI_CSTOMUL_4096                 (0x5UL <<  4)    // (MCI) CSTOCYC x  4096
#define 	AT91C_MCI_CSTOMUL_65536                (0x6UL <<  4)    // (MCI) CSTOCYC x  65536
#define 	AT91C_MCI_CSTOMUL_1048576              (0x7UL <<  4)    // (MCI) CSTOCYC x  1048576
// -------- MCI_SR : (MCI Offset: 0x40) MCI Status Register -------- 
#define AT91C_MCI_CMDRDY          (0x1UL <<  0) // (MCI) Command Ready flag
#define AT91C_MCI_RXRDY           (0x1UL <<  1) // (MCI) RX Ready flag
#define AT91C_MCI_TXRDY           (0x1UL <<  2) // (MCI) TX Ready flag
#define AT91C_MCI_BLKE            (0x1UL <<  3) // (MCI) Data Block Transfer Ended flag
#define AT91C_MCI_DTIP            (0x1UL <<  4) // (MCI) Data Transfer in Progress flag
#define AT91C_MCI_NOTBUSY         (0x1UL <<  5) // (MCI) Data Line Not Busy flag
#define AT91C_MCI_ENDRX           (0x1UL <<  6) // (MCI) End of RX Buffer flag
#define AT91C_MCI_ENDTX           (0x1UL <<  7) // (MCI) End of TX Buffer flag
#define AT91C_MCI_SDIOIRQA        (0x1UL <<  8) // (MCI) SDIO Interrupt for Slot A
#define AT91C_MCI_SDIOIRQB        (0x1UL <<  9) // (MCI) SDIO Interrupt for Slot B
#define AT91C_MCI_SDIOIRQC        (0x1UL << 10) // (MCI) SDIO Interrupt for Slot C
#define AT91C_MCI_SDIOIRQD        (0x1UL << 11) // (MCI) SDIO Interrupt for Slot D
#define AT91C_MCI_SDIOWAIT        (0x1UL << 12) // (MCI) SDIO Read Wait operation flag
#define AT91C_MCI_CSRCV           (0x1UL << 13) // (MCI) CE-ATA Completion Signal flag
#define AT91C_MCI_RXBUFF          (0x1UL << 14) // (MCI) RX Buffer Full flag
#define AT91C_MCI_TXBUFE          (0x1UL << 15) // (MCI) TX Buffer Empty flag
#define AT91C_MCI_RINDE           (0x1UL << 16) // (MCI) Response Index Error flag
#define AT91C_MCI_RDIRE           (0x1UL << 17) // (MCI) Response Direction Error flag
#define AT91C_MCI_RCRCE           (0x1UL << 18) // (MCI) Response CRC Error flag
#define AT91C_MCI_RENDE           (0x1UL << 19) // (MCI) Response End Bit Error flag
#define AT91C_MCI_RTOE            (0x1UL << 20) // (MCI) Response Time-out Error flag
#define AT91C_MCI_DCRCE           (0x1UL << 21) // (MCI) data CRC Error flag
#define AT91C_MCI_DTOE            (0x1UL << 22) // (MCI) Data timeout Error flag
#define AT91C_MCI_CSTOE           (0x1UL << 23) // (MCI) Completion Signal timeout Error flag
#define AT91C_MCI_BLKOVRE         (0x1UL << 24) // (MCI) DMA Block Overrun Error flag
#define AT91C_MCI_DMADONE         (0x1UL << 25) // (MCI) DMA Transfer Done flag
#define AT91C_MCI_FIFOEMPTY       (0x1UL << 26) // (MCI) FIFO Empty flag
#define AT91C_MCI_XFRDONE         (0x1UL << 27) // (MCI) Transfer Done flag
#define AT91C_MCI_OVRE            (0x1UL << 30) // (MCI) Overrun flag
#define AT91C_MCI_UNRE            (0x1UL << 31) // (MCI) Underrun flag
// -------- MCI_IER : (MCI Offset: 0x44) MCI Interrupt Enable Register -------- 
// -------- MCI_IDR : (MCI Offset: 0x48) MCI Interrupt Disable Register -------- 
// -------- MCI_IMR : (MCI Offset: 0x4c) MCI Interrupt Mask Register -------- 
// -------- MCI_DMA : (MCI Offset: 0x50) MCI DMA Configuration Register -------- 
#define AT91C_MCI_OFFSET          (0x3UL <<  0) // (MCI) DMA Write Buffer Offset
#define AT91C_MCI_CHKSIZE         (0x7UL <<  4) // (MCI) DMA Channel Read/Write Chunk Size
#define 	AT91C_MCI_CHKSIZE_1                    (0x0UL <<  4)    // (MCI) Number of data transferred is 1
#define 	AT91C_MCI_CHKSIZE_4                    (0x1UL <<  4)    // (MCI) Number of data transferred is 4
#define 	AT91C_MCI_CHKSIZE_8                    (0x2UL <<  4)    // (MCI) Number of data transferred is 8
#define 	AT91C_MCI_CHKSIZE_16                   (0x3UL <<  4)    // (MCI) Number of data transferred is 16
#define 	AT91C_MCI_CHKSIZE_32                   (0x4UL <<  4)    // (MCI) Number of data transferred is 32
#define AT91C_MCI_DMAEN           (0x1UL <<  8) // (MCI) DMA Hardware Handshaking Enable
#define 	AT91C_MCI_DMAEN_DISABLE              (0x0UL <<  8)      // (MCI) DMA interface is disabled
#define 	AT91C_MCI_DMAEN_ENABLE               (0x1UL <<  8)      // (MCI) DMA interface is enabled
// -------- MCI_CFG : (MCI Offset: 0x54) MCI Configuration Register -------- 
#define AT91C_MCI_FIFOMODE        (0x1UL <<  0) // (MCI) MCI Internal FIFO Control Mode
#define 	AT91C_MCI_FIFOMODE_AMOUNTDATA           (0x0UL) // (MCI) A write transfer starts when a sufficient amount of datas is written into the FIFO
#define 	AT91C_MCI_FIFOMODE_ONEDATA              (0x1UL) // (MCI) A write transfer starts as soon as one data is written into the FIFO
#define AT91C_MCI_FERRCTRL        (0x1UL <<  4) // (MCI) Flow Error Flag Reset Control Mode
#define 	AT91C_MCI_FERRCTRL_RWCMD                (0x0UL <<  4)   // (MCI) When an underflow/overflow condition flag is set, a new Write/Read command is needed to reset the flag
#define 	AT91C_MCI_FERRCTRL_READSR               (0x1UL <<  4)   // (MCI) When an underflow/overflow condition flag is set, a read status resets the flag
#define AT91C_MCI_HSMODE          (0x1UL <<  8) // (MCI) High Speed Mode
#define 	AT91C_MCI_HSMODE_DISABLE              (0x0UL <<  8)     // (MCI) Default Bus Timing Mode
#define 	AT91C_MCI_HSMODE_ENABLE               (0x1UL <<  8)     // (MCI) High Speed Mode
#define AT91C_MCI_LSYNC           (0x1UL << 12) // (MCI) Synchronize on last block
#define 	AT91C_MCI_LSYNC_CURRENT              (0x0UL << 12)      // (MCI) Pending command sent at end of current data block
#define 	AT91C_MCI_LSYNC_INFINITE             (0x1UL << 12)      // (MCI) Pending command sent at end of block transfer when transfer length is not infinite
// -------- MCI_WPCR : (MCI Offset: 0xe4) Write Protection Control Register -------- 
#define AT91C_MCI_WP_EN           (0x1UL <<  0) // (MCI) Write Protection Enable
#define 	AT91C_MCI_WP_EN_DISABLE              (0x0UL)    // (MCI) Write Operation is disabled (if WP_KEY corresponds)
#define 	AT91C_MCI_WP_EN_ENABLE               (0x1UL)    // (MCI) Write Operation is enabled (if WP_KEY corresponds)
#define AT91C_MCI_WP_KEY          (0xFFFFFFUL <<  8)    // (MCI) Write Protection Key
// -------- MCI_WPSR : (MCI Offset: 0xe8) Write Protection Status Register -------- 
#define AT91C_MCI_WP_VS           (0xFUL <<  0) // (MCI) Write Protection Violation Status
#define 	AT91C_MCI_WP_VS_NO_VIOLATION         (0x0UL)    // (MCI) No Write Protection Violation detected since last read
#define 	AT91C_MCI_WP_VS_ON_WRITE             (0x1UL)    // (MCI) Write Protection Violation detected since last read
#define 	AT91C_MCI_WP_VS_ON_RESET             (0x2UL)    // (MCI) Software Reset Violation detected since last read
#define 	AT91C_MCI_WP_VS_ON_BOTH              (0x3UL)    // (MCI) Write Protection and Software Reset Violation detected since last read
#define AT91C_MCI_WP_VSRC         (0xFUL <<  8) // (MCI) Write Protection Violation Source
#define 	AT91C_MCI_WP_VSRC_NO_VIOLATION         (0x0UL <<  8)    // (MCI) No Write Protection Violation detected since last read
#define 	AT91C_MCI_WP_VSRC_MCI_MR               (0x1UL <<  8)    // (MCI) Write Protection Violation detected on MCI_MR since last read
#define 	AT91C_MCI_WP_VSRC_MCI_DTOR             (0x2UL <<  8)    // (MCI) Write Protection Violation detected on MCI_DTOR since last read
#define 	AT91C_MCI_WP_VSRC_MCI_SDCR             (0x3UL <<  8)    // (MCI) Write Protection Violation detected on MCI_SDCR since last read
#define 	AT91C_MCI_WP_VSRC_MCI_CSTOR            (0x4UL <<  8)    // (MCI) Write Protection Violation detected on MCI_CSTOR since last read
#define 	AT91C_MCI_WP_VSRC_MCI_DMA              (0x5UL <<  8)    // (MCI) Write Protection Violation detected on MCI_DMA since last read
#define 	AT91C_MCI_WP_VSRC_MCI_CFG              (0x6UL <<  8)    // (MCI) Write Protection Violation detected on MCI_CFG since last read
#define 	AT91C_MCI_WP_VSRC_MCI_DEL              (0x7UL <<  8)    // (MCI) Write Protection Violation detected on MCI_DEL since last read
// -------- MCI_VER : (MCI Offset: 0xfc)  VERSION  Register -------- 
#define AT91C_MCI_VER             (0xFUL <<  0) // (MCI)  VERSION  Register

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR HDMA controller
// *****************************************************************************
// *** Register offset in AT91S_HDMA structure ***
#define HDMA_GCFG       ( 0)    // HDMA Global Configuration Register
#define HDMA_EN         ( 4)    // HDMA Controller Enable Register
#define HDMA_SREQ       ( 8)    // HDMA Software Single Request Register
#define HDMA_CREQ       (12)    // HDMA Software Chunk Transfer Request Register
#define HDMA_LAST       (16)    // HDMA Software Last Transfer Flag Register
#define HDMA_SYNC       (20)    // HDMA Request Synchronization Register
#define HDMA_EBCIER     (24)    // HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register
#define HDMA_EBCIDR     (28)    // HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register
#define HDMA_EBCIMR     (32)    // HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register
#define HDMA_EBCISR     (36)    // HDMA Error, Chained Buffer transfer completed and Buffer transfer completed Status Register
#define HDMA_CHER       (40)    // HDMA Channel Handler Enable Register
#define HDMA_CHDR       (44)    // HDMA Channel Handler Disable Register
#define HDMA_CHSR       (48)    // HDMA Channel Handler Status Register
#define HDMA_RSVD0      (52)    // HDMA Reserved
#define HDMA_RSVD1      (56)    // HDMA Reserved
#define HDMA_CH         (60)    // HDMA Channel structure
#define HDMA_ADDRSIZE   (492)   // HDMA ADDRSIZE REGISTER
#define HDMA_IPNAME1    (496)   // HDMA IPNAME1 REGISTER
#define HDMA_IPNAME2    (500)   // HDMA IPNAME2 REGISTER
#define HDMA_FEATURES   (504)   // HDMA FEATURES REGISTER
#define HDMA_VER        (508)   // HDMA VERSION REGISTER
#define AT91C_HDMA_SRC_DSCR       (0x1UL << 16) // (HDMA_CH) Source Buffer Descriptor Fetch operation
#define 	AT91C_HDMA_SRC_DSCR_FETCH_FROM_MEM       (0x0UL << 16)  // (HDMA_CH) Source address is updated when the descriptor is fetched from the memory.
#define 	AT91C_HDMA_SRC_DSCR_FETCH_DISABLE        (0x1UL << 16)  // (HDMA_CH) Buffer Descriptor Fetch operation is disabled for the Source.
#define AT91C_HDMA_DST_DSCR       (0x1UL << 20) // (HDMA_CH) Destination Buffer Descriptor operation
#define 	AT91C_HDMA_DST_DSCR_FETCH_FROM_MEM       (0x0UL << 20)  // (HDMA_CH) Destination address is updated when the descriptor is fetched from the memory.
#define 	AT91C_HDMA_DST_DSCR_FETCH_DISABLE        (0x1UL << 20)  // (HDMA_CH) Buffer Descriptor Fetch operation is disabled for the destination.
// -------- HDMA_EN : (HDMA Offset: 0x4)  -------- 
#define AT91C_HDMA_ENABLE         (0x1UL <<  0) // (HDMA)
#define 	AT91C_HDMA_ENABLE_DISABLE              (0x0UL)  // (HDMA) Disables HDMA.
#define 	AT91C_HDMA_ENABLE_ENABLE               (0x1UL)  // (HDMA) Enables HDMA.
// -------- HDMA_CTRLA : (HDMA_CH Offset: 0xc)  -------- 
#define AT91C_HDMA_BTSIZE         (0xFFFFUL <<  0)      // (HDMA_CH) Buffer Transfer Size.
#define AT91C_HDMA_SCSIZE         (0x7UL << 16) // (HDMA_CH) Source Chunk Transfer Size.
#define 	AT91C_HDMA_SCSIZE_1                    (0x0UL << 16)    // (HDMA_CH) 1.
#define 	AT91C_HDMA_SCSIZE_4                    (0x1UL << 16)    // (HDMA_CH) 4.
#define 	AT91C_HDMA_SCSIZE_8                    (0x2UL << 16)    // (HDMA_CH) 8.
#define 	AT91C_HDMA_SCSIZE_16                   (0x3UL << 16)    // (HDMA_CH) 16.
#define 	AT91C_HDMA_SCSIZE_32                   (0x4UL << 16)    // (HDMA_CH) 32.
#define 	AT91C_HDMA_SCSIZE_64                   (0x5UL << 16)    // (HDMA_CH) 64.
#define 	AT91C_HDMA_SCSIZE_128                  (0x6UL << 16)    // (HDMA_CH) 128.
#define 	AT91C_HDMA_SCSIZE_256                  (0x7UL << 16)    // (HDMA_CH) 256.
#define AT91C_HDMA_DCSIZE         (0x7UL << 20) // (HDMA_CH) Destination Chunk Transfer Size
#define 	AT91C_HDMA_DCSIZE_1                    (0x0UL << 20)    // (HDMA_CH) 1.
#define 	AT91C_HDMA_DCSIZE_4                    (0x1UL << 20)    // (HDMA_CH) 4.
#define 	AT91C_HDMA_DCSIZE_8                    (0x2UL << 20)    // (HDMA_CH) 8.
#define 	AT91C_HDMA_DCSIZE_16                   (0x3UL << 20)    // (HDMA_CH) 16.
#define 	AT91C_HDMA_DCSIZE_32                   (0x4UL << 20)    // (HDMA_CH) 32.
#define 	AT91C_HDMA_DCSIZE_64                   (0x5UL << 20)    // (HDMA_CH) 64.
#define 	AT91C_HDMA_DCSIZE_128                  (0x6UL << 20)    // (HDMA_CH) 128.
#define 	AT91C_HDMA_DCSIZE_256                  (0x7UL << 20)    // (HDMA_CH) 256.
#define AT91C_HDMA_SRC_WIDTH      (0x3UL << 24) // (HDMA_CH) Source Single Transfer Size
#define 	AT91C_HDMA_SRC_WIDTH_BYTE                 (0x0UL << 24) // (HDMA_CH) BYTE.
#define 	AT91C_HDMA_SRC_WIDTH_HALFWORD             (0x1UL << 24) // (HDMA_CH) HALF-WORD.
#define 	AT91C_HDMA_SRC_WIDTH_WORD                 (0x2UL << 24) // (HDMA_CH) WORD.
#define AT91C_HDMA_DST_WIDTH      (0x3UL << 28) // (HDMA_CH) Destination Single Transfer Size
#define 	AT91C_HDMA_DST_WIDTH_BYTE                 (0x0UL << 28) // (HDMA_CH) BYTE.
#define 	AT91C_HDMA_DST_WIDTH_HALFWORD             (0x1UL << 28) // (HDMA_CH) HALF-WORD.
#define 	AT91C_HDMA_DST_WIDTH_WORD                 (0x2UL << 28) // (HDMA_CH) WORD.
#define AT91C_HDMA_DONE           (0x1UL << 31) // (HDMA_CH)
// -------- HDMA_CTRLB : (HDMA_CH Offset: 0x10)  -------- 
#define AT91C_HDMA_SIF            (0x3UL <<  0) // (HDMA_CH) Source Interface Selection Field.
#define 	AT91C_HDMA_SIF_0                    (0x0UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 0.
#define 	AT91C_HDMA_SIF_1                    (0x1UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 1.
#define 	AT91C_HDMA_SIF_2                    (0x2UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 2.
#define 	AT91C_HDMA_SIF_3                    (0x3UL)     // (HDMA_CH) The Source Transfer is done via AHB-Lite Interface 3.
#define AT91C_HDMA_DIF            (0x3UL <<  4) // (HDMA_CH) Destination Interface Selection Field.
#define 	AT91C_HDMA_DIF_0                    (0x0UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 0.
#define 	AT91C_HDMA_DIF_1                    (0x1UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 1.
#define 	AT91C_HDMA_DIF_2                    (0x2UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 2.
#define 	AT91C_HDMA_DIF_3                    (0x3UL <<  4)       // (HDMA_CH) The Destination Transfer is done via AHB-Lite Interface 3.
#define AT91C_HDMA_SRC_PIP        (0x1UL <<  8) // (HDMA_CH) Source Picture-in-Picture Mode
#define 	AT91C_HDMA_SRC_PIP_DISABLE              (0x0UL <<  8)   // (HDMA_CH) Source Picture-in-Picture mode is disabled.
#define 	AT91C_HDMA_SRC_PIP_ENABLE               (0x1UL <<  8)   // (HDMA_CH) Source Picture-in-Picture mode is enabled.
#define AT91C_HDMA_DST_PIP        (0x1UL << 12) // (HDMA_CH) Destination Picture-in-Picture Mode
#define 	AT91C_HDMA_DST_PIP_DISABLE              (0x0UL << 12)   // (HDMA_CH) Destination Picture-in-Picture mode is disabled.
#define 	AT91C_HDMA_DST_PIP_ENABLE               (0x1UL << 12)   // (HDMA_CH) Destination Picture-in-Picture mode is enabled.
#define AT91C_HDMA_SRC_DSCR       (0x1UL << 16) // (HDMA_CH) Source Buffer Descriptor Fetch operation
#define 	AT91C_HDMA_SRC_DSCR_FETCH_FROM_MEM       (0x0UL << 16)  // (HDMA_CH) Source address is updated when the descriptor is fetched from the memory.
#define 	AT91C_HDMA_SRC_DSCR_FETCH_DISABLE        (0x1UL << 16)  // (HDMA_CH) Buffer Descriptor Fetch operation is disabled for the Source.
#define AT91C_HDMA_DST_DSCR       (0x1UL << 20) // (HDMA_CH) Destination Buffer Descriptor operation
#define 	AT91C_HDMA_DST_DSCR_FETCH_FROM_MEM       (0x0UL << 20)  // (HDMA_CH) Destination address is updated when the descriptor is fetched from the memory.
#define 	AT91C_HDMA_DST_DSCR_FETCH_DISABLE        (0x1UL << 20)  // (HDMA_CH) Buffer Descriptor Fetch operation is disabled for the destination.
#define AT91C_HDMA_FC             (0x7UL << 21) // (HDMA_CH) This field defines which devices controls the size of the buffer transfer, also referred as to the Flow Controller.
#define 	AT91C_HDMA_FC_MEM2MEM              (0x0UL << 21)        // (HDMA_CH) Memory-to-Memory (DMA Controller).
#define 	AT91C_HDMA_FC_MEM2PER              (0x1UL << 21)        // (HDMA_CH) Memory-to-Peripheral (DMA Controller).
#define 	AT91C_HDMA_FC_PER2MEM              (0x2UL << 21)        // (HDMA_CH) Peripheral-to-Memory (DMA Controller).
#define 	AT91C_HDMA_FC_PER2PER              (0x3UL << 21)        // (HDMA_CH) Peripheral-to-Peripheral (DMA Controller).
#define 	AT91C_HDMA_FC_PER2MEM_PER          (0x4UL << 21)        // (HDMA_CH) Peripheral-to-Memory (Peripheral).
#define 	AT91C_HDMA_FC_MEM2PER_PER          (0x5UL << 21)        // (HDMA_CH) Memory-to-Peripheral (Peripheral).
#define 	AT91C_HDMA_FC_PER2PER_PER          (0x6UL << 21)        // (HDMA_CH) Peripheral-to-Peripheral (Source Peripheral).
#define AT91C_HDMA_SRC_ADDRESS_MODE (0x3UL << 24)       // (HDMA_CH) Type of addressing mode
#define 	AT91C_HDMA_SRC_ADDRESS_MODE_INCR                 (0x0UL << 24)  // (HDMA_CH) Incrementing Mode.
#define 	AT91C_HDMA_SRC_ADDRESS_MODE_DECR                 (0x1UL << 24)  // (HDMA_CH) Decrementing Mode.
#define 	AT91C_HDMA_SRC_ADDRESS_MODE_FIXED                (0x2UL << 24)  // (HDMA_CH) Fixed Mode.
#define AT91C_HDMA_DST_ADDRESS_MODE (0x3UL << 28)       // (HDMA_CH) Type of addressing mode
#define 	AT91C_HDMA_DST_ADDRESS_MODE_INCR                 (0x0UL << 28)  // (HDMA_CH) Incrementing Mode.
#define 	AT91C_HDMA_DST_ADDRESS_MODE_DECR                 (0x1UL << 28)  // (HDMA_CH) Decrementing Mode.
#define 	AT91C_HDMA_DST_ADDRESS_MODE_FIXED                (0x2UL << 28)  // (HDMA_CH) Fixed Mode.
#define AT91C_HDMA_AUTO           (0x1UL << 31) // (HDMA_CH) Automatic multiple buffer transfer enable
#define 	AT91C_HDMA_AUTO_DISABLE              (0x0UL << 31)      // (HDMA_CH) Automatic multiple buffer transfer is disabled.
#define 	AT91C_HDMA_AUTO_ENABLE               (0x1UL << 31)      // (HDMA_CH) Automatic multiple buffer transfer is enabled. This enables replay mode or contiguous mode when several buffers are transferred.
// -------- HDMA_CFG : (HDMA_CH Offset: 0x14)  -------- 
#define AT91C_HDMA_SRC_PER        (0xFUL <<  0) // (HDMA_CH) Channel Source Request is associated with peripheral identifier coded SRC_PER handshaking interface.
#define 	AT91C_HDMA_SRC_PER_0                    (0x0UL) // (HDMA_CH) HW Handshaking Interface number 0.
#define 	AT91C_HDMA_SRC_PER_1                    (0x1UL) // (HDMA_CH) HW Handshaking Interface number 1.
#define 	AT91C_HDMA_SRC_PER_2                    (0x2UL) // (HDMA_CH) HW Handshaking Interface number 2.
#define 	AT91C_HDMA_SRC_PER_3                    (0x3UL) // (HDMA_CH) HW Handshaking Interface number 3.
#define 	AT91C_HDMA_SRC_PER_4                    (0x4UL) // (HDMA_CH) HW Handshaking Interface number 4.
#define 	AT91C_HDMA_SRC_PER_5                    (0x5UL) // (HDMA_CH) HW Handshaking Interface number 5.
#define 	AT91C_HDMA_SRC_PER_6                    (0x6UL) // (HDMA_CH) HW Handshaking Interface number 6.
#define 	AT91C_HDMA_SRC_PER_7                    (0x7UL) // (HDMA_CH) HW Handshaking Interface number 7.
#define 	AT91C_HDMA_SRC_PER_8                    (0x8UL) // (HDMA_CH) HW Handshaking Interface number 8.
#define 	AT91C_HDMA_SRC_PER_9                    (0x9UL) // (HDMA_CH) HW Handshaking Interface number 9.
#define 	AT91C_HDMA_SRC_PER_10                   (0xAUL) // (HDMA_CH) HW Handshaking Interface number 10.
#define 	AT91C_HDMA_SRC_PER_11                   (0xBUL) // (HDMA_CH) HW Handshaking Interface number 11.
#define 	AT91C_HDMA_SRC_PER_12                   (0xCUL) // (HDMA_CH) HW Handshaking Interface number 12.
#define 	AT91C_HDMA_SRC_PER_13                   (0xDUL) // (HDMA_CH) HW Handshaking Interface number 13.
#define 	AT91C_HDMA_SRC_PER_14                   (0xEUL) // (HDMA_CH) HW Handshaking Interface number 14.
#define 	AT91C_HDMA_SRC_PER_15                   (0xFUL) // (HDMA_CH) HW Handshaking Interface number 15.
#define AT91C_HDMA_DST_PER        (0xFUL <<  4) // (HDMA_CH) Channel Destination Request is associated with peripheral identifier coded DST_PER handshaking interface.
#define 	AT91C_HDMA_DST_PER_0                    (0x0UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 0.
#define 	AT91C_HDMA_DST_PER_1                    (0x1UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 1.
#define 	AT91C_HDMA_DST_PER_2                    (0x2UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 2.
#define 	AT91C_HDMA_DST_PER_3                    (0x3UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 3.
#define 	AT91C_HDMA_DST_PER_4                    (0x4UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 4.
#define 	AT91C_HDMA_DST_PER_5                    (0x5UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 5.
#define 	AT91C_HDMA_DST_PER_6                    (0x6UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 6.
#define 	AT91C_HDMA_DST_PER_7                    (0x7UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 7.
#define 	AT91C_HDMA_DST_PER_8                    (0x8UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 8.
#define 	AT91C_HDMA_DST_PER_9                    (0x9UL <<  4)   // (HDMA_CH) HW Handshaking Interface number 9.
#define 	AT91C_HDMA_DST_PER_10                   (0xAUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 10.
#define 	AT91C_HDMA_DST_PER_11                   (0xBUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 11.
#define 	AT91C_HDMA_DST_PER_12                   (0xCUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 12.
#define 	AT91C_HDMA_DST_PER_13                   (0xDUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 13.
#define 	AT91C_HDMA_DST_PER_14                   (0xEUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 14.
#define 	AT91C_HDMA_DST_PER_15                   (0xFUL <<  4)   // (HDMA_CH) HW Handshaking Interface number 15.
#define AT91C_HDMA_SRC_REP        (0x1UL <<  8) // (HDMA_CH) Source Replay Mode
#define 	AT91C_HDMA_SRC_REP_CONTIGUOUS_ADDR      (0x0UL <<  8)   // (HDMA_CH) When automatic mode is activated, source address is contiguous between two buffers.
#define 	AT91C_HDMA_SRC_REP_RELOAD_ADDR          (0x1UL <<  8)   // (HDMA_CH) When automatic mode is activated, the source address and the control register are reloaded from previous transfer..
#define AT91C_HDMA_SRC_H2SEL      (0x1UL <<  9) // (HDMA_CH) Source Handshaking Mode
#define 	AT91C_HDMA_SRC_H2SEL_SW                   (0x0UL <<  9) // (HDMA_CH) Software handshaking interface is used to trigger a transfer request.
#define 	AT91C_HDMA_SRC_H2SEL_HW                   (0x1UL <<  9) // (HDMA_CH) Hardware handshaking interface is used to trigger a transfer request.
#define AT91C_HDMA_DST_REP        (0x1UL << 12) // (HDMA_CH) Destination Replay Mode
#define 	AT91C_HDMA_DST_REP_CONTIGUOUS_ADDR      (0x0UL << 12)   // (HDMA_CH) When automatic mode is activated, destination address is contiguous between two buffers.
#define 	AT91C_HDMA_DST_REP_RELOAD_ADDR          (0x1UL << 12)   // (HDMA_CH) When automatic mode is activated, the destination address and the control register are reloaded from previous transfer..
#define AT91C_HDMA_DST_H2SEL      (0x1UL << 13) // (HDMA_CH) Destination Handshaking Mode
#define 	AT91C_HDMA_DST_H2SEL_SW                   (0x0UL << 13) // (HDMA_CH) Software handshaking interface is used to trigger a transfer request.
#define 	AT91C_HDMA_DST_H2SEL_HW                   (0x1UL << 13) // (HDMA_CH) Hardware handshaking interface is used to trigger a transfer request.
#define AT91C_HDMA_SOD            (0x1UL << 16) // (HDMA_CH) STOP ON DONE
#define 	AT91C_HDMA_SOD_DISABLE              (0x0UL << 16)       // (HDMA_CH) STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
#define 	AT91C_HDMA_SOD_ENABLE               (0x1UL << 16)       // (HDMA_CH) STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
#define AT91C_HDMA_LOCK_IF        (0x1UL << 20) // (HDMA_CH) Interface Lock
#define 	AT91C_HDMA_LOCK_IF_DISABLE              (0x0UL << 20)   // (HDMA_CH) Interface Lock capability is disabled.
#define 	AT91C_HDMA_LOCK_IF_ENABLE               (0x1UL << 20)   // (HDMA_CH) Interface Lock capability is enabled.
#define AT91C_HDMA_LOCK_B         (0x1UL << 21) // (HDMA_CH) AHB Bus Lock
#define 	AT91C_HDMA_LOCK_B_DISABLE              (0x0UL << 21)    // (HDMA_CH) AHB Bus Locking capability is disabled.
#define 	AT91C_HDMA_LOCK_B_ENABLE               (0x1UL << 21)    // (HDMA_CH) AHB Bus Locking capability is enabled.
#define AT91C_HDMA_LOCK_IF_L      (0x1UL << 22) // (HDMA_CH) Master Interface Arbiter Lock
#define 	AT91C_HDMA_LOCK_IF_L_CHUNK                (0x0UL << 22) // (HDMA_CH) The Master Interface Arbiter is locked by the channel x for a chunk transfer.
#define 	AT91C_HDMA_LOCK_IF_L_BUFFER               (0x1UL << 22) // (HDMA_CH) The Master Interface Arbiter is locked by the channel x for a buffer transfer.
#define AT91C_HDMA_AHB_PROT       (0x7UL << 24) // (HDMA_CH) AHB Prot
#define AT91C_HDMA_FIFOCFG        (0x3UL << 28) // (HDMA_CH) FIFO Request Configuration
#define 	AT91C_HDMA_FIFOCFG_LARGESTBURST         (0x0UL << 28)   // (HDMA_CH) The largest defined length AHB burst is performed on the destination AHB interface.
#define 	AT91C_HDMA_FIFOCFG_HALFFIFO             (0x1UL << 28)   // (HDMA_CH) When half fifo size is available/filled a source/destination request is serviced.
#define 	AT91C_HDMA_FIFOCFG_ENOUGHSPACE          (0x2UL << 28)   // (HDMA_CH) When there is enough space/data available to perfom a single AHB access then the request is serviced.
// -------- HDMA_EBCIER : (HDMA Offset: 0x18) Buffer Transfer Completed/Chained Buffer Transfer Completed/Access Error Interrupt Enable Register -------- 
#define AT91C_HDMA_BTC0           (0x1UL <<  0) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_BTC1           (0x1UL <<  1) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_BTC2           (0x1UL <<  2) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_BTC3           (0x1UL <<  3) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_BTC4           (0x1UL <<  4) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_BTC5           (0x1UL <<  5) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_BTC6           (0x1UL <<  6) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_BTC7           (0x1UL <<  7) // (HDMA) Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC0          (0x1UL <<  8) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC1          (0x1UL <<  9) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC2          (0x1UL << 10) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC3          (0x1UL << 11) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC4          (0x1UL << 12) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC5          (0x1UL << 13) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC6          (0x1UL << 14) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_CBTC7          (0x1UL << 15) // (HDMA) Chained Buffer Transfer Completed Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR0           (0x1UL << 16) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR1           (0x1UL << 17) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR2           (0x1UL << 18) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR3           (0x1UL << 19) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR4           (0x1UL << 20) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR5           (0x1UL << 21) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR6           (0x1UL << 22) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register
#define AT91C_HDMA_ERR7           (0x1UL << 23) // (HDMA) Access HDMA_Error Interrupt Enable/Disable/Status Register


#define CHIP_DMA_CHANNEL_NUM   		8
#define BOARD_MCI_DMA_CHANNEL       	0

#define BOARD_SD_DMA_HW_SRC_REQ_ID      0
#define BOARD_SD_DMA_HW_DEST_REQ_ID     (0x0 <<  4)

#define CHIP_SRAM0_BASEADDR 0x300000

#define BOARD_SD_MCI_BASE 	AT91C_BASE_MCI0
#define BOARD_SD_MCI_ID		AT91C_ID_MCI0
#define BOARD_SD_SLOT		MCI_SD_SLOTA
#define BOARD_SD_MCI_ID_USE	0
#define MCI2_INTERFACE

#endif /* __AT91SAMA5_INC_H__ */
