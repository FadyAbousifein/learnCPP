#include <iostream>
#include "ch2.8_multifile.h" // wont get a warning


int readInteger() { 
    return 4; 
}

int doubleNumber(int x) {
    return 2*x; 
}

int main () {
    int x{readInteger()}; 
    std::cout << "Double the number you entered is: " << doubleNumber(x) << '\n'; 
    return 0;
}




