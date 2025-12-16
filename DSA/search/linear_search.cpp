#include <array>
#include <iostream> 

template <typename type, std::size_t size> 
void linear_search(const std::array<type, size>& a, type value) {
    for(int i = 0; i < a.size(); i++) {
        if (a[i] == value) {
            std::cout << "The value " << value << " is at index " << i << std::endl; 
            return;
        }
    } std::cout << "The value " << value << " is not in the array\n"; 
}

int main (int argc, char *argv[]) {
    constexpr std::array arr1 {1,3,3,4,2,5}; 
    linear_search(arr1, 2); 
   
    constexpr std::array arr2 {1,2,3,4,4,5}; 
    linear_search(arr2, 9); 
    
    constexpr std::array arr3 {"heee", "hi", "he"}; 
    linear_search(arr3, "hi"); 
    
    constexpr std::array arr4 {"heee", "hi", "he", "i"}; 
    linear_search(arr4, "i"); 

    return 0;
}
