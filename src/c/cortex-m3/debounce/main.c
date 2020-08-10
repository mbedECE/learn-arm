#include "main.h"

uint32_t timerValue = 50000;
uint32_t prescaler = 106;

volatile int count = 0;
char string[6];

char* intToChar(char buf[], int num)
{

	buf[0] = (num / 1000) + 48;
	
	num %= 1000;
	 
	buf[1] = (num / 100) + 48;
	
	num %= 100;
	
	buf[2] = (num / 10) + 48;
	
	num %= 10;
	
	buf[3] = num + 48;
	
	buf[4] = '\0';
		
	return buf;
}

int main(void)
{
	initialize();	
	
	while(1)
	{
		char* str = intToChar(string, count);
		
		setCursor(8, 0);
		
		println(str);	
	}
}

void configureTimer1(void)
{	
	setTIMx_ARR(TIM1, timerValue);
	setTIMx_PSC(TIM1, prescaler);
	
	setDIR(TIM1, true);
	
	setUIE(TIM1, true);		//Update interrupt enabled
	
	setURS(TIM1, true);		//Only counter overflow/underflow generates an update interrupt
	setARPE(TIM1, true);		//TIMx_ARR register is buffered
	
	setUG(TIM1, true);		//Reinitialize the counter and generates an update of the registers
	enableCounter(TIM1);
}

void TIM1_UP_Handler(void)
{
	if(getUIF(TIM1) == true)
	{
		if((getPinState(PORTA, GPIO_PIN6) == true))			
			count++;
		
		//stop timer 1
		disableCounter(TIM1);
				
		clearUIF(TIM1);
	}	
}

void EXTI9_5_Handler(void)
{
	if(getEXTI_PR(GPIO_PIN6))
	{
		if((getPinState(PORTA, GPIO_PIN6) == true))
		{
			//start timer 1
			disableCounter(TIM1);
			setUG(TIM1, true);		//Reinitialize the counter and generates an update of the registers
			
			enableCounter(TIM1);
		}
		
		setEXTI_PR(GPIO_PIN6, true);
	}
	
}

void initialize()
{
	configureSystemClock();
	delays_init(SYS_CLK);
	lcdInit(SPI1, PORTA, GPIO_PIN7, GPIO_PIN5, GPIO_PIN4, GPIO_PIN3, GPIO_PIN2, GPIO_PIN1, SYS_CLK);
		
	configurePortPin(PORTA, GPIO_PIN6, CNF_MODE_INPUT_PULL_UP_DN, MODE_INPUT);	
	setEXTI_IMR(GPIO_PIN6, true);
	setEXTI_RTSR(GPIO_PIN6, true);
	setEXTI_FTSR(GPIO_PIN6, false);
	enableIRQ(23);
	
	enableTIMxClock(TIM1);
	enableIRQ(25);
	
	configureTimer1();
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


