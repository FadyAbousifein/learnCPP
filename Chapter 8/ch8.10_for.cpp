#include <iostream> 

int sumTo(int value) {
    int sum {}; 
    for (int i = 1; i <= value; i++) {
        sum += i;   
    }
    return sum; 
}

void fizzbuzz(int countMax) {
    for (int i = 1; i <= countMax; i++) {
        bool printed = false;  
        if (i % 3 == 0) {
            std::cout << "fizz";
            printed = true; 
        }
        if (i % 5 == 0) {
            std::cout << "buzz";  
            printed = true; 
        }
        if (i % 7 == 0) {
            std::cout << "pop";  
            printed = true; 
        }

        if (printed == false) {
            std::cout << i;  
        }
        std::cout << std::endl;
    } 
}

int main (int argc, char *argv[]) {

    fizzbuzz(15); 
    return 0;
}
