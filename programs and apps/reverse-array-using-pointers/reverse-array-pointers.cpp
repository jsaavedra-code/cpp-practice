// This program reverses an array using pointers in C++.

#include <iostream>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *start = arr; // Pointing to the first element of the array
    int *end = arr + 4; // Pointing to the last element of the array

    while (start < end){ // Loop until the start pointer is less than the end pointer
        int temp = *start; // Store the value at the start pointer in a temporary variable
        *start = *end; // Assign the value at the end pointer to the start pointer
        *end = temp; // Assign the value stored in the temporary variable to the end pointer

        start++; 
        end--;
    }

    for (int i = 0; i < 5; i++){ // Print the reversed array
        std::cout << arr[i] << " ";
    }

    return 0;
}