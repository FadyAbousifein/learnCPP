#include <iostream>

template <typename T>
T max(T x, double  y)
{
    return (x < y) ? y : x;
}

std::string max(int y, std::string h) {
    return "Hi"; 
}

int main()
{
    std::cout << max(2, 3) << '\n';  // compile error

    return 0;
}
