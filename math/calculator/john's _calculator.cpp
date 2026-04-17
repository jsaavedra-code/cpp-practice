// Welcome to John's Calculator
// This program performs several mathematical operations on numbers provided by the user.
// It includes input validation to ensure that the user enters valid numbers and handles
// invalid cases such as division by zero, invalid roots, and invalid logarithms.

#include <iostream>
#include <cmath> // For std::pow, std::log, and std::exp
#include <limits> // For std::numeric_limits
#include <string> // For std::string

// This function prompts the user for a double value and validates the input
// It continues to prompt until a valid number is entered
double readDouble(const std::string& prompt) {
    double value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            return value;
        }
    }
}

// This function prompts the user for an integer value and validates the input
// It continues to prompt until a valid integer is entered
int readInt(const std::string& prompt) {
    int value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            return value;
        }
    }
}

// Addition function
double add(double a, double b) {
    return a + b;
}

// Subtraction function
double subtract(double a, double b) {
    return a - b;
}

// Multiplication function
double multiply(double a, double b) {
    return a * b;
}

// Division function
double divide(double a, double b) {
    return a / b;
}

// Power function
double power(double base, double exponent) {
    return std::pow(base, exponent);
}

// Root function (calculates the nth root of a number)
double root(double base, int degree) {
    return std::pow(base, 1.0 / degree);
}

// Exponential function (calculates e raised to the power of x)
double exponential(double x) {
    return std::exp(x);
}

// Logarithm function (calculates the logarithm of a value to a specified base)
double logarithm(double base, double value) {
    return std::log(value) / std::log(base);
}

// Factorial function (calculates the factorial of a non-negative integer)
double factorial(int n) {
    double result = 1;

    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    double a, b;

    // Get first number
    a = readDouble("Enter the first number: ");

    // Get second number
    b = readDouble("Enter the second number: ");

    // Perform basic operations
    std::cout << "Sum: " << add(a, b) << std::endl;
    std::cout << "Difference: " << subtract(a, b) << std::endl;
    std::cout << "Product: " << multiply(a, b) << std::endl;

    // Division calculation with proper validation
    if (b == 0) {
        std::cout << "Quotient: Error - Division by zero is undefined." << std::endl;
    } else {
        std::cout << "Quotient: " << divide(a, b) << std::endl;
    }

    std::cout << "Power: " << power(a, b) << std::endl;

    // Root calculation with proper validation
    int degree;

    while (true) {
        degree = readInt("Enter the degree for the root: ");

        if (degree == 0) {
            std::cout << "Error: Root degree cannot be zero. Try again.\n";
        }
        else if (a < 0 && degree % 2 == 0) {
            std::cout << "Error: Even root of a negative number is not real. Try again.\n";
        }
        else {
            break;
        }
    }

    std::cout << "Root: " << root(a, degree) << std::endl;

    // Exponential calculation
    std::cout << "Exponential (e^x) using the first number: " << exponential(a) << std::endl;

    // Logarithm calculation with proper validation
    double logBase, logValue;

    while (true) {
        logBase = readDouble("Enter the base of the logarithm: ");

        if (logBase <= 0) {
            std::cout << "Error: The base of a logarithm must be greater than zero. Try again.\n";
        }
        else if (logBase == 1) {
            std::cout << "Error: The base of a logarithm cannot be 1. Try again.\n";
        }
        else {
            break;
        }
    }

    while (true) {
        logValue = readDouble("Enter the value of the logarithm: ");

        if (logValue <= 0) {
            std::cout << "Error: The value of a logarithm must be greater than zero. Try again.\n";
        }
        else {
            break;
        }
    }

    std::cout << "Logarithm: " << logarithm(logBase, logValue) << std::endl;

    // Factorial calculation with proper validation
    int n;

    while (true) {
        n = readInt("Enter a non-negative integer to calculate its factorial: ");

        if (n < 0) {
            std::cout << "Error: Factorial is not defined for negative numbers. Try again.\n";
        }
        else {
            break;
        }
    }

    std::cout << "Factorial: " << factorial(n) << std::endl;

    return 0;
}