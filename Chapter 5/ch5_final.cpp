#include <iostream> 
#include <string>
#include <string_view>

int readAge(int personNum, std::string_view personName); 
std::string readName(int personNum); 
bool isOlder(int age1, int age2); 

int main (int argc, char *argv[]) {
    std::string name1 {readName(1)};
    int age1 {readAge(1, name1)};

    std::string name2 = readName(2); 
    int age2 {readAge(2, name2)}; 
    
    if (isOlder(age1, age2)) {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << "(age " << age2 << ")\n"; 
    } else {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << "(age " << age1 << ")\n"; 
    }

    return 0;
}

std::string readName(int personNum) {
    std::cout << "Enter the name of person #" << personNum << ": "; 
    std::string name {}; 
    std::getline(std::cin >> std::ws, name); 
    return name;
}

int readAge(int personNum, std::string_view personName) {
    std::cout << "Enter the age of " << personName << ": "; 
    int age {}; 
    std::cin >> age; 
    return age; 
}

bool isOlder(int age1, int age2) {
    return age1 > age2; 
}
