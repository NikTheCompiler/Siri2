################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ArithProgression.cpp \
../FibonacciProgression.cpp \
../GeomProgression.cpp \
../Main.cpp \
../Progression.cpp 

OBJS += \
./ArithProgression.o \
./FibonacciProgression.o \
./GeomProgression.o \
./Main.o \
./Progression.o 

CPP_DEPS += \
./ArithProgression.d \
./FibonacciProgression.d \
./GeomProgression.d \
./Main.d \
./Progression.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


