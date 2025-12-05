#include <iostream>

int readValue(); 
bool isPrime(int x); 

int main (int argc, char *argv[]) {
    int num{readValue()}; 
    if (isPrime(num)) {
        std::cout << "The number you entered is prime"; 
    }
    else 
        std::cout << "The number you entered is not prime"; 
    return 0;
}

int readValue() {
    std::cout << "Enter a number: "; 
    int x{}; 
    std::cin >> x; 
    return x; 
}

bool isPrime(int x) {
    if (x == 0 || x == 4 || x == 6 || x == 8 || x == 9) {
        return false;  
    }
    else 
        return true; 
    // you never need an if statement like this you can simply replace it with 
    // return x == 0 || x == 4 || x == 6 || x == 8 || x == 9;  
}
