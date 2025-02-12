#include "Fibonacci.h"
#include <iostream>

int main() {
    try {
        Fibonacci fibonacci;
        std::vector<unsigned long> seq = fibonacci.getSequence(10);
        for (int i = 0; i < seq.size(); ++i) {
            std::cout << seq[i] << " ";
        }
        std::cout << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}