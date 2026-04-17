// This code demonstrates the relationship between arrays and pointers in C++.

# include <iostream>
int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int *arr_pty = array; // arr_pty points to the first element of the array

    for (int i = 0; i < 5; i++) {
        std::cout << *(arr_pty + i) << " "; // Accessing array elements using pointer arithmetic
    }
    return 0;
}