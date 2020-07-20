#include "../include/nvic.h"

uint32_t *NVIC_ISER0 =(uint32_t*)0xE000E100;
uint32_t *NVIC_ISER1 =(uint32_t*)0xE000E104;

uint32_t *NVIC_ICER0 = (uint32_t*)0xE000E180;
uint32_t *NVIC_ICER1 = (uint32_t*)0xE000E180;

void enableIRQ(uint32_t irq)
{
	uint32_t pos = irq % 32; 
	uint32_t reg = irq / 32;
	
	switch(reg)
	{
		case 0:
			*NVIC_ISER0 |= (1 << pos);
			break;
			
		case 1:
			*NVIC_ISER1 |= (1 << pos);
		 	break;	
	}
}

void disableIRQ(uint32_t irq)
{
	uint32_t pos = irq % 32; 
	uint32_t reg = irq / 32;
	
	switch(reg)
	{
		case 0:
			*NVIC_ICER0 |= (1 << pos);
			break;
			
		case 1:
			*NVIC_ICER1 |= (1 << pos);
		 	break;	
	}
}




