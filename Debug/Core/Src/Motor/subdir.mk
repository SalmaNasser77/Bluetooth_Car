################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/Motor/Motor.cpp \
../Core/Src/Motor/Motor_cfg.cpp 

OBJS += \
./Core/Src/Motor/Motor.o \
./Core/Src/Motor/Motor_cfg.o 

CPP_DEPS += \
./Core/Src/Motor/Motor.d \
./Core/Src/Motor/Motor_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Motor/%.o Core/Src/Motor/%.su Core/Src/Motor/%.cyclo: ../Core/Src/Motor/%.cpp Core/Src/Motor/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Motor

clean-Core-2f-Src-2f-Motor:
	-$(RM) ./Core/Src/Motor/Motor.cyclo ./Core/Src/Motor/Motor.d ./Core/Src/Motor/Motor.o ./Core/Src/Motor/Motor.su ./Core/Src/Motor/Motor_cfg.cyclo ./Core/Src/Motor/Motor_cfg.d ./Core/Src/Motor/Motor_cfg.o ./Core/Src/Motor/Motor_cfg.su

.PHONY: clean-Core-2f-Src-2f-Motor

