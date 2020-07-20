#ifndef __SPI_H
#define __SPI_H

#include <stdint.h>

//Pin definitions
#define BIDIMODE 15
#define BIDIOE 14
#define CRXEN 13
#define CRCNEXT 12
#define DFF 11
#define RXONLY 10
#define SSM 9
#define SSI 8
#define LSBFIRST 7
#define SPE 6
#define BR2 5
#define BR1 4
#define BRO 3
#define MSTR 2
#define CPOL 1
#define CPHA 0

#define TXEIE 7
#define RXNEIE 6
#define ERRIE 5
#define SSOE 2
#define TXDMAEN 1
#define RXDMAEN 0

#define BSY 7
#define OVR 6
#define MODF 5
#define CRCERR 4
#define UDR 3
#define CHSIDE  2
#define TXE 1
#define RXNE 0

// Registers
uint32_t *SPI_CR1;
uint32_t *SPI_CR2;
uint32_t *SPI_SR;
uint32_t *SPI_DR;
uint32_t *SPI_CRCP;
uint32_t *SPI_RXCRCR;
uint32_t *SPI_TXCRCR;
uint32_t *SPI_TXCRCR;

void initSPI(void);
void disableSPI();
void enableSPI();



#endif
