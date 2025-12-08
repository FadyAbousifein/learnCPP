#include <iostream> 

int readInteger(); 
constexpr bool isEven(const int userInput);

int main (int argc, char *argv[]) {
    const int userInput {readInteger()}; 
    if (isEven(userInput)) {
        std::cout << userInput << " is even";  
    } else {
        std::cout << userInput << " is odd";  
    }
    return 0;
}

int readInteger() {
    std::cout << "Enter an integer: ";
    int input {}; 
    std::cin >> input; 
    return input;
}

constexpr bool isEven(const int userInput) {
    return !(userInput % 2);
}
