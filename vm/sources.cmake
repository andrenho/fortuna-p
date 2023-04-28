set(VM ../main.cc
        ../config.hh
        ../memory/type.hh ../memory/type.cc
        ../memory/process.hh ../memory/process.cc
        ../memory/heap.hh ../memory/heap.cc
        ../memory/stack.cc ../memory/stack.hh
        ../vm/vm_opcode.hh
        ../vm/vm.cc ../vm/vm.hh
        ../vm/vmexception.hh
        ../debugger/debugger.cc ../debugger/debugger.hh)
