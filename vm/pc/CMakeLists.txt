cmake_minimum_required(VERSION 3.13)
project(fortunap-vm-pc C CXX)

#
# general defines
#

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#
# source files
#

set(VM ../main.cc ../memory/process.hh ../memory/stack.cc ../memory/stack.hh ../memory/process.cc ../vm/vm.cc ../vm/vm.hh ../config.hh ../debugger/debugger.cc ../debugger/debugger.hh)

#
# target: VM (on PC)
#

add_executable(fortunap-vm-pc ${VM})
set_target_properties(fortunap-vm-pc PROPERTIES
    CMAKE_CXX_COMPILER g++)
