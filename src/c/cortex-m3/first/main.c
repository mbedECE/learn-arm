#include<stdint.h>

#include "stm32f10xx.h"

uint16_t timerPrescaler = 1000;
uint16_t timerValue = 1500;
uint32_t repeatCounterValue = 2;

int main(void)
{
	initialize();
		
	while(1);
}

void initialize(void)
{
	configurePortA();
	enableClockTIM1();
	enableIRQ(TIM1_UP_IRQ);	
	startTimer1(timerValue, timerPrescaler, repeatCounterValue);
}

void startTimer1(uint16_t value, uint16_t psc, uint32_t rcv)
{
	*TIM1_ARR = value;
	*TIM1_PSC = psc;
	*TIM1_RCR = rcv;
	
	*TIM1_DIER |= (1 << TIM1_DIER_UIE);	//Update interrupt enabled
	
	*TIM1_EGR |= (1 << TIM1_EGR_UG);	//Reinitialize the counter and generates an update of the registers
	
	*TIM1_CR1 |= (1 << TIM1_CR1_URS);	//Only counter overflow/underflow generates an update interrupt
	*TIM1_CR1 |= (1 << TIM1_CR1_ARPE);	//TIMx_ARR register is buffered
	*TIM1_CR1 |= (1 << TIM1_CR1_CEN);	//Enable Timer
}

void enableClockTIM1(void)
{
	*RCC_APB2ENR |= (1 << RCC_APB2ENR_TIM1EN);  	//Set TIM1EN bit in RCC_APB2ENR to 1 to enable TIM1
}

void enableIRQ(uint8_t irq)
{
	uint32_t pos = (uint32_t)(irq % 32);	//Get the bit position
	uint32_t reg_num = (uint32_t)(irq / 32); 	//Get register number
	
	//Get actual register from base address of NVIC_ISER0
	*NVIC_ISER0 |= (1 << pos);
}

void configurePortA(void)
{
	*RCC_APB2ENR |= (1 << RCC_APB2ENR_IOPAEN);  	//Set IOPAEN bit in RCC_APB2ENR to 1 to enable GPIOA
	*GPIOA_CRH &= 0xFFFFFFF0;
	*GPIOA_CRH |= 0x00000002;
}

void TIM1_UP_Handler(void)
{
	if(*TIM1_SR & 0x0001)
	{
		*TIM1_SR = 0xFFFE;
		
		//toggle LED
		*GPIOA_ORD ^= (1 << GPIOx_ORD8); 
	}
}



