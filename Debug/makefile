################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/EXI/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KEYPAD/subdir.mk
-include APP/subdir.mk
-include .metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ITI_WCE_Embedded.lss \

FLASH_IMAGE += \
ITI_WCE_Embedded.hex \

EEPROM_IMAGE += \
ITI_WCE_Embedded.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: ITI_WCE_Embedded.elf secondary-outputs

# Tool invocations
ITI_WCE_Embedded.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ITI_WCE_Embedded.map -mmcu=atmega32 -o "ITI_WCE_Embedded.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ITI_WCE_Embedded.lss: ITI_WCE_Embedded.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ITI_WCE_Embedded.elf  >"ITI_WCE_Embedded.lss"
	@echo 'Finished building: $@'
	@echo ' '

ITI_WCE_Embedded.hex: ITI_WCE_Embedded.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ITI_WCE_Embedded.elf  "ITI_WCE_Embedded.hex"
	@echo 'Finished building: $@'
	@echo ' '

ITI_WCE_Embedded.eep: ITI_WCE_Embedded.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex ITI_WCE_Embedded.elf  "ITI_WCE_Embedded.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ITI_WCE_Embedded.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ITI_WCE_Embedded.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ITI_WCE_Embedded.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
