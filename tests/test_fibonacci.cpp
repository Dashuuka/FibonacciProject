#include <gtest/gtest.h>
#include "fibonacci.h"

TEST(FibonacciTest, HandlesBaseCases) {
    EXPECT_EQ(fibonacci(0), 0U);
    EXPECT_EQ(fibonacci(1), 1U);
}

TEST(FibonacciTest, HandlesValidInput) {
    EXPECT_EQ(fibonacci(10), 55U);
    EXPECT_EQ(fibonacci(20), 6765U);
    EXPECT_EQ(fibonacci(93), 12200160415121876738ULL);
}

TEST(FibonacciTest, ThrowsOnInvalidInput) {
    EXPECT_THROW(fibonacci(94), std::invalid_argument);
    EXPECT_THROW(fibonacci(100), std::invalid_argument);
}