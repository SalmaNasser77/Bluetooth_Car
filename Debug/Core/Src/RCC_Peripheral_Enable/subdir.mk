################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/RCC_Peripheral_Enable/RCC_Peripheral_Enable.cpp 

OBJS += \
./Core/Src/RCC_Peripheral_Enable/RCC_Peripheral_Enable.o 

CPP_DEPS += \
./Core/Src/RCC_Peripheral_Enable/RCC_Peripheral_Enable.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/RCC_Peripheral_Enable/%.o Core/Src/RCC_Peripheral_Enable/%.su Core/Src/RCC_Peripheral_Enable/%.cyclo: ../Core/Src/RCC_Peripheral_Enable/%.cpp Core/Src/RCC_Peripheral_Enable/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-RCC_Peripheral_Enable

clean-Core-2f-Src-2f-RCC_Peripheral_Enable:
	-$(RM) ./Core/Src/RCC_Peripheral_Enable/RCC_Peripheral_Enable.cyclo ./Core/Src/RCC_Peripheral_Enable/RCC_Peripheral_Enable.d ./Core/Src/RCC_Peripheral_Enable/RCC_Peripheral_Enable.o ./Core/Src/RCC_Peripheral_Enable/RCC_Peripheral_Enable.su

.PHONY: clean-Core-2f-Src-2f-RCC_Peripheral_Enable

