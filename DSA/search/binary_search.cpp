#include <array>
#include <iostream> 

template <typename type, std::size_t size>
void binary_search(const std::array<type, size>& array, type value) {
    int left {0}; 
    int right {static_cast<int>(array.size()) - 1}; 
    int midpoint {left + (right - left)/2}; 
   
    while (left <= right) {
        if (array[midpoint] > value) {
            right = midpoint - 1;  
        } else if (array[midpoint] == value) {
            std::cout << "The value " << value << " is at index " << midpoint
                << std::endl;
            return; 
        } else {
            left = midpoint + 1;
        }
        midpoint = left + (right - left)/2; 
    }
    std::cout << "The value " << value << " is not found" << std::endl; 
}

int main (int argc, char *argv[]) {
    constexpr std::array arr1 {1,2,3,4,4,5}; 
    binary_search(arr1, 4); 
   
    constexpr std::array arr2 {1,2,3,4,4,5}; 
    binary_search(arr2, 9); 

    constexpr std::array arr3 {"able", "booe", "cant", "zo"}; 
    binary_search(arr3, "cant"); 

    return 0;
}
