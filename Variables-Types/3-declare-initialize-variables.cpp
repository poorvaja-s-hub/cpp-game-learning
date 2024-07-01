#include <iostream>  // Includes the Input/Output Stream library

int main() {
    // Declare and initialize variables
    // You declare the type and name of the variable. 
    // You initialise it by giving it a value. 
    // Ex- int score = 0; score is of type int (INTEGER) and has a value of 0.
    int score = 0;  // Player's score
    int bonus = 10;  // Bonus points
    int penalty = 5;  // Penalty points

    // Perform some operations
    score += bonus;  // Add bonus points to the score
    score -= penalty;  // Subtract penalty points from the score

    // Print the results
    std::cout << "Current score: " << score << std::endl;

    return 0;  // Indicates that the program ended successfully
}
