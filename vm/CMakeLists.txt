cmake_minimum_required(VERSION 3.13)
project(fortuna-p C CXX ASM)

#
# general defines
#

include(pico_sdk_import.cmake)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#
# source files
#

set(VM main.cc)

#
# target: VM (on Pico)
#

pico_sdk_init()

add_executable(fortunap-vm-pico ${VM})

target_link_libraries(fortunap-vm-pico pico_stdlib)

pico_enable_stdio_usb(fortunap-vm-pico 1)
#pico_enable_stdio_uart(fortunap-vm-pico 1)

pico_add_extra_outputs(fortunap-vm-pico)

#
# target: VM (on PC)
#

add_executable(fortunap-vm-pc ${VM})
set_target_properties(fortunap-vm-pc PROPERTIES
    CMAKE_CXX_COMPILER g++)
