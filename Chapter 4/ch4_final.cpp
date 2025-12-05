#include <iostream>

double readValue(); 
char readSymbol(); 
double compute(double x, double y, char operation); 

int main (int argc, char *argv[]) {
    double num1{readValue()}; 
    double num2{readValue()}; 
    char operation{readSymbol()};  
    
    std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << compute(num1, num2, operation);
    return 0;
}

double readValue() {
    std::cout << "Enter a double value: "; 
    double x{}; 
    std::cin >> x; 
    return x; 
}

char readSymbol() {
    std::cout << "Enter +, -, *, or /: "; 
    char symbol{}; 
    std::cin >> symbol; 
    return symbol; 
}

double compute(double x, double y, char operation) {
    if (operation == '+') {
        return x + y;  
    }
    else if (operation == '-') {
        return x - y;  
    }
    else if (operation == '*') {
        return x * y;  
    }
    else return x / y; 

}
