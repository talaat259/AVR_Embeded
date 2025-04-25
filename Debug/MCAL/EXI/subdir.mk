################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/EXI/EXI.c \
../MCAL/EXI/EXI_CFG.c 

OBJS += \
./MCAL/EXI/EXI.o \
./MCAL/EXI/EXI_CFG.o 

C_DEPS += \
./MCAL/EXI/EXI.d \
./MCAL/EXI/EXI_CFG.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/EXI/%.o: ../MCAL/EXI/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


