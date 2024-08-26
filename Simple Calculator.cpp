#include <iostream>

int main() {
    // Declare variables for the two numbers and the operator
    double num1, num2;
    char op;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the calculation based on the operator
    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            break;
    }

    return 0;
}

