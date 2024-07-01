// The for loop lets you repeat a section of code, 
// but for loops are particularly suited for counting and moving through 
// a sequence of things.

// Here’s the generic form of for loop:

// for (initialization; test; action) statement;

// initialization is a statement that sets up some initial condition for the loop. 
// (For example, it might set a counter variable to 0.) 
// The expression test is tested each time before the loop body executes, 
// just as in a while loop. 
// If test is false, the program moves on to the statement after the loop.
// If test is true, the program executes statement. Next, action is executed 
// (which often involves incrementing a counter variable). 
// The cycle repeats until test is false, at which point the loop ends.

#include <iostream>

int main() {
    std::cout << "=== For Loop Example ===" << std::endl;

    // Example of iterating over numbers using a for loop
    for (int i = 1; i <= 5; i++) {
        std::cout << "Number: " << i << std::endl;
    }

    std::cout << "Loop Finished!" << std::endl;

    return 0;
}
