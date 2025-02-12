#include "Fibonacci.h"
#include <gtest/gtest.h>
#include <stdexcept>

class FibonacciTest : public ::testing::Test {
protected:
    Fibonacci fibonacci;
};

TEST_F(FibonacciTest, TestFibonacciFirstNumber) {
    EXPECT_EQ(fibonacci.calculate(0), 0);
}

TEST_F(FibonacciTest, TestFibonacciSecondNumber) {
    EXPECT_EQ(fibonacci.calculate(1), 1);
}

TEST_F(FibonacciTest, TestFibonacciFifthNumber) {
    EXPECT_EQ(fibonacci.calculate(4), 3);
}

TEST_F(FibonacciTest, TestNegativeIndex) {
    EXPECT_THROW(fibonacci.calculate(-1), std::invalid_argument);
}

TEST_F(FibonacciTest, TestFibonacciSequence) {
    std::vector<unsigned long> expected = { 0, 1, 1, 2, 3, 5, 8 };
    EXPECT_EQ(fibonacci.getSequence(7), expected);
}
