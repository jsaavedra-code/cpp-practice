// C++ program to find the largest element in an array using pointers

#include <iostream>
int main(){
    int arr[5] = {10, 25, 7, 89, 32}; // Sample array
    int *ptr = arr; // Pointer to the first element of the array
    int largest = *ptr; // Initialize largest with the first element of the array

    for (int i = 1; i < 5; i++){
        if (*(ptr + i) > largest){ // Compare current element with largest
            largest = *(ptr + i); // Update largest if current element is greater
        }
    }

    std::cout << "Largest element: " << largest << std::endl;
    return 0;
}