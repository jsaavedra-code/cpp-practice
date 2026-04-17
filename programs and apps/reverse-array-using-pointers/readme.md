# Reverse Array Using Pointers (C++)

This is a short C++ program created as part of a class assignment. The goal of this exercise is to practice using pointers and pointer arithmetic to reverse an array in-place by swapping elements from both ends.

# 📌 Description

The program defines a fixed array of integers and uses two pointers to reverse the array. One pointer starts at the beginning of the array while the other starts at the end. The pointers move toward each other, swapping elements as they go, until they meet in the middle.

# 🎯 Objective

- Understand how pointers work in C++
- Learn how to use pointer arithmetic to navigate arrays
- Practice swapping values using pointers and temporary variables
- Reinforce memory addressing and pointer manipulation concepts
- Implement an in-place array reversal algorithm

# ⚙️ How It Works

1. Two pointers are initialized: one at the first element and one at the last element
2. A while loop continues as long as the start pointer is less than the end pointer
3. Inside the loop, the values at both pointers are swapped using a temporary variable
4. The start pointer is incremented (moves forward) and the end pointer is decremented (moves backward)
5. The loop terminates when the pointers meet in the middle
6. The reversed array is printed to the console

# 📎 Notes

This program is intentionally simple and short since it was created as a classroom exercise focused on a specific concept. The array size is hardcoded to 5 elements.

# 👤 Author  
John Saavedra  
GitHub: https://github.com/jsaavedra-code  