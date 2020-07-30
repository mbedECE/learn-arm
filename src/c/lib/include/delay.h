#ifndef _DELAY_H
#define _DELAY_H

#include "systick.h"
#include <stdint.h>
#include <stdbool.h>

uint32_t SYS_CLK;

void delays_init(uint32_t);
void wait(uint32_t);
void delay_ms(uint32_t);
void delay_us(uint32_t);
#endif
