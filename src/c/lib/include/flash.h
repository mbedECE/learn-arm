#ifndef _FLASH_H
#define _FLASH_H

#include <stdint.h>
#include <stdbool.h>

#define FLASH_BASE 0x40022000

#define FLASH_PRFTB_ENABLE 1
#define FLASH_PRFTB_DISABLE 0

#define FLASH_WAIT_STATES_ZERO 0
#define FLASH_WAIT_STATES_ONE 1
#define FLASH_WAIT_STATES_TWO 2

#define FLASH_ACR_PRFTBS 5
#define FLASH_ACR_PRFTBE 4
#define FLASH_ACR_HLFCYA 3
#define FLASH_ACR_LATENCY 0

//FLASH
uint32_t *FLASH_ACR;

bool getPRFTBS(void);
void setPRFTB(uint32_t);
void setWaitStates(uint32_t);

#endif
