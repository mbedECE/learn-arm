#include "../include/rcc.h"

//RCC
uint32_t *RCC_CR = (uint32_t*)(RCC_BASE + 0x00);
uint32_t *RCC_CFGR = (uint32_t*)(RCC_BASE + 0x04);
uint32_t *RCC_APB2ENR = (uint32_t*)(RCC_BASE + 0x18);
uint32_t *RCC_APB1ENR = (uint32_t*)(RCC_BASE + 0x1C);

void enablePeripheralClock(uint32_t p)
{
	uint32_t pos = p % 32; 
	uint32_t reg = p / 32;
	
	switch(reg)
	{
		case 0:
			*RCC_APB1ENR |= (1 << pos);
			break;
			
		case 1:
			*RCC_APB2ENR |= (1 << pos);
		 	break;	
	}
}

bool isHSIRDY(void)
{
	if(*RCC_CR & (1 << RCC_CR_HSIRDY))
		return true;
	else 	
		return false;	
}

void enableHSE(void)
{
	*RCC_CR |= (1 << RCC_CR_HSEON);
}

void disableHSE(void)
{
	*RCC_CR &= ~(1 << RCC_CR_HSEON);
}

void enableHSI(void)
{
	*RCC_CR |= (1 << RCC_CR_HSION);
}

void disableHSI(void)
{
	*RCC_CR &= ~(1 << RCC_CR_HSION);
}

bool isHSERDY(void)
{
	if(*RCC_CR & (1 << RCC_CR_HSERDY))
		return true;
	else 	
		return false;	
}

void enableCSS(void)
{
	*RCC_CR |= (1 << RCC_CR_CSSON);
}

void disableCSS(void)
{
	*RCC_CR &= ~(1 << RCC_CR_CSSON);
}

void enablePLL(void)
{
	*RCC_CR |= (1 << RCC_CR_PLLON);
}

void disablePLL(void)
{
	*RCC_CR &= ~(1 << RCC_CR_PLLON);
}

bool isPLLRDY(void)
{
	if(*RCC_CR & (1 << RCC_CR_PLLRDY))
		return true;
	else 	
		return false;	
}

void setSW(uint32_t sw)
{
	*RCC_CFGR |= (sw << RCC_CFGR_SW);
}

uint8_t getSWS(void)
{
	uint8_t source = (uint8_t)(*RCC_CFGR & 0xC);
	return (source >> 2);
}

void setAHB_PSC(uint32_t psc)
{
	*RCC_CFGR |= (psc << RCC_CFGR_HPRE);
}

void setAPB1_PSC(uint32_t psc)
{
	*RCC_CFGR |= (psc << RCC_CFGR_PPRE1);
}

void setPLLPSC(void)
{
	*RCC_CFGR |= (1 << RCC_CFGR_PLLSRC);
}

void clearPLLSRC(void)
{
	*RCC_CFGR |= (1 << RCC_CFGR_PLLSRC);
}

void setAPB2_PSC(uint32_t psc)
{
	*RCC_CFGR |= (psc << RCC_CFGR_PPRE2);
}

void setPLLXTPRE(void)
{
	*RCC_CFGR |= (1 << RCC_CFGR_PLLXTPRE);
}

void clearPLLXTPRE(void)
{
	*RCC_CFGR &= ~(1 << RCC_CFGR_PLLXTPRE);
}

void setPLLMULL(uint32_t pll)
{
	*RCC_CFGR |= (pll << RCC_CFGR_PLLMUL);
}

void setUSBPRE(uint32_t psc)
{
	if(psc == USB_PLL_DIVx1)
		*RCC_CFGR |= (1 << RCC_CFGR_USBPRE);
	else
		*RCC_CFGR &= ~(1 << RCC_CFGR_USBPRE);
}

