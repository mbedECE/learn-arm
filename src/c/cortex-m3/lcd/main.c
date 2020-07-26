#include "main.h"

uint8_t A = 0;

int main(void)
{
	initialize();
	
	while(1)
	{
		print(0x30, 0, 0);
		print(0x31, 0, 8);
		print(0x32, 0, 16);
		print(0x33, 0, 24);
		print(0x34, 0, 32);
		print(0x35, 0, 40);
		print(0x36, 0, 48);
		print(0x37, 0, 56);
		print(0x38, 0, 64);
		print(0x39, 0, 72);
		
		print(0x41, 1, 0);
		print(0x42, 1, 8);
		print(0x43, 1, 16);
		print(0x44, 1, 24);
		print(0x45, 1, 32);
		print(0x46, 1, 40);
		print(0x47, 1, 48);
		print(0x48, 1, 56);
		print(0x49, 1, 64);
		print(0x4A, 1, 72);
		print(0x4B, 1, 80);
		print(0x4C, 1, 88);
		print(0x4D, 1, 96);
		print(0x4E, 1, 104);
		print(0x4F, 1, 112);
		print(0x50, 1, 120);
		
		print(0x25, 2, 0);
		print(0x3F, 2, 8);
		print(0x21, 2, 16);	
		print(0x3A, 2, 24);
		print(0x3D, 2, 32);
		print(0x2D, 2, 40);	
		print(0x2B, 2, 48);
		
		print(0x51, 3, 0);	
		print(0x52, 3, 8);
		print(0x53, 3, 16);
		print(0x54, 3, 24);	
		print(0x55, 3, 32);	
		print(0x56, 3, 40);
		print(0x57, 3, 48);
		print(0x58, 3, 56);
		print(0x59, 3, 64);
		print(0x5A, 3, 72);

	}
}

void initialize()
{
	configureSystemClock();
	lcdInit(SPI1, PORTA, GPIO_PIN7, GPIO_PIN5, GPIO_PIN4, GPIO_PIN3, GPIO_PIN2, GPIO_PIN1, SYS_CLK);
	setCursor(0, 0);	
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

