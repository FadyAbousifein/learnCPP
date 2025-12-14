#include <array>
#include <iostream> 

template <typename type, std::size_t size> 
void linear_search(const std::array<type, size>& arr, type value) {
    for (std::size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == value) {
            std::cout << "Value found" << std::endl; 
            return; 
        }  
    } std::cout << "Value not found" << std::endl; 
}

int main (int argc, char *argv[]) {
    constexpr std::array arr1 {1,2,3,4,4,5}; 
    linear_search(arr1, 2); 
   
    constexpr std::array arr2 {1,2,3,4,4,5}; 
    linear_search(arr1, 9); 
    
    constexpr std::array arr3 {"hi", "hello", "he"}; 
    linear_search(arr3, "hi"); 

    return 0;
}
