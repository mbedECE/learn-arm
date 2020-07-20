#include "../include/flash.h"

uint32_t *FLASH_ACR = (uint32_t*)(FLASH_BASE + 0x00);

bool getPRFTBS(void)
{
	if(*FLASH_ACR & (1 << FLASH_ACR_PRFTBS))
		return true;
	else 	
		return false;
}

void setPRFTB(uint32_t state)
{
	if(state)
		*FLASH_ACR |= (1 << FLASH_ACR_PRFTBE);
	else
		*FLASH_ACR &= ~(1 << FLASH_ACR_PRFTBE);
}

void setWaitStates(uint32_t latency)
{
	*FLASH_ACR |= (latency << FLASH_ACR_LATENCY);
}
