#include <iostream>
#include <string>
#include "fibonacci.h"

uint64_t fibonacci(uint32_t n) {
    if (n > MAX_FIBONACCI_INDEX) {
        throw std::invalid_argument("Fibonacci index [" + std::to_string(n) + "] exceeds uint64_t capacity");
    }

    if (n == 0) return 0;
    if (n == 1) return 1;

    uint64_t a = 0;
    uint64_t b = 1;
    uint64_t result = 0;

    for (uint32_t i = 2; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int main() {
    try {
        const uint32_t target_index1 = 93;
        std::cout << "Fibonacci[" << target_index1 << "] = "
            << fibonacci(target_index1) << std::endl;

        const uint32_t target_index2 = 98;
        std::cout << "Fibonacci[" << target_index2 << "] = "
            << fibonacci(target_index2) << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "[ERROR] " << e.what() << std::endl;
        return 1;
    }
    return 0;
}