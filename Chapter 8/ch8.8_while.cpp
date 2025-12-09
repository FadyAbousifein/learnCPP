#include <iostream>

int main()
{
    // outer loops between 1 and 5
    int outer{ 1 };
    while (outer <= 5)
    {
        int inner{8-outer};
        int letter{outer}; 
        while (inner > 0)
        {
            std::cout << ' ';
            --inner;
        }
        
        while (letter >= 1 ) {
            std::cout << letter << ' ';  
            letter--; 
        }


        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    } // inner destroyed here

    return 0;
}
