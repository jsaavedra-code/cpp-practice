# John’s Calculator (C++)

A console-based calculator that performs multiple mathematical operations with input validation. It accepts user input, checks that it makes sense, and produces results without crashing under basic misuse.

## 📌 Description

This program allows the user to perform several mathematical operations, including:

* Basic arithmetic (addition, subtraction, multiplication, division)
* Power and root calculations
* Exponential function ((e^x))
* Logarithms with custom base
* Factorial

The program includes input validation to prevent invalid operations such as division by zero, undefined logarithms, and invalid roots.

## 🎯 Objective

* Practice function-based program design in C++
* Implement mathematical operations using `<cmath>`
* Apply input validation using `cin.fail()`
* Separate logic (calculation) from control (user input handling)

## ⚙️ How It Works

1. The program prompts the user to enter numerical values.
2. Input is validated using reusable functions (`readDouble`, `readInt`).
3. Each mathematical operation is handled by its own function.
4. Additional validation is applied where required:

   * Division checks for zero denominator
   * Root checks for invalid combinations (e.g., even root of negative number)
   * Logarithm checks for invalid base and value
   * Factorial ensures non-negative integers
5. Results are displayed directly in the console.

## 🧠 Concepts Used

* Functions
* Loops (`while`, `for`)
* Conditional logic (`if`, `else`)
* Input validation (`cin.fail()`, `cin.clear()`, `cin.ignore()`)
* Mathematical functions (`std::pow`, `std::log`, `std::exp`)
* Separation of concerns (calculation vs input handling)

## 📎 Notes

The program is designed to be robust against common input errors. It does not assume the user will behave correctly, which is statistically justified.

While not intended to replace a real calculator, it successfully avoids producing undefined or misleading results under typical misuse.

## 👤 Author  
John Saavedra  
GitHub: https://github.com/jsaavedra-code

