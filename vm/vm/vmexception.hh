#ifndef VMEXCEPTION_HH_
#define VMEXCEPTION_HH_

#include <exception>
#include <cstdint>

enum VMExceptionType : uint8_t {
    F_ERR_INVALID_INT,
};

class VMException : public std::exception {
public:
    explicit VMException(VMExceptionType exception_type) : exception_type_(exception_type) {}

    [[nodiscard]] VMExceptionType exception_type() const { return exception_type_; }

private:
    VMExceptionType exception_type_;
};


#endif //VMEXCEPTION_HH_
