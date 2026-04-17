# Average of Three Numbers with Input Validation (C++)

This program calculates the average of three integers entered by the user. It includes basic input validation to ensure the program does not break when invalid data is provided.

## 📌 Description

The program prompts the user to enter three integers. Each input is validated to ensure it is a correct numeric value. The values are stored in an array and passed to a function that calculates the average.

## 🎯 Objective

* Practice arrays and loops in C++
* Understand how to pass arrays to functions
* Implement input validation using `cin.fail()`
* Perform arithmetic operations safely

## ⚙️ How It Works

* The user is prompted to enter three integers
* Each input is validated:

  * If invalid, the program clears the error and asks again
* Valid inputs are stored in an array
* The function `find_average`:

  * Iterates through the array
  * Calculates the sum
  * Divides by `3.0` to produce a decimal result
* The average is displayed

## 🧠 Concepts Used

* Arrays
* Functions
* Loops (`for`, `while`)
* Input validation (`cin.fail()`, `cin.clear()`, `cin.ignore()`)
* Basic arithmetic
* Return values

## 📎 Notes

The program uses a fixed-size array as required. Input validation is included to prevent invalid user input from affecting execution. The implementation is intentionally straightforward, with no unnecessary complexity.

## 👤 Author
John Saavedra  
GitHub: https://github.com/jsaavedra-code

--
