#include <iostream>

// Inline function to calculate the area of a rectangle
// The 'inline' keyword suggests to the compiler to expand this function at the point of call
// This can potentially reduce the overhead of a function call, especially for small functions like this one.
inline double rectangleArea(double length, double width) { 
    return length * width; // Area = length * width
}

int main() {
    double length, width; // Variables to store the length and width of the rectangle

    std::cout << "Enter length: ";
    std::cin >> length;

    std::cout << "Enter width: ";
    std:: cin >> width;

    std::cout << "Area of rectangle: " << rectangleArea(length, width) << std::endl; 

    return 0;
}