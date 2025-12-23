#include <array>
#include <iostream>

template <typename type, std::size_t size> 
int partition(std::array<type, size>& array, int start, int end) {
    type pivot {array[start]}; 
    int i {static_cast<int>(start)};
    int j {static_cast<int>(end)}; 
    while (i < j) {
        while (array[i] <= pivot) i++; 
        while (array[j] > pivot) j--; 
        if (i < j) {
            type temp {array[i]}; 
            array[i] = array[j]; 
            array[j] = temp;
        }
    } 
    type temp {pivot}; 
    array[start] = array[j]; 
    array[j] = temp;
    return j; 
}

template <typename type, std::size_t size> 
void quicksort(std::array<type, size>& array, int start, int end) {
   if (start < end) {
        int pivot {partition(array, start, end)}; 
        quicksort(array, start, pivot-1); 
        quicksort(array, pivot+1, end); 
    }
}

int main (int argc, char *argv[]) {
    std::array array {99999,345,6,7,8,3,1324,34,56,6};
    quicksort(array, 0, array.size()-1); 

    for (auto i : array) {
        std::cout << i << ",";  
    } std::cout << std::endl;
    return 0;
}
