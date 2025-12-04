#include "ch2.8_multifile.h"
#include <iostream>


int readInteger() {
    std::cout << "Enter an integer: "; 
    int x{}; 
    std::cin >> x; 
    return x;
}
