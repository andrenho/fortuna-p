cmake_minimum_required(VERSION 3.13)

#
# general defines
#

include(pico_sdk_import.cmake)
project(fortunap-vm-pico C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#
# source files
#

include(${CMAKE_CURRENT_SOURCE_DIR}/../sources.cmake)

#
# target: VM (on Pico)
#

pico_sdk_init()

add_executable(fortunap-vm-pico ${VM})

target_link_libraries(fortunap-vm-pico pico_stdlib)
add_definitions(-DPICO=1)

pico_enable_stdio_usb(fortunap-vm-pico 1)
#pico_enable_stdio_uart(fortunap-vm-pico 1)

pico_add_extra_outputs(fortunap-vm-pico)

#
# upload
#

add_custom_target(upload COMMAND bash ../upload.sh DEPENDS fortunap-vm-pico)
