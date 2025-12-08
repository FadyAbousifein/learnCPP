#include <iostream> 
#include <string>
#include <string_view>

int main (int argc, char *argv[]) {
    std::cout << "Enter your full name: "; 

    std::string name {};
    std::getline(std::cin >> std::ws, name); 

    std::cout << "Enter your age: "; 

    int age {}; 
    std::cin >> age; 

    std::cout << "Your age + Length of name is: " << name.length() + age; 

    std::string_view viewer = name; 
    name = "changed"; 
    std::cout << '\n' << viewer; 
     

    return 0;
}

