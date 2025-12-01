#include <iostream>

/* The main memory in your computer is your RAM, and when a program is ran the OS 
 * loads the program into RAM, and any literals are loaded at that point. 
 *
 * The OS is smart and also reserves some extra RAM for data to be loaded 
 * throughout the programs runtime (values entered by user, data read from file, etc.)
 * 
 * In C++ directley accessing the memory is discouraged, and therefore we access 
 * memory through an object (a region of storage, RAM or CPU register) which 
 * can hold data instead. So isntead of saying go get the value stored at this address 
 * we say go get the value stored by this object and let the compiler figure it out. 
 * 
 * A named object is called a variable. 
 *
 * At runtime the program will allocate a specific amount and location of memory
 * for a variable, where the actual data the variable holds will be located. 
 *
 * In c++ the data type of an object must be known at compile time (so the 
 * compiler knows how much memory to allocate) and that type cannot be changed
 * without recompiling the program that means if you have an int variable x, 
 * if you want x to store a string, then you will need to recompile the 
 * program declaring x as a string object.
 *
 * List initlization is great for new c++ programmers as it negates narrowing 
 * conversion. It also provides zero initializaiton when you initialize a variable 
 * using an empty list. 
*/

int main() {
    // Hi is a literal, as it is a string (any data 3, 'H') placed directley into the code 
    std::cout << "Hi";     
   
    // define a vraible named x, that holds an integer.
    int x;

    // you can assign a variable a value using the assignment = operator 
    x = 7; 
   
    // you can do define and assign a variable in one step: initializaiton
    int y = 7; 
    int j {19}; // {19} is the initializer, list-initialization 
    return 0;
}
