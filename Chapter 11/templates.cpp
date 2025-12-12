#include <iostream>

// write your add function template here
template <typename type> 
type add(type num1, type num2) {
    return num1 + num2; 
}

template <typename type> 
type mult(type num1, int num2) {
    return num1 * num2; 
}

template <typename type1, typename type2> 
 auto sub(type1 num1, type2 num2) {
    return num1 - num2; 
}

int main() {
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';
    
    std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

    std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';
	return 0;
}
