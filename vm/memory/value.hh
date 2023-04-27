#ifndef VALUE_HH_
#define VALUE_HH_

#include <cstdint>
#include <vector>
#include <map>
#include <memory>
#include <string>
#include "../config.hh"

enum Type : uint8_t {
    BYTE, INTEGER, FLOAT, BYTEARRAY, ARRAY, MAP, ADDRESS,
};

struct Value {
    Type type;
    union {
        uint8_t                                       byte;
        int32_t                                       integer;
        float                                         number;
        addr_t                                        address;
        std::shared_ptr<std::vector<Value>>           bytearray;
        std::shared_ptr<std::vector<uint8_t>>         bytemap;
        std::shared_ptr<std::map<std::string, Value>> map;
    };
};

#endif //VALUE_HH_
