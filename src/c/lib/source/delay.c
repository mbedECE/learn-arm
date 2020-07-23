#include "../include/delay.h"

uint32_t SYS_CLK = 8;
uint32_t clk_period = 0;

void delays_init(uint32_t clk)
{	
	SYS_CLK = clk;
	clk_period = 1000/clk; 

	disableSystickTimer();
	setCockSource(CLK_PROCESSOR);
	disableException();
	enableSystickTimer();
}

//System clock period is 125ns base on 8MHz
void wait(uint32_t base_period)
{
	setReloadValue(base_period-1);
	setCurrentValue(0);
	while(!isCountZero());
}

void delay_ms(uint32_t dly)
{
	for(uint32_t i=0; i<dly; i++)
		wait(1000000/clk_period);	//wait 1 ms
}


