#include <iostream>

int main (int argc, char *argv[]) {
    std::cout << "Enter a single character: "; 
    char c{}; 
    std::cin >> c; 
    int ascii{c};
    std::cout << c << '\n' << ascii; 
    return 0;
}
