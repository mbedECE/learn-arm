#include <stdint.h>
#include "../include/spi.h"

// Serial Peripheral Interface
uint32_t *SPI_CR1 =(uint32_t*)0x40013000;
uint32_t *SPI_CR2 =(uint32_t*)0x40013004;
uint32_t *SPI_SR =(uint32_t*)0x40013008;
uint32_t *SPI_DR =(uint32_t*)0x4001300C;
uint32_t *SPI_CRCP =(uint32_t*)0x40013010;
uint32_t *SPI_RXCRCR =(uint32_t*)0x40013014;
uint32_t *SPI_TXCRCR =(uint32_t*)0x40013018;

void initSPI(void)
{
	
}

void disableSPI()
{

}

void enableSPI()
{


}


