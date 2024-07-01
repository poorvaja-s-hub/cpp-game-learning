// while loops let you repeat sections of code as long as an expression is true.
// Here’s a generic form of the while loop:
// while (expression) statement;
// If expression is false, the program moves on to the statement after the loop. 
// If expression is true, the program executes statement and loops back 
// to test expression again. This cycle repeats until expression tests false, 
// at which point the loop ends.

#include <iostream>

int main() {
    int count = 0;

    std::cout << "=== While Loop Example ===" << std::endl;

    // Example of a simple countdown loop
    while (count <= 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }

    std::cout << "Loop Finished!" << std::endl;

    return 0;
}
