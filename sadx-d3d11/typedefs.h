#pragma once

#include <cstdint>

using int8   = int8_t;
using uint8  = uint8_t;
using int16  = int16_t;
using uint16 = uint16_t;
using int32  = int32_t;
using uint32 = uint32_t;
using int64  = int64_t;
using uint64 = uint64_t;

using ushort = uint16_t;
using uint   = uint32_t;
using ulong  = unsigned long;

template <typename T>
bool operator!=(const T& lhs, const T& rhs)
{
	return !(lhs == rhs);
}
