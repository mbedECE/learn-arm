#ifndef __JLX12864G_086_H
#define __JLX12864G_086_H

#include <stdint.h>
#include <stdbool.h>

#include "spi.h"
#include "delay.h"
#include "gpio.h"

#define DISPLY_STATE_ON 0xAF
#define DISPLY_STATE_OFF 0xAE

void lcdInit(void);

void sendCMD(uint16_t);
void sendData(uint16_t);
void setDisplayState(uint16_t);
void setCursor(uint32_t, uint32_t);
void clearScreen(void);
#endif
