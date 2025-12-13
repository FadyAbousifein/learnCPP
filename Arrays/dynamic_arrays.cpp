#include <cstddef>
#include <iostream> 
#include <limits>
#include <string_view>
#include <vector>

template <typename type>
void printVector(const std::vector<type>& vec) {
    for (std::size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";   
    } std::cout << std::endl;
}

template <typename type> 
void findNumber(const std::vector<type>& vec, double num) {
   for (std::size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == num) {
            std::cout << "The number " << num << " has index " << i; 
            return; 
        } 
   } std::cout << "The number " << num << " was not found";  
}

template <typename type> 
type getNumber() {
    type num {}; 
    do {
        std::cout << "Enter a number between 1 and 9: "; 
        std::cin >> num; 
        
        if (!std::cin) {
            std::cin.clear(); 
        } 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    } while (num < 1 || num > 9);  
    return num; 
}

template <typename type> 
type findMax(const std::vector<type>& vec) {
    if (vec.size() == 0)
        return type {};  
     type max {vec[0]};  
    for (std::size_t i = 1; i < vec.size(); i++) {
        if (vec[i] > max) {
            max = vec[i];  
        } 
    }
    return max; 
}

int main (int argc, char *argv[]) {
    
    std::vector data1 { 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2 { -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3 { };
    std::cout << findMax(data3) << '\n';
    return 0;
}
