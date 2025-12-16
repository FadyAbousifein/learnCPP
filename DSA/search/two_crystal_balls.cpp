#include <array>
#include <cmath>
#include <iostream> 

template <std::size_t size> 
void two_crystal_balls(const std::array<int, size>& a) {
    int jump_amount = std::sqrt(a.size()); 
    int position {jump_amount}; 
    for( ; position < a.size(); position+=jump_amount) {
        if (a[position]) {
            break;  
        }
    }
    position-=jump_amount; 
    for (int i = position; i < jump_amount; i++) {
        if(a[i]) {
            std::cout << "The balls break at " << i << std::endl; 
            return; 
        } 
    }

    std::cout << "The balls do not break\n"; 
}

int main (int argc, char *argv[]) {
    constexpr std::array arr {0,0,0,0,0,0,0,0,0,1,1,1}; 
    two_crystal_balls(arr); 
    constexpr std::array arr1 {0,0,0,0,0,0,0}; 
    two_crystal_balls(arr1); 
    constexpr std::array arr2 {1,0,0,0,0,1,1,1}; 
    two_crystal_balls(arr); 
    constexpr std::array arr3 {0,0,0,0,0,0,0,0,0,1}; 
    two_crystal_balls(arr); 
    return 0;
}
