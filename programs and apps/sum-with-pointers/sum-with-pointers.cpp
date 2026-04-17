// This program demonstrates how to use pointers to calculate the sum of two integers in C++.

#include <iostream>
int main(){
    int a = 5, b = 7;
    int *p1 = &a; // Pointer to variable a
    int *p2 = &b; // Pointer to variable b

    int sum = *p1 + *p2; // Dereference pointers to get values and calculate sum

    std::cout << "Sum: " << sum << std::endl; 

    return 0;
}