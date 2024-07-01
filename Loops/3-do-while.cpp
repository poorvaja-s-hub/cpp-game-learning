//Like while loops, do loops let you repeat a section of code based on an expression.
//The difference is that a do loop tests its expression after each loop iteration. 
// This means that the loop body is always executed at least once. 

// Here’s a generic form of a do loop:
//  do
//      statement;
//  while(expression);

// The program executes the statment and as long as the expression is true it keeps running.
// Once it is false, it stops. 




#include <iostream>

int main() {
    int guess = 0;
    const int secretNumber = 7;

    std::cout << "=== Do-While Loop Example ===" << std::endl;

    // Example of a simple guessing game using a do-while loop
    do {
        std::cout << "Guess the secret number (between 1 and 10): ";
        std::cin >> guess;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
        }
    } while (guess != secretNumber);

    std::cout << "Game Over!" << std::endl;

    return 0;
}
