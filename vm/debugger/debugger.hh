#ifndef DEBUGGER_HH_
#define DEBUGGER_HH_

#include "../vm/vm.hh"

class Debugger {
public:
    explicit Debugger(VM& vm);

    void run();

private:
    VM& vm_;
    size_t current_process_ = 0;

    void print_registers(Process const &process) const;

    void print_stack(Process const &process);
};

#endif //DEBUGGER_HH_
