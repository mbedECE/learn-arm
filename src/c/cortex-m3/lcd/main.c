#include "main.h"

uint8_t A = 9;

int main(void)
{
	initialize();
	
	setCursor(8, 0);
	println("0");
	
	while(1)	
	{					

	}
}

void initialize()
{
	configureSystemClock();
	delays_init(SYS_CLK);
	lcdInit(SPI1, PORTA, GPIO_PIN7, GPIO_PIN5, GPIO_PIN4, GPIO_PIN3, GPIO_PIN2, GPIO_PIN1, SYS_CLK);
}

void configureSystemClock(void)
{	
	//Enable HSI
	enableHSI();
	
	//Set HSE ON 
	enableHSE();
	
	setPLLMULL(RCC_CFGR_PLLMULx9);
	setUSBPRE(USB_PLL_DIVx1);
	setPLLSRC();
	setAPB1_PSC(RCC_CFGR_HCLK_DIVx2);	
	
	//Wait for HSE ready
	while(!isHSERDY());
	
	//Turn on PLL
	enablePLL();
		
	//Wait for PLL ready
	while(!isPLLRDY());
	
	//Set flash wait states to 2
	setPRFTB(FLASH_PRFTB_ENABLE);
	setWaitStates(FLASH_WAIT_STATES_TWO);
	
	//Switch system clock to PLL
	setSW(RCC_CFGR_SW_PLL);
	
	//Wait for switch to PLL
	while(getSWS() != RCC_CFGR_SW_PLL);
	
	//Turn off HSI to save power
	disableHSI();
}	

