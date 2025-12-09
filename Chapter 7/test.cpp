#include <iostream> 

int readInteger(); // ask user to enter integer and return it
bool isGreater(int smaller, int larger); 

int main (int argc, char *argv[]) {
    
    int smaller {readInteger()}; 
    int larger {readInteger()}; 
  
    if (isGreater(smaller, larger)) {
        int temp = larger; // 2  
        larger = smaller; // 4  
        smaller = temp; 
        std::cout << "Swapping the values\n"; 
    } 

    std::cout << "The smaller value is " << smaller << "\nThe larger value is " << larger;
    return 0;
}

int readInteger() {
    std::cout << "Enter an integer: "; 
    int num {}; 
    std::cin >> num; 
    return num; 
}

bool isGreater(int smaller, int larger) {
    return (smaller > larger); 
}
