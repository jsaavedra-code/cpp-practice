#include <iostream>
#include <limits>

bool is_even(int n) {  // boolean function to check if a number is even, returns true if n is even, false otherwise
    return n % 2 == 0;
}

int main() {
    int number; // variable to store the user input

    while (true) { // loop until valid input is received
        std::cout << "Enter an integer: ";
        std::cin >> number;

        if (std::cin.fail()) { // check if the input is valid
            std::cout << "Invalid input. Please enter a valid integer.\n";
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard the invalid input
        } else {
            break; // valid input received, exit the loop
        }
    }

    if (is_even(number)) {
        std::cout << number << " is even." << std::endl; // call the is_even function and print the result
    } else {
        std::cout << number << " is odd." << std::endl; // call the is_even function and print the result
    }

    return 0;
}