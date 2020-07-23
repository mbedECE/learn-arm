#include <stdint.h>
#include "../include/spi.h"

// Serial Peripheral Interface
uint32_t *SPI1_CR1 =(uint32_t*)0x40013000;
uint32_t *SPI1_CR2 =(uint32_t*)0x40013004;
uint32_t *SPI1_SR =(uint32_t*)0x40013008;
uint32_t *SPI1_DR =(uint32_t*)0x4001300C;
uint32_t *SPI1_CRCPR =(uint32_t*)0x40013010;
uint32_t *SPI1_RXCRCR =(uint32_t*)0x40013014;
uint32_t *SPI1_TXCRCR =(uint32_t*)0x40013018;

uint32_t *SPI2_CR1 =(uint32_t*)0x40003800;
uint32_t *SPI2_CR2 =(uint32_t*)0x40003804;
uint32_t *SPI2_SR =(uint32_t*)0x40003808;
uint32_t *SPI2_DR =(uint32_t*)0x4000380C;
uint32_t *SPI2_CRCPR =(uint32_t*)0x40003810;
uint32_t *SPI2_RXCRCR =(uint32_t*)0x40003814;
uint32_t *SPI2_TXCRCR =(uint32_t*)0x40003818;

void enableSpiClk(void)
{
	enablePeripheralClock(RCC_APB2ENR_SPI1EN);
}

void enableSPI(uint32_t module)
{
	if(module == 0)
	{
		*SPI1_CR1 |= (1 << SPI_CR1_SPE);
	}
	else
	{
		*SPI2_CR1 |= (1 << SPI_CR1_SPE);	
	}	
}

void disableSPI(uint32_t module)
{
	if(module == 0)
	{
		while(!(*SPI1_SR & (1 << SPI_SR_TXE)));
		while(*SPI1_SR & (1 << SPI_SR_BSY));
		*SPI1_CR1 &= ~(1 << SPI_CR1_SPE);
	}
	else
	{
		while(!(*SPI2_SR & (1 << SPI_SR_TXE)));
		while(*SPI2_SR & (1 << SPI_SR_BSY));
		*SPI2_CR1 &= ~(1 << SPI_CR1_SPE);	
	}
}

uint16_t spiTransfer(uint16_t module, uint16_t data)
{
	uint16_t rx_data = 0;

	if(module == 0)
	{
		*SPI1_DR = data;
		
		while(!getRXNE(module));
		
		rx_data = *SPI1_DR;
	}	
	else
	{
		*SPI2_DR = data;
		
		while(!getRXNE(module));
		
		rx_data = *SPI2_DR;
	}	
	
	return rx_data;
}

void setBIDIMODE(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_BIDIMODE);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_BIDIMODE);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_BIDIMODE);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_BIDIMODE);	
	}	
}

void setBIDIOE(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_BIDIOE);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_BIDIOE);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_BIDIOE);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_BIDIOE);	
	}	
}

void setCRCEN(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_CRXEN);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_CRXEN);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_CRXEN);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_CRXEN);	
	}	
}

void setCRCNEXT(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_CRCNEXT);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_CRCNEXT);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_CRCNEXT);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_CRCNEXT);	
	}	
}

void setDFF(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_DFF);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_DFF);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_DFF);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_DFF);	
	}	
}

void setRXONLY(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_RXONLY);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_RXONLY);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_RXONLY);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_RXONLY);	
	}	
}

void setSSM(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_SSM);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_SSM);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_SSM);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_SSM);	
	}	
}

void setSSI(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_SSI);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_SSI);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_SSI);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_SSI);	
	}	
}

void setLSBFIRST(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_LSBFIRST);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_LSBFIRST);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_LSBFIRST);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_LSBFIRST);	
	}	
}

void setBR(uint32_t module, uint32_t br)
{
	if(module == 0)
	{
		*SPI1_CR1 |= (br << SPI_CR1_BR);
	}
	else
	{
		*SPI2_CR1 |= (br << SPI_CR1_BR);	
	}	
}

void setMSTR(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_MSTR);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_MSTR);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_MSTR);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_MSTR);	
	}	
}

