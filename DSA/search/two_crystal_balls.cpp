#include <array>
#include <cmath>
#include <iostream> 

template <typename type, std::size_t size> 
void two_crystal_balls(const std::array<type, size>& arr, type value) {
    std::size_t j = std::sqrt(arr.size()); 
    std::size_t first_break {}; 
    for (std::size_t i {}; i < j; i+=j) {
        if (arr[i] == value) {
            first_break = i; 
            break; 
        } 
    }
    for (std::size_t i {}; i < j; i++) {
        if (arr[i] == value) {
            std::cout << "value found " << i;
            return; 
        } 
    }
    std::cout << "value not found"; 
}

int main (int argc, char *argv[]) {
    constexpr std::array arr {0,0,0,0,0,0,0,0,0,1,1,1,1,1}; 
    two_crystal_balls(arr, 1); 
    return 0;
}
