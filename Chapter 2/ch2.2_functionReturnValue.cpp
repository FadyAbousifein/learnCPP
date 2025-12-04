#include <iostream>

int getValue() {
    std::cout << "Enter an Integer: "; 
    int x{}; 
    std::cin >> x; 
    return x; 
}

void printValue(int num) {
    std::cout << "Double your number is: " << 2*num << '\n';
}


int main () {
    int x{getValue()}; 
    printValue(x); 
    return 0;
}
