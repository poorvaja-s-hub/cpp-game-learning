#include <iostream>  // Includes the Input/Output Stream library

int main() {  // Entry point of the program where execution starts

    // Declare and initialize variables
    // You declare the type and name of the variable. 
    // You initialise it by giving it a value.
    int num1 = 10;  // First number
    int num2 = 5;   // Second number

    // Perform arithmetic operations
    int sum = num1 + num2;       // Addition (+)
    int difference = num1 - num2; // Subtraction(-)
    int product = num1 * num2;   // Multiplication(*)
    int quotient = num1 / num2;  // Division(/)
    int remainder = num1 % num2; // Modulus (remainder of division)(%)

    // Print results to the console
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    std::cout << "Sum: " << num1 << " + " << num2 << " = " << sum << std::endl;
    std::cout << "Difference: " << num1 << " - " << num2 << " = " << difference << std::endl;
    std::cout << "Product: " << num1 << " * " << num2 << " = " << product << std::endl;
    std::cout << "Quotient: " << num1 << " / " << num2 << " = " << quotient << std::endl;
    std::cout << "Remainder: " << num1 << " % " << num2 << " = " << remainder << std::endl;

    return 0;  // Indicates that the program ended successfully
}
