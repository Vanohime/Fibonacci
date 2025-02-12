#ifndef FIBONACCI_H
#define FIBONACCI_H
#pragma once
#include <vector>

class FibonacciCalculator {
public:
    virtual unsigned long calculate(int n) const = 0;  
};

class Fibonacci : public FibonacciCalculator {
public:
    Fibonacci();
    unsigned long calculate(int n) const override;
    std::vector<unsigned long> getSequence(int n) const;

private:
    unsigned long fib(int n) const;
};

#endif // FIBONACCI_H
