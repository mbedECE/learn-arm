#ifndef _MAIN_H
#define _MAIN_H

#include <stdint.h>

#include "jlx12864g-086.h"
#include "flash.h"
#include "rcc.h"
#include "spi.h"
#include "gpio.h"
#include "delay.h"

#define SYS_CLK 72	//MHz

void initialize(void);
void configureSystemClock(void);

#endif
