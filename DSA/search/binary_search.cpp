#include <array>
#include <iostream> 

template <std::size_t size> 
void binary_search(const std::array<int, size>& arr, int value) {
    std::size_t l {0}; 
    std::size_t r {arr.size() - 1}; 
    std::size_t m {l + (r-l)/2}; 

    while (l <= r) {
        if (arr[m] == value) {
            std::cout << "Value found";  
            return; 
        } else if (arr[m] > value) {
            r = m - 1;  
        } else {
            l = m + 1; 
        } 
        m = l + (r-l)/2;         
    }
    std::cout << "No value found"; 

}

int main (int argc, char *argv[]) {
    constexpr std::array arr1 {1,2,3,4,4,5}; 
    binary_search(arr1, 2); 
   
    constexpr std::array arr2 {1,2,3,4,4,5}; 
    binary_search(arr1, 9); 
    
    return 0;
}
