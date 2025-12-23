#include <vector> 
#include <iterator> 
#include <iostream> 

int main (int argc, char *argv[]) {
    std::vector<int> vec {1,2,3,4}; 
    std::vector<int>::iterator it {vec.begin()}; 
    vec.erase(it); 
    std::cout << *it; 
    return 0;
}
