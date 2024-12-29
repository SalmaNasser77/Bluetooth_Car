################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/SysTick/SysTick.cpp 

OBJS += \
./Core/Src/SysTick/SysTick.o 

CPP_DEPS += \
./Core/Src/SysTick/SysTick.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/SysTick/%.o Core/Src/SysTick/%.su Core/Src/SysTick/%.cyclo: ../Core/Src/SysTick/%.cpp Core/Src/SysTick/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-SysTick

clean-Core-2f-Src-2f-SysTick:
	-$(RM) ./Core/Src/SysTick/SysTick.cyclo ./Core/Src/SysTick/SysTick.d ./Core/Src/SysTick/SysTick.o ./Core/Src/SysTick/SysTick.su

.PHONY: clean-Core-2f-Src-2f-SysTick

