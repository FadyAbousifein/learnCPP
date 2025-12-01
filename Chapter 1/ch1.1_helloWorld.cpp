// #include is a preprocesor directive which tells the preprocessor to include the
// the code in the contents of iostream which allows us to read and write
// text to/from the console (contains cout etc)
#include <iostream>

// the main function is where every program starts and finishes, failing to include
// it will cause a linking error
int main () {
    std::cout << "Hello World"; 
    return 0; // 0 = good, otherwise something happened!
} 

// Note: Iostream is a header file that contains the decleration of cout 
// however the actual definition is in the std library which is linked during
// the compiliation process
