#include <iostream> 
#include <array> 

template <typename type, std::size_t size> 
std::array<type, size> createArray() {
    std::array<type, size> arr {};  
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a value: "; 
        std::cin >> arr[i]; 
    } 
    return arr; 
}

template <typename type, std::size_t size>
void printArray(const std::array<type, size>& arr) {
    std::cout << "The array ("; 
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << ", " ; 
    }
    std::cout << "\b\b) has length " << arr.size() << std::endl; 
}

int main (int argc, char *argv[]) {
    constexpr std::array arr1 { 1, 4, 9, 16 };
    printArray(arr1);

    constexpr std::array arr2 { 'h', 'e', 'l', 'l', 'o' };
    printArray(arr2); 
    return 0;
}
