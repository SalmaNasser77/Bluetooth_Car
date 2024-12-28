################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/GPIO/GPIO_Base.cpp \
../Core/Src/GPIO/Input.cpp \
../Core/Src/GPIO/Output.cpp 

OBJS += \
./Core/Src/GPIO/GPIO_Base.o \
./Core/Src/GPIO/Input.o \
./Core/Src/GPIO/Output.o 

CPP_DEPS += \
./Core/Src/GPIO/GPIO_Base.d \
./Core/Src/GPIO/Input.d \
./Core/Src/GPIO/Output.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/GPIO/%.o Core/Src/GPIO/%.su Core/Src/GPIO/%.cyclo: ../Core/Src/GPIO/%.cpp Core/Src/GPIO/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-GPIO

clean-Core-2f-Src-2f-GPIO:
	-$(RM) ./Core/Src/GPIO/GPIO_Base.cyclo ./Core/Src/GPIO/GPIO_Base.d ./Core/Src/GPIO/GPIO_Base.o ./Core/Src/GPIO/GPIO_Base.su ./Core/Src/GPIO/Input.cyclo ./Core/Src/GPIO/Input.d ./Core/Src/GPIO/Input.o ./Core/Src/GPIO/Input.su ./Core/Src/GPIO/Output.cyclo ./Core/Src/GPIO/Output.d ./Core/Src/GPIO/Output.o ./Core/Src/GPIO/Output.su

.PHONY: clean-Core-2f-Src-2f-GPIO

