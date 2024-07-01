#include <iostream>  // Includes the Input/Output Stream library

int main() {
    // Declare and initialize variables
    int score = 0;  // Player's score
    int bonus = 10;  // Bonus points

    // Declare and initialize constants
    // You cannot change the value of these variables, they remain constant throughout
    const int MAX_SCORE = 100;  // Maximum possible score
    const int MIN_SCORE = 0;  // Minimum possible score

    // Perform some operations
    score += bonus;  // Add bonus points to the score

    // Print the results
    std::cout << "Current score: " << score << std::endl;
    std::cout << "Maximum score: " << MAX_SCORE << std::endl;
    std::cout << "Minimum score: " << MIN_SCORE << std::endl;

    return 0;  // Indicates that the program ended successfully
}
