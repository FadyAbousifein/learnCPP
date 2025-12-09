#include <iostream> 
#include <random> 



int main (int argc, char *argv[]) {
    std::mt19937 mt{std::random_device{}()};
    playAgain:  
    std::cout << "Welcome to Hi-Low, please enter the min, max, and number of guesses: ";  
    int min {}; 
    int max {}; 
    int guesses {}; 
    std::cin >> min >> max >> guesses; 
    std::uniform_int_distribution range {min, max}; 
    int randomNum = range(mt);  
    int currentGuess {1}; 
    while (guesses > 0) {
        std::cout << "Guess #" << currentGuess << ": ";
        int userGuess {}; 
        std::cin >> userGuess;
        
        if (currentGuess > guesses) {
            std::cout << "You lose\nWould you like to play again (y/n)?";  
            char ans {}; 
            std::cin >> ans; 
            if (ans == 'y')
            {
                goto playAgain; 
            } else std::exit(0); 
        } 
        else if (userGuess == randomNum) {
            std::cout << "Correct! You win!\nWould you like to play again (y/n)?";  
            char ans {}; 
            std::cin >> ans; 
            if (ans == 'y')
            {
                goto playAgain; 
            } else std::exit(0); 

        }
        else if (userGuess > randomNum) {
            std::cout << "Too high!\n"; 
        } else  {
            std::cout << "Too low!\n"; 
        }
        currentGuess++; 
    }

    return 0;
}
