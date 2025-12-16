#include <array>
#include <iostream> 

template <typename type, std::size_t size> 
void binary_search(const std::array<type, size>& a, type value) {
    int l {}; 
    int r {static_cast<int>(a.size())-1};
    int m {l + (r-l)/2}; 

    while (l <= r) {
        if (a[m] == value) {
            std::cout << "The value " << value << " is at index " << m << std::endl;
            return; 
        } else if (a[m] > value) {
            r = m - 1; 
            m = l + (r-l)/2; 
        } else {
            l = m + 1; 
            m = l + (r-l)/2; 
        }
    }
    std::cout << "The value " << value << " is not in the array\n"; 
}

int main (int argc, char *argv[]) {
    constexpr std::array arr1 {1,2,3,4,5,6,7,7,8}; 
    binary_search(arr1, 3); 
   
    constexpr std::array arr2 {0,1}; 
    binary_search(arr2, 3); 

    constexpr std::array arr3 {"able", "booe", "cant", "zo"}; 
    binary_search(arr3, "cant"); 

    return 0;
}
