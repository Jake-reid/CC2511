################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/ASerialLdd2.c \
../Generated_Code/Cpu.c \
../Generated_Code/Inhr1.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PwmLdd1.c \
../Generated_Code/PwmLdd2.c \
../Generated_Code/PwmLdd3.c \
../Generated_Code/TU1.c \
../Generated_Code/Term1.c \
../Generated_Code/Vectors.c \
../Generated_Code/blueLED.c \
../Generated_Code/greenLED.c \
../Generated_Code/redLED.c 

OBJS += \
./Generated_Code/ASerialLdd2.o \
./Generated_Code/Cpu.o \
./Generated_Code/Inhr1.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PwmLdd1.o \
./Generated_Code/PwmLdd2.o \
./Generated_Code/PwmLdd3.o \
./Generated_Code/TU1.o \
./Generated_Code/Term1.o \
./Generated_Code/Vectors.o \
./Generated_Code/blueLED.o \
./Generated_Code/greenLED.o \
./Generated_Code/redLED.o 

C_DEPS += \
./Generated_Code/ASerialLdd2.d \
./Generated_Code/Cpu.d \
./Generated_Code/Inhr1.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PwmLdd1.d \
./Generated_Code/PwmLdd2.d \
./Generated_Code/PwmLdd3.d \
./Generated_Code/TU1.d \
./Generated_Code/Term1.d \
./Generated_Code/Vectors.d \
./Generated_Code/blueLED.d \
./Generated_Code/greenLED.d \
./Generated_Code/redLED.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/jc210697/Desktop/Jake Lab 8/Jake Reid Lab 8/Static_Code/PDD" -I"C:/Users/jc210697/Desktop/Jake Lab 8/Jake Reid Lab 8/Static_Code/IO_Map" -I"C:/Users/jc210697/Desktop/Jake Lab 8/Jake Reid Lab 8/Sources" -I"C:/Users/jc210697/Desktop/Jake Lab 8/Jake Reid Lab 8/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


