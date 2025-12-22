#include <array>
#include <iostream>

template <typename type, std::size_t size> 
std::size_t partition(std::array<type, size>& array, std::size_t start, std::size_t end) {
    type pivot {array[start]}; 
    std::size_t l {start}; 
    std::size_t r {end}; 
    while (l < r) {
        while (array[l] <= pivot) {
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
    type temp {array[start]}; 
    array[start] = array[r]; 
    array[r] = temp;
    return r; 
}

template <typename type, std::size_t size> 
void quicksort(std::array<type, size>& array, std::size_t start, std::size_t end) {
    if (start > end) {
        return;  
    }

    std::size_t pivot = partition(array, start, end); 
    quicksort(array, start, pivot - 1); 
    quicksort(array, pivot + 1, end); 
}

int main (int argc, char *argv[]) {
    std::array array {1,345,6,7,8,3,1324,34,56,6};
    quicksort(array, 0, array.size()-1); 

    for (auto i : array) {
        std::cout << i << ",";  
    } std::cout << std::endl;
    return 0;
}
