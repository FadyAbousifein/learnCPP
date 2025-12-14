#include <iostream>

// write your add function template here
template <typename type> 
type add(type num1, int  num2) {
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

template <int N> 
void print() {
    std::cout << N << std::endl; 
}

int main() {
    short s {}; 
	std::cout << add(2, s) << '\n';
	return 0;
}
