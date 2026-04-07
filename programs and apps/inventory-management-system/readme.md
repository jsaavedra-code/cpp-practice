# Inventory Management System (C++)

## Overview

This project is a simple Inventory Management System built in C++.
It allows the user to store and manage product data using basic programming concepts such as arrays, loops, functions, and conditionals.

The system runs in the console and provides a menu where the user can interact with the inventory.

---

## Objective

The goal of this project is to practice:

* Working with arrays to store related data
* Using functions to organize code into logical operations
* Applying loops and conditionals to control program flow
* Handling basic user input and output

---

## Features

The program supports the following operations:

* **Add Product**
  Adds a new product by entering its ID, name, quantity, and price.

* **Display Products**
  Shows all stored products in a structured format.

* **Search Product**
  Finds a product using its ID and displays its details.

* **Update Product**
  Allows modifying an existing product’s information.

* **Delete Product**
  Removes a product from the system and shifts the remaining data to keep the structure consistent.

* **Exit**
  Ends the program.

---

## How It Works

* The system stores product data using parallel arrays:

  * `product_id[]`
  * `product_name[]`
  * `product_quantity[]`
  * `product_price[]`

* A variable called `count` keeps track of how many products are currently stored.

* Each function performs a specific operation on these arrays:

  * Adding increases `count`
  * Deleting shifts elements and decreases `count`
  * Searching and updating iterate through existing products

---

## Limitations

* The system supports up to 10 products
* Product names do not support spaces (due to input method)
* No file storage (data is lost when the program ends)
* No input validation for incorrect data types

---

## Example Usage

```
Welcome to the Inventory Management System
1. Add Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Exit
```

---

## Key Concepts Used

* Arrays
* Functions
* Loops (`for`, `while`)
* Conditional statements (`if`, `switch`)
* Basic input/output (`cin`, `cout`)

---

## Final Notes

This project focuses on clarity and core logic rather than complexity.
It demonstrates how a basic CRUD system (Create, Read, Update, Delete) can be implemented using fundamental C++ concepts.

---

## Author

John Saavedra  
GitHub: https://github.com/jsaavedra-code