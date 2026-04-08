#include <iostream>
#include <string>
#include <limits>

const int MAX_PRODUCTS = 10;

struct Product
{
    int id;
    std::string name;
    int quantity;
    double price;
};

Product products[MAX_PRODUCTS];
int count = 0;

// Clears cin after invalid input
void clearInput()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Reads an integer safely
int readInt(const std::string& prompt)
{
    int value;

    while (true)
    {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail())
        {
            std::cout << "Invalid input. Please enter a whole number.\n";
            clearInput();
        }
        else
        {
            clearInput();
            return value;
        }
    }
}

// Reads a double safely
double readDouble(const std::string& prompt)
{
    double value;

    while (true)
    {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail())
        {
            std::cout << "Invalid input. Please enter a valid number.\n";
            clearInput();
        }
        else
        {
            clearInput();
            return value;
        }
    }
}

// Reads a full line safely
std::string readLine(const std::string& prompt)
{
    std::string text;
    std::cout << prompt;
    std::getline(std::cin, text);
    return text;
}

void addProduct()
{
    if (count >= MAX_PRODUCTS)
    {
        std::cout << "Inventory full.\n";
        return;
    }

    std::cout << "\nEnter the details of the product you want to add:\n";

    products[count].id = readInt("Enter the id of the product: ");
    products[count].name = readLine("Enter the name of the product: ");
    products[count].quantity = readInt("Enter the quantity of the product: ");
    products[count].price = readDouble("Enter the price of the product: ");

    count++;

    std::cout << "Product added successfully.\n";
    std::cout << "-----------------------------\n";
}

void displayProducts()
{
    if (count == 0)
    {
        std::cout << "No products in inventory.\n";
        std::cout << "-----------------------------\n";
        return;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << "Product " << i + 1 << "\n";
        std::cout << "ID: " << products[i].id << "\n";
        std::cout << "Name: " << products[i].name << "\n";
        std::cout << "Quantity: " << products[i].quantity << "\n";
        std::cout << "Price: " << products[i].price << "\n";
        std::cout << "-----------------------------\n";
    }
}

void searchProduct()
{
    if (count == 0)
    {
        std::cout << "No products in inventory.\n";
        std::cout << "-----------------------------\n";
        return;
    }

    int id = readInt("Enter the id of the product you want to find: ");

    for (int i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            std::cout << "The product you are looking for is:\n";
            std::cout << "ID: " << products[i].id << "\n";
            std::cout << "Name: " << products[i].name << "\n";
            std::cout << "Quantity: " << products[i].quantity << "\n";
            std::cout << "Price: " << products[i].price << "\n";
            std::cout << "-----------------------------\n";
            return;
        }
    }

    std::cout << "Product not found.\n";
    std::cout << "-----------------------------\n";
}

void updateProduct()
{
    if (count == 0)
    {
        std::cout << "No products in inventory.\n";
        std::cout << "-----------------------------\n";
        return;
    }

    int id = readInt("Enter the id of the product you want to update: ");

    for (int i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            std::cout << "Current product details:\n";
            std::cout << "ID: " << products[i].id << "\n";
            std::cout << "Name: " << products[i].name << "\n";
            std::cout << "Quantity: " << products[i].quantity << "\n";
            std::cout << "Price: " << products[i].price << "\n";
            std::cout << "-----------------------------\n";

            std::cout << "Enter the new details:\n";
            products[i].id = readInt("Enter a new id: ");
            products[i].name = readLine("Enter a new name: ");
            products[i].quantity = readInt("Enter a new quantity: ");
            products[i].price = readDouble("Enter a new price: ");

            std::cout << "Product updated successfully.\n";
            std::cout << "-----------------------------\n";
            return;
        }
    }

    std::cout << "Product not found. Unable to update.\n";
    std::cout << "-----------------------------\n";
}

void deleteProduct()
{
    if (count == 0)
    {
        std::cout << "No products in inventory.\n";
        std::cout << "-----------------------------\n";
        return;
    }

    int id = readInt("Enter the id of the product you want to delete: ");

    for (int i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                products[j] = products[j + 1];
            }

            count--;

            std::cout << "Product successfully deleted.\n";
            std::cout << "-----------------------------\n";
            return;
        }
    }

    std::cout << "Product not found. There is nothing to delete.\n";
    std::cout << "-----------------------------\n";
}

int main()
{
    int option;

    while (true)
    {
        std::cout << "\nWelcome to the Inventory Management System\n";
        std::cout << "1. Add Product\n";
        std::cout << "2. Display Products\n";
        std::cout << "3. Search Product\n";
        std::cout << "4. Update Product\n";
        std::cout << "5. Delete Product\n";
        std::cout << "6. Exit\n";

        option = readInt("Please enter an option: ");

        switch (option)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                std::cout << "Thanks for using my program.\n";
                std::cout << "Exiting...\n";
                return 0;

            default:
                std::cout << "Please enter a valid option.\n";
                std::cout << "-----------------------------\n";
        }
    }
}