################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../0-hash_table_create.c \
../0-main.c \
../1-djb2.c \
../1-main.c \
../2-key_index.c \
../2-main.c \
../3-hash_table_set.c \
../3-main.c \
../4-hash_table_get.c \
../4-main.c \
../5-hash_table_print.c \
../5-main.c \
../6-hash_table_delete.c \
../6-main.c 

OBJS += \
./0-hash_table_create.o \
./0-main.o \
./1-djb2.o \
./1-main.o \
./2-key_index.o \
./2-main.o \
./3-hash_table_set.o \
./3-main.o \
./4-hash_table_get.o \
./4-main.o \
./5-hash_table_print.o \
./5-main.o \
./6-hash_table_delete.o \
./6-main.o 

C_DEPS += \
./0-hash_table_create.d \
./0-main.d \
./1-djb2.d \
./1-main.d \
./2-key_index.d \
./2-main.d \
./3-hash_table_set.d \
./3-main.d \
./4-hash_table_get.d \
./4-main.d \
./5-hash_table_print.d \
./5-main.d \
./6-hash_table_delete.d \
./6-main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


