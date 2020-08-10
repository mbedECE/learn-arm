CC=arm-none-eabi-gcc
OBJ=arm-none-eabi-objdump
CP=arm-none-eabi-objcopy
SZ=arm-none-eabi-size
NM=arm-none-eabi-nm
LD=arm-none-eabi-ld
MACH=cortex-m3

CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 -I../../lib/include/
LDFLAGS= -static  -L../../lib/include -lstm32f103c8t6 -T stm32_bluepill.ld -Map=final.map -nostdlib 

DIR=/home/ubuntu/Desktop/repositories/stlink/build/Release/bin/
ADDR=0x8000000
SIZE=0x1000

all:main.o stm32_startup.o final.elf

stm32_startup.o: stm32_startup.c
	$(CC) $(CFLAGS) $^ -o $@ 

main.o: main.c
	$(CC) $(CFLAGS) $^ -o $@
	
final.elf: stm32_startup.o main.o #jlx12864g-086.o 
	$(LD) $^ -o $@  $(LDFLAGS)
	$(CP) -Obinary final.elf final.bin
	
clean:
	rm -rf *.o *.elf *.map *.bin
	
objdump:
	$(OBJ) -h final.elf
	
nm:
	$(NM) final.elf
	
objcopy:
	$(CP) -Obinary final.elf final.bin
	
write:
	st-info --probe
	$(DIR)./st-flash write final.bin $(ADDR)
	
probe:
	st-info --probe
	
reset:
	st-info --probe
	$(DIR)./st-flash reset
	
read:
	st-info --probe
	$(DIR)./st-flash read final.bin $(ADDR) $(SIZE)
	
size:
	$(SZ) final.elf
		
erase:
	st-info --probe
	$(DIR)./st-flash erase
	
load:
	# This script is design to connect to port 3333 of an openocd instance.
	# please remember to create/edit the .gdbinit file in ${HOME}/ with
	# target remote localhost:3333
	
	# Please note Pagination is off
	
	openocd -f ../../../boards/bluepill.cfg &
	arm-none-eabi-gdb
	
	#monitor reset init
	#monitor flash write_image erase final.elf
	
close:
	kill $(shell pgrep openocd)