void setCPOL(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_CPOL);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_CPOL);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_CPOL);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_CPOL);	
	}	
}

void setCPHA(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR1 |= (1 << SPI_CR1_CPHA);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR1_CPHA);
	}
	else
	{
		if(mode)
			*SPI2_CR1 |= (1 << SPI_CR1_CPHA);
		else
			*SPI2_CR1 &= ~(1 << SPI_CR1_CPHA);	
	}	
}


bool getBIBIMODE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_BIDIMODE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_BIDIMODE))
			return true;
		else
			return false;	
	}
}

bool getBIBIOE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_BIDIOE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_BIDIOE))
			return true;
		else
			return false;	
	}
}

bool getCRCEN(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_CRXEN))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_CRXEN))
			return true;
		else
			return false;	
	}
}


bool getDFF(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_DFF))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_DFF))
			return true;
		else
			return false;	
	}
}

bool getCRCNEXT(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_CRCNEXT))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_CRCNEXT))
			return true;
		else
			return false;	
	}
}

bool getRXONLY(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_RXONLY))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_RXONLY))
			return true;
		else
			return false;	
	}
}

bool getSSM(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_SSM))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_SSM))
			return true;
		else
			return false;	
	}
}

bool getSSI(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_SSI))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_SSI))
			return true;
		else
			return false;	
	}
}

bool getLSBFIRST(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_LSBFIRST))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_LSBFIRST))
			return true;
		else
			return false;	
	}
}

bool getSPE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_SPE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_SPE))
			return true;
		else
			return false;	
	}
}

uint32_t getBR(uint32_t module)
{
	uint32_t br = 0;
	
	if(module == 0)
	{
		br = *SPI1_CR1 & (7 << SPI_CR1_BR);
		br >>= SPI_CR1_BR;
	}
	else
	{
		br = *SPI2_CR1 & (7 << SPI_CR1_BR);
		br >>= SPI_CR1_BR;	
	}
	
	return br;
}

bool getMSTR(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_MSTR))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_MSTR))
			return true;
		else
			return false;	
	}
}

bool getCPOL(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_CPOL))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_CPOL))
			return true;
		else
			return false;	
	}
}

bool getCPHA(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR1 & (1 << SPI_CR1_CPHA))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR1 & (1 << SPI_CR1_CPHA))
			return true;
		else
			return false;	
	}
}


void setTXEIE(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR2 |= (1 << SPI_CR2_TXEIE);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR2_TXEIE);
	}
	else
	{
		if(mode)
			*SPI2_CR2 |= (1 << SPI_CR2_TXEIE);
		else
			*SPI2_CR2 &= ~(1 << SPI_CR2_TXEIE);	
	}	
}

void setRXNEIE(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR2 |= (1 << SPI_CR2_RXNEIE);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR2_RXNEIE);
	}
	else
	{
		if(mode)
			*SPI2_CR2 |= (1 << SPI_CR2_RXNEIE);
		else
			*SPI2_CR2 &= ~(1 << SPI_CR2_RXNEIE);	
	}	
}

void setERRIE(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR2 |= (1 << SPI_CR2_ERRIE);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR2_ERRIE);
	}
	else
	{
		if(mode)
			*SPI2_CR2 |= (1 << SPI_CR2_ERRIE);
		else
			*SPI2_CR2 &= ~(1 << SPI_CR2_ERRIE);	
	}	
}

void setSSOE(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR2 |= (1 << SPI_CR2_SSOE);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR2_SSOE);
	}
	else
	{
		if(mode)
			*SPI2_CR2 |= (1 << SPI_CR2_SSOE);
		else
			*SPI2_CR2 &= ~(1 << SPI_CR2_SSOE);	
	}	
}

void setTXDMAEN(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR2 |= (1 << SPI_CR2_TXDMAEN);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR2_TXDMAEN);
	}
	else
	{
		if(mode)
			*SPI2_CR2 |= (1 << SPI_CR2_TXDMAEN);
		else
			*SPI2_CR2 &= ~(1 << SPI_CR2_TXDMAEN);	
	}	
}

