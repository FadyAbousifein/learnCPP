#include <iostream> 
#include <vector>

template <typename type> 
void printVector(const std::vector<type> vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";  
    } std::cout << std::endl;  
}

template <typename type> 
void printElement(const std::vector<type>& vec, int index) {
    if (index < 0 || index > static_cast<int>(vec.size()) - 1) {
        std::cout << "Invalid index" << std::endl;  
    } else std::cout << "The element has value " << vec[index] <<  std::endl; 
}


int main (int argc, char *argv[]) {
    std::vector vec {1,4,9,16,25}; 
    std::vector<double> temp(365); 
    
    int sum {}; 
    int product {1}; 
    std::vector<int> userInputVector (3);
    std::cout << "Enter 3 integers: "; 
    for (int i = 0; i < 3; i++) {
        std::cin >> userInputVector[i];
        sum += userInputVector[i]; 
        product *= userInputVector[i]; 
    }
    std::cout << "The sum is: " << sum << "\nThe product is: " << product << std::endl;

    std::vector word {'h', 'e', 'l', 'l', 'o'}; 
    std::cout << "The length of the array is " << std::size(word) << std::endl; 
    std::cout << word[1] << word.at(1); 
    
    std::vector vector {1,2,4,5,6}; 
    printVector(vector); 

    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);
    return 0;
}
