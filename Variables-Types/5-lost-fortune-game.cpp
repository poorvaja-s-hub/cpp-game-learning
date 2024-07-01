#include <iostream>  // Includes the Input/Output Stream library
#include <string>    // Includes the string library for string operations

int main() {

    // Declare and initialize variables
    const int GOLD_PIECES = 900;  // Constant for the starting gold pieces
    int adventurers = 0;  // Number of adventurers
    int killedAdventurers = 0; //number of adventurers who have died
    int survivors = 0; // Gold to share among the adventurers

    // Print welcome message and game setup
    std::cout << "*** Lost Fortune ***" << std::endl;
    std::cout << "Welcome to the Lost Fortune game!" << std::endl;
    std::cout << "Answer the following questions to claim your lost fortune." << std::endl;

    // Get input from the user - use cin to take input (>>)
    std::cout << "Enter the number of adventurers: ";
    std::cin >> adventurers;  // Read number of adventurers
    std::cout << "Enter the number of dead adventurers: ";
    std::cin >> killedAdventurers; // Read the number of dead adventurers
    
    // Calculate gold to share among the survivors
    survivors = GOLD_PIECES - killedAdventurers;

    // Display results based on user input
    std::cout << "\nYou bravely led " << adventurers << " adventurers on a quest." << std::endl;
    std::cout << "Sadly, " << killedAdventurers << " adventurers did not survive." << std::endl;
    std::cout << "Only " << survivors << " adventurers survived and you now have your fortune." << std::endl;

    return 0;  // Indicates that the program ended successfully
}
