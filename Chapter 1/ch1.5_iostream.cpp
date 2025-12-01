#include <iostream> // input/output stream header file (contains cout, cin...)

/* 
 * std::cout is buffered, what this means is that any request that output should 
 * be sent to the console is not sent immediatley. Instead it enters a specific 
 * region of memory called a buffer where it waits in line with the other requests. 
 * Periodically the buffer is flushed, and all the data in the buffer is sent to 
 * its desired destination. 
 *
 * std::endl is often inefficent because not only does it output a newline to the
 * console but it also flushes the buffer, which is slow. So instead we can use 
 * the \n newline character which creates a newline without flushing (performs better). 
 * 
 * std::cin is the opposite of cout, instead of outputing data to the console it 
 * allows you to take data as an input from the console to your program. And isntead
 * of using the insertion operator we use the extraction operator. std::cin is also 
 * buffered, the individual characters you input are sent to a buffer. The >> operator
 * then takes the characters from the front of the buffer converting them into a value
 * that is assigned to the associated variable.
 *
 * note that each line of input data in the buffer is terminated by a \n character.
*/

int main () {
    std::cout << "Enter three numbers: "; 
    
    int x{}; 
    std::cin >> x; 

    int y{}; 
    std::cin >> y; 

    int z{}; 
    std::cin >> z; 
    
    std::cout << "You entered " << x << ", " << y << ", " << "and " << z << '\n'; 
    return 0;
}
