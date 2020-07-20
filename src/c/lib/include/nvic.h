#ifndef __NVIC_H
#define __NVIC_H

#include <stdint.h>

#define TIM1_UP_IRQ 25

uint32_t *NVIC_ISER0;
uint32_t *NVIC_ISER1;

uint32_t *NVIC_ICER0;
uint32_t *NVIC_ICER1;

void enableIRQ(uint32_t);
void disableIRQ(uint32_t);

#endif
