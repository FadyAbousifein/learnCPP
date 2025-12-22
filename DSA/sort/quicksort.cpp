#include <array>
#include <iostream>

template <typename type, std::size_t size> 
std::size_t partition(std::array<type, size>& array, std::size_t l, std::size_t r) {
    type pivot {array[l]};  
    while (array[l] <= pivot ) {
        l++; 
    }
    while (array[r] > pivot) {
        r--; 
    } 
    if (l < r) {
        type temp {array[l]}; 
        array[l] = array[r]; 
        array[r] = temp; 
    } 
}
int main (int argc, char *argv[]) {
    
    return 0;
}
