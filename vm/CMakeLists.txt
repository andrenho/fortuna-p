cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(fortunap-vm_test C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(fortunap-vm
	main.c
	)

target_link_libraries(fortunap-vm pico_stdlib)

pico_enable_stdio_usb(fortunap-vm 1)
pico_enable_stdio_uart(fortunap-vm 1)

pico_add_extra_outputs(fortunap-vm)
