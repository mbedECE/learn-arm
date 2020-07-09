CC=arm-none-eabi-as
LD=arm-none-eabi-ld
SZ=arm-none-eabi-size
OBJ=arm-none-eabi-objcopy
SIZE=0x1000
FILE=blinky2
ADDR=0x8000000
DIR=/home/ubuntu/Desktop/repositories/stlink/build/Release/bin/
CMD="program $(FILE).elf verify reset exit" 


all: $(FILE).o $(FILE).elf

$(FILE).o: $(FILE).s
	$(CC) $^ -o $@

$(FILE).elf: $(FILE).o
	$(LD) $^ -o $@ -T bluepill.ld

clean:
	rm -rf *.o *.elf *.bin

# Flash the MCU using openocd
flash:
	openocd -f ../../boards/bluepill.cfg -c $(CMD)
	
load:
	# This script is design to connect to port 3333 of an openocd instance.
	# please remember to create/edit the .gdbinit file in ${HOME}/ with
	# target remote :3333
	# monitor reset halt
	
	# Please note Pagination is off
	
	openocd -f ../../boards/bluepill.cfg &
	arm-none-eabi-gdb $(FILE).elf
	
close:
	kill $(shell pgrep openocd)

#---------------------------------------------------------------------------------------
size:
	$(SZ) $(FILE).elf
	
objcopy:
	$(OBJ) -Obinary $(FILE).elf $(FILE).bin
	
read:
	$(DIR)./st-flash read $(FILE).bin $(ADDR) $(SIZE)

# Flash the MCU using ST_LINKV2 directly	
write:
	$(DIR)./st-flash write $(FILE).bin $(ADDR)
	
probe:
	st-info --probe
	
reset:
	$(DIR)./st-flash reset
			
erase:
	$(DIR)./st-flash erase
