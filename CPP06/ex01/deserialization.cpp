#include <stdint.h>
#include "serialize.hpp"

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
