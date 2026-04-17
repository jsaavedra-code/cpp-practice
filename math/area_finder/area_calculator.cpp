#include <iostream>
#include <cmath> // For std::pow (power function)
#include <limits> // For std::numeric_limits (to handle input errors)
#include <string> // For std::string (to handle prompts)

double readDouble(const std::string& prompt) { // Function to read a double value from the user with error handling
    double value;

    while (true) {
        std::cout << prompt; // Display the prompt to the user
        std::cin >> value; // Attempt to read a double value from the user

        if (std::cin.fail()) { // Check if the input operation failed (e.g., user entered non-numeric input)
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear();  // Clear the error state of the input stream
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the rest of the input until a newline character is found
        } else {
            return value; // If the input is valid, return the value
        }
    }
}

// Function to calculate the area of a circle given its radius
double find_circle_area(double radius) { 
    const double PI = 3.141592653589793; // Define a constant for the value of pi
    return PI * std::pow(radius, 2); // Area of a circle is π times the radius squared
}

// Function to calculate the area of a rectangle given its length and width
double find_rectangle_area(double length, double width) {
    return length * width; // Area of a rectangle is length multiplied by width
}

// Function to calculate the area of a triangle given its base and height
double find_triangle_area(double base, double height) {
    return 0.5 * base * height; // Area of a triangle is 0.5 times the base multiplied by the height
}

// Main function to execute the area calculations
int main() {
    double radius, length, width, base, height; // Variables to store user input for the dimensions of the shapes

    radius = readDouble("Enter the radius of the circle: "); // Read the radius of the circle from the user
    std::cout << "Area of the circle: " << find_circle_area(radius) << std::endl;

    length = readDouble("Enter the length of the rectangle: "); // Read the length of the rectangle from the user
    width  = readDouble("Enter the width of the rectangle: "); // Read the width of the rectangle from the user
    std::cout << "Area of the rectangle: " << find_rectangle_area(length, width) << std::endl;

    base   = readDouble("Enter the base of the triangle: "); // Read the base of the triangle from the user
    height = readDouble("Enter the height of the triangle: "); // Read the base and height of the triangle from the user
    std::cout << "Area of the triangle: " << find_triangle_area(base, height) << std::endl;

    return 0;
}