void setRXDMAEN(uint32_t module, bool mode)
{
	if(module == 0)
	{
		if(mode)
			*SPI1_CR2 |= (1 << SPI_CR2_RXDMAEN);
		else
			*SPI1_CR1 &= ~(1 << SPI_CR2_RXDMAEN);
	}
	else
	{
		if(mode)
			*SPI2_CR2 |= (1 << SPI_CR2_RXDMAEN);
		else
			*SPI2_CR2 &= ~(1 << SPI_CR2_RXDMAEN);	
	}	
}


bool getTXEIE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR2 & (1 << SPI_CR2_TXEIE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR2 & (1 << SPI_CR2_TXEIE))
			return true;
		else
			return false;	
	}
}

bool getRXNEIE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR2 & (1 << SPI_CR2_RXNEIE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR2 & (1 << SPI_CR2_RXNEIE))
			return true;
		else
			return false;	
	}
}

bool getERRIE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR2 & (1 << SPI_CR2_ERRIE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR2 & (1 << SPI_CR2_ERRIE))
			return true;
		else
			return false;	
	}
}


bool getSSOE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR2 & (1 << SPI_CR2_SSOE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR2 & (1 << SPI_CR2_SSOE))
			return true;
		else
			return false;	
	}
}


bool getTXDMAEN(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR2 & (1 << SPI_CR2_TXDMAEN))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR2 & (1 << SPI_CR2_TXDMAEN))
			return true;
		else
			return false;	
	}
}


bool getRXDMAEN(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_CR2 & (1 << SPI_CR2_RXDMAEN))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_CR2 & (1 << SPI_CR2_RXDMAEN))
			return true;
		else
			return false;	
	}
}






void clearCRCERR(uint32_t module)
{
	if(module == 0)
	{
		*SPI1_SR &= ~(1 << SPI_SR_CRCERR);
	}
	else
	{
		*SPI2_SR &= ~(1 << SPI_SR_CRCERR);	
	}	
}


bool getBSY(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_BSY))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_BSY))
			return true;
		else
			return false;	
	}
}

bool getOVR(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_OVR))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_OVR))
			return true;
		else
			return false;	
	}
}

bool getMODF(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_MODF))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_MODF))
			return true;
		else
			return false;	
	}
}

bool getCRCERR(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_CRCERR))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_CRCERR))
			return true;
		else
			return false;	
	}
}

bool getUDR(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_UDR))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_UDR))
			return true;
		else
			return false;	
	}
}

bool getCHSIDE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_CHSIDE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_CHSIDE))
			return true;
		else
			return false;	
	}
}

bool getTXE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_TXE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_TXE))
			return true;
		else
			return false;	
	}
}

bool getRXNE(uint32_t module)
{
	if(module == 0)
	{
		if(*SPI1_SR & (1 << SPI_SR_RXNE))
			return true;
		else
			return false;
	}
	else
	{
		if(*SPI2_SR & (1 << SPI_SR_RXNE))
			return true;
		else
			return false;	
	}
}

uint16_t readSPICRCPR(uint32_t module)
{
	uint16_t poly = 0;

	if(module == 0)
	{
		poly = *SPI1_CRCPR;
	}	
	else
	{
		poly = *SPI2_CRCPR;
	}
	
	return poly;
}

void writeSPICRCPR(uint32_t module, uint16_t data)
{
	if(module == 0)
	{
		*SPI1_DR = data;
	}
	else
	{
		*SPI2_DR = data;
	}
}

uint16_t readSPIRXCRCR(uint32_t module)
{
	uint16_t crc = 0;

	if(module == 0)
	{
		crc = *SPI1_RXCRCR;
	}	
	else
	{
		crc = *SPI2_RXCRCR;
	}
	
	return crc;
}

uint16_t readSPITXCRCR(uint32_t module)
{
	uint16_t crc = 0;

	if(module == 0)
	{
		crc = *SPI1_TXCRCR;
	}	
	else
	{
		crc = *SPI2_TXCRCR;
	}
	
	return crc;
}
