################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/25.Multi\ Objects.cpp 

OBJS += \
./src/25.Multi\ Objects.o 

CPP_DEPS += \
./src/25.Multi\ Objects.d 


# Each subdirectory must supply rules for building sources it contributes
src/25.Multi\ Objects.o: ../src/25.Multi\ Objects.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/25.Multi Objects.d" -MT"src/25.Multi\ Objects.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


