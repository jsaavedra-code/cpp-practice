#include <iostream>
#include <limits> // For std::numeric_limits

double find_average(int arr[3]) { // Function to calculate the average of three integers
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += arr[i]; // Add each element of the array to the sum
    }

    return sum / 3.0; // Return the average as a double (sum divided by 3)
}

int main() {
    int arr[3];

    for (int i = 0; i < 3; i++) { // Loop to get three integers from the user 
        while (true) {   // Input validation to ensure the user enters valid integer
            std::cout << "Enter number " << i + 1 << ": ";
            std::cin >> arr[i];

            if (std::cin.fail()) { // Check if the input is not an integer
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the invalid input
                std::cout << "Invalid input. Please enter an integer." << std::endl;
            } else {
                break; // Break the loop if a valid integer is entered
            }
        }
    }

    double avg = find_average(arr); // Call the function to calculate the average and store the result in avg

    std::cout << "Average: " << avg << std::endl; 

    return 0;
}