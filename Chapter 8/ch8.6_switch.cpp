#include <iostream> 

int calculate(int num1, int num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2; 
        case '*':
            return num1 * num2;
        case '/':
            return num1/num2;
        default: 
            std::cout << "Error"; 
            return 0; 
    }
}

int main (int argc, char *argv[]) {
    int x{}; 
    int y{};
    char op {}; 

    std::cin >> x >> y >> op; 
    std::cout << calculate(x, y, op); 


    return 0;
}
