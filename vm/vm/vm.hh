#ifndef VM_HH_
#define VM_HH_

#include <vector>
#include "../memory/process.hh"

class VM {
public:
    VM(uint8_t const* os_code, size_t os_code_sz);
    explicit VM(std::vector<uint8_t> code);

    void step();


private:
    std::vector<Process> processes_;
    size_t               current_process_ = 0;

    friend class Debugger;
};

#endif //VM_HH_
