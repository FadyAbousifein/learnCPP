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
 *
 * >> Operator: if std::cin failed extraction prior to the current extraction, this 
 * extracition will not even be attempted (aborts immediatley). Leading whitespace
 * characters (spaces, tabs, newlines) are discareded from the input buffer. Only if 
 * the buffer is empty will the user be prompted to enter more data. >> will 
 * extract as many characters as it can until a newline is encountered or a character
 * that is not valid for the variable. 
*/

int main () {
    // print text to the console 
    std::cout << "Enter two numbers: "; 

    // initalize two variables 
    int x{}; 
    int y{};

    // read from the character input stream twice
    // case 1: [ ,4, ,5,/n] -> [ ,5,\n] -> [\n]: x = 4, y = 5
    // case 2: [ ,4,\n, ,5,\n] -> [\n, ,5,\n] -> [\n]: x = 4, y = 5
    std::cin >> x >> y; 
    std::cout << "The numbers you entered are " << x << " and " << y << '\n'; 
    return 0;
}
