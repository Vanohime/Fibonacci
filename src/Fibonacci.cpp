#include "Fibonacci.h"
#include <stdexcept>

Fibonacci::Fibonacci() {}

unsigned long Fibonacci::calculate(int n) const {
    if (n < 0) {
        throw std::invalid_argument("Negative index is not allowed");
    }
    return fib(n);
}

unsigned long Fibonacci::fib(int n) const {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

std::vector<unsigned long> Fibonacci::getSequence(int n) const {
    if (n < 0) {
        throw std::invalid_argument("Negative index is not allowed");
    }
    std::vector<unsigned long> sequence(n, 0);
    if (n >= 1) {
        sequence[1] = 1;
    }
    for (int i = 2; i < n; ++i) {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }
    return sequence;
}
