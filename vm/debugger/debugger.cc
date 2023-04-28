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
                case 'S':
                    print_stack(process);
                    break;
                case 's':
                    vm_.step();
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
    printf("pc %02x\n", process.pc);
}

void Debugger::print_stack(Process const &process)
{
    for (auto i = process.stack.stack().rbegin(); i != process.stack.stack().rend(); ++i)
        printf("%02x ", *i);
    printf("\n");
}
