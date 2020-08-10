#include "../include/exti.h"

uint32_t *EXTI_IMR = (uint32_t*)(EXTI_BASE + 0x00);
uint32_t *EXTI_EMR = (uint32_t*)(EXTI_BASE + 0x04);

uint32_t *EXTI_RTSR = (uint32_t*)(EXTI_BASE + 0x08);
uint32_t *EXTI_FTSR = (uint32_t*)(EXTI_BASE + 0x0C);

uint32_t *EXTI_SWIER = (uint32_t*)(EXTI_BASE + 0x10);
uint32_t *EXTI_PR = (uint32_t*)(EXTI_BASE + 0x14);


void setEXTI_IMR(uint32_t bit, bool state)
{
	if(state)
		*EXTI_IMR |= (1 << bit);
	else
		*EXTI_IMR &= ~(1 << bit);
}

void setEXTI_EMR(uint32_t bit, bool state)
{
	if(state)
		*EXTI_EMR |= (1 << bit);
	else
		*EXTI_EMR &= ~(1 << bit);
}

void setEXTI_RTSR(uint32_t bit, bool state)
{
	if(state)
		*EXTI_RTSR |= (1 << bit);
	else
		*EXTI_RTSR &= ~(1 << bit);
}

void setEXTI_FTSR(uint32_t bit, bool state)
{
	if(state)
		*EXTI_FTSR |= (1 << bit);
	else
		*EXTI_FTSR &= ~(1 << bit);
}

void setEXTI_SWIER(uint32_t bit, bool state)
{
	if(state)
		*EXTI_SWIER |= (1 << bit);
	else
		*EXTI_SWIER &= ~(1 << bit);
}

void setEXTI_PR(uint32_t bit, bool state)
{
	if(state)
		*EXTI_PR |= (1 << bit);
	else
		*EXTI_PR &= ~(1 << bit);
}


bool getEXTI_IMR(uint32_t bit)
{
	return *EXTI_IMR & (1 << bit);
}

bool getEXTI_EMR(uint32_t bit)
{
	return *EXTI_EMR & (1 << bit);
}

bool getEXTI_RTSR(uint32_t bit)
{
	return *EXTI_RTSR & (1 << bit);
}

bool getEXTI_FTSR(uint32_t bit)
{
	return *EXTI_FTSR & (1 << bit);
}

bool getEXTI_SWIER(uint32_t bit)
{
	return *EXTI_SWIER & (1 << bit);
}

bool getEXTI_PR(uint32_t bit)
{
	return *EXTI_PR & (1 << bit);
}


