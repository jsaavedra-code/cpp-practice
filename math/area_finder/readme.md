# Area Calculator (C++)

This program calculates the area of three basic geometric shapes: a circle, a rectangle, and a triangle. It asks for user input, validates it, and produces results without crashing—which is already more than can be said for most rushed student code.

## 📌 Description

The program prompts the user for the required dimensions of each shape and calculates their areas using separate functions. Input validation is implemented to ensure the program does not fail when the user inevitably enters something that is not a number.

## 🎯 Objective

* Practice function design in C++
* Apply mathematical formulas in code
* Implement input validation using `cin.fail()`
* Improve code structure and readability

## ⚙️ How It Works

* The program requests:

  * Radius for the circle
  * Length and width for the rectangle
  * Base and height for the triangle
* Each input is validated using a reusable function (`readDouble`)
* If invalid input is detected:

  * The program clears the error
  * Ignores bad input
  * Asks again
* Valid values are passed to dedicated functions:

  * `find_circle_area`
  * `find_rectangle_area`
  * `find_triangle_area`
* Results are displayed immediately

## 🧠 Concepts Used

* Functions
* Input validation (`cin.fail()`, `cin.clear()`, `cin.ignore()`)
* Loops (`while`)
* Mathematical operations
* Constants and standard libraries (`<cmath>`, `<limits>`)
* Code reuse

## 📎 Notes

The program is intentionally straightforward, but not careless. Input validation is included because assuming users behave correctly is an optimistic strategy with a poor track record.

## 👤 Author
John Saavedra  
GitHub: [https://github.com/jsaavedra-code](https://github.com/jsaavedra-code)  
