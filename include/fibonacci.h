#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <cstdint>
#include <stdexcept>

constexpr uint32_t MAX_FIBONACCI_INDEX = 93;

uint64_t fibonacci(uint32_t n);

#endif // FIBONACCI_H