#include "io.h"
#include <iostream>


int readNumber() {
    std::cout << "Enter a number: "; 
    int x{}; 
    std::cin >> x; 
    return x;
}

void writeAnswer(int num) {
    std::cout << "The answer is: " << num << '\n'; 
}
