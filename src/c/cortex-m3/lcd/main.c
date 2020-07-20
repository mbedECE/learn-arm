#include <stdint.h>

#include "jlx12864g.h"

#include "flash.h"
#include "rcc.h"


void initialize(void);
void configureSystemClock(void);

int main(void)
{
	initialize();
		
	while(1);
}

void initialize(void)
{
	configureSystemClock();
}

void configureSystemClock(void)
{
	enum CLK_SRC src = PLL;
	
	//Enable HSI
	enableHSI();
	
	//Set HSE ON 
	enableHSE();
	
	setPLLMULL(RCC_CFGR_PLLMULx9);
	setUSBPRE(USB_PLL_DIVx1);
	setPLLPSC();
	setAPB1_PSC(RCC_CFGR_HCLK_DIVx2);
	
	//Wait for HSE ready
	while(!isHSERDY());
	
	//Turn on PLL
	enablePLL();
		
	//Wait for PLL ready
	while(!isPLLRDY());
	
	//Set flash wait states to 2
	setWaitStates(FLASH_WAIT_STATES_TWO);
	
	//Switch system clock to PLL
	setSW(RCC_CFGR_SW_PLL);
	
	//Wait for switch to PLL
	while(getSWS() != src);
	
	//Turn off HSI to save power
	disableHSI();
}	









