#include <iostream>

int getUserInput() {
    std::cout << "Enter an integer: "; 
    int x{}; 
    std::cin >> x; 
    return x;
    return 6; // the compiler does not catch this be careful! 
}

int main () {
    int num{getUserInput()}; 
    std::cout << "The number doubled is: " << num*2 << '\n'; 
    return 0;
}
