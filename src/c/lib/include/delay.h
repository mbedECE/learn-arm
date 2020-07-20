#ifndef _DELAY_H
#define _DELAY_H

#include "systick.h"
#include <stdint.h>
#include <stdbool.h>

void delays_init(void);
void wait(uint32_t);
void delay_ms(uint32_t);
void delay_us(uint32_t);

#endif
