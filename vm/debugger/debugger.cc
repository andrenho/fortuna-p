#include "debugger.hh"

#include <cstdio>

Debugger::Debugger(VM &vm)
    : vm_(vm)
{
}

void Debugger::run()
{
    while (1) {
        Process& process = vm_.processes_.at(current_process_); // TODO: what to do if this fails?

        char command;
        if (scanf("%c", &command) == 1) {
            switch (command) {
                case 'r':
                    print_registers(process);
                    break;
                case 10:
                case 13:
                    break; // ignore new lines
                default:
                    printf("err\n");
            }
        }
    }
}

void Debugger::print_registers(Process const &process) const
{
    printf("pc %x\n", process.pc);
}
