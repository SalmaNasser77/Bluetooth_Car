################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/Bluetooth/Uart.cpp 

OBJS += \
./Core/Src/Bluetooth/Uart.o 

CPP_DEPS += \
./Core/Src/Bluetooth/Uart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Bluetooth/%.o Core/Src/Bluetooth/%.su Core/Src/Bluetooth/%.cyclo: ../Core/Src/Bluetooth/%.cpp Core/Src/Bluetooth/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Bluetooth

clean-Core-2f-Src-2f-Bluetooth:
	-$(RM) ./Core/Src/Bluetooth/Uart.cyclo ./Core/Src/Bluetooth/Uart.d ./Core/Src/Bluetooth/Uart.o ./Core/Src/Bluetooth/Uart.su

.PHONY: clean-Core-2f-Src-2f-Bluetooth

