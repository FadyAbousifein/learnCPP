#include <array>
#include <iostream> 

template <typename type, std::size_t size> 
void bubble_sort(std::array<type, size>& a) {
    for(int i = 0; i < a.size() - 1; i++) {
        for(int j = 0; j < a.size() - 1 - i; j++) {
            if(a[j] > a[j+1]) {
                type temp {a[j]}; 
                a[j] = a[j+1]; 
                a[j+1] = temp;
            }
        }
    }

    for(auto item : a) {
        std::cout << item << " "; 
    }
}


int main (int argc, char *argv[]) {
    std::array a {5,3,421,3,2,56,6}; 
    bubble_sort(a); 
    return 0;
}
