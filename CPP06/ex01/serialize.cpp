
#include "serialize.hpp"
#include <stdint.h>

uintptr_t   serialize(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}
