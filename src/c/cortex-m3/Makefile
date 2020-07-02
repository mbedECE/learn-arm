CC=arm-none-eabi-gcc
MACH=cortex-m3
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0

all:main.o

main.o: main.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf *.s *.o *.elf
	
load:	
	openocd -f ../../boards/stm32bluepill.cfg
