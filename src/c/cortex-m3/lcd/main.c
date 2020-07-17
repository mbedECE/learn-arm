#include <stdint.h>
#include "bluepill.h"
#include "jlx12864g.h"

uint16_t timerPrescaler = 1000;
uint16_t timerValue = 1500;
uint32_t repeatCounterValue = 2;

void initialize(void);

int main(void)
{
	initialize();
		
	while(1);
}

void initialize(void)
{
	enableIRQ(TIM1_UP_IRQ);

}

void TIM1_UP_Handler(void)
{

}



