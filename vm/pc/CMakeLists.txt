cmake_minimum_required(VERSION 3.13)
project(fortunap-vm-pc CXX)

#
# general defines
#

set(CMAKE_CXX_STANDARD 17)

#
# source files
#

set(VM ../main.cc)

#
# target: VM (on PC)
#

add_executable(fortunap-vm-pc ${VM})
set_target_properties(fortunap-vm-pc PROPERTIES
    CMAKE_CXX_COMPILER g++)
