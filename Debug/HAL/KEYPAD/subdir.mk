################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/KEYPAD/KEYPAD_CFG.c \
../HAL/KEYPAD/KEY_PAD.c 

OBJS += \
./HAL/KEYPAD/KEYPAD_CFG.o \
./HAL/KEYPAD/KEY_PAD.o 

C_DEPS += \
./HAL/KEYPAD/KEYPAD_CFG.d \
./HAL/KEYPAD/KEY_PAD.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/KEYPAD/%.o: ../HAL/KEYPAD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


