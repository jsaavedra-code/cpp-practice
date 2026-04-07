#include <iostream>
#include <string>
#include <limits>

// I decided to limit the system to 10 products for simplicity
const int MAX_PRODUCTS = 10;

struct Product
{
    int id;
    std::string name;
    int quantity;
    double price;
};

Product products[MAX_PRODUCTS];

// This keeps track of how many products are currently stored
int count = 0;

// Adds a new product to the system
// Uses "count" as the position where the new product will be stored
void addProduct()
{   
    // If inventory is full, stop immediately
    if (count >= MAX_PRODUCTS)
    {
        std::cout << "Inventory full \n";
        return;  // No need for else, we exit early
    }

    std::cout << "Enter the details of the product you want to add: " << std::endl;

    // Store each value at index [count]
    std::cout << "Enter the id of the product: ";
    std::cin >> products[count].id;

    // Clear leftover newline before getline
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the name of the product: ";
    std::getline(std::cin, products[count].name);

    std::cout << "Enter the quantity of the product: ";
    std::cin >> products[count].quantity;

    std::cout << "Enter the price of the product: ";
    std::cin >> products[count].price;

    // Move to next available slot
    count++;
}

// Displays all products currently stored
// Loops from 0 to count (only valid products)
void displayProducts()
{
    for (int i = 0; i < count; i++)
    {
        std::cout << "Product: " << i + 1 << "\n";

        std::cout << "id: " << products[i].id << "\n";
        std::cout << "Name: " << products[i].name << "\n";
        std::cout << "Quantity: " << products[i].quantity << "\n";
        std::cout << "Price: " << products[i].price << "\n";

        std::cout << "-----------------------------" << std::endl;
    }
}

// Searches for a product by ID
void searchProduct()
{
    int id;
    bool found = false;  // helps track if we found it or not

    std::cout << "Enter the id of the product you want to find: ";
    std::cin >> id;

    // Check each stored product
    for (int j = 0; j < count; j++)
    {
        if (id == products[j].id)
        {
            std::cout << "The product you are looking for is: \n";

            std::cout << "id: " << products[j].id << "\n";
            std::cout << "Name: " << products[j].name << "\n";
            std::cout << "Quantity: " << products[j].quantity << "\n";
            std::cout << "Price: " << products[j].price << "\n";

            std::cout << "-----------------------------" << std::endl;

            found = true;
            return;  // stop once we find it
        }
    }

    // If loop ends and nothing matched
    if (!found)
    {
        std::cout << "Product not found" << std::endl;
        return;
    }
}

// Updates an existing product
void updateProduct()
{
    int id;
    bool found = false;

    std::cout << "Enter the id of the product you want to update: ";
    std::cin >> id;

    // Find the product first
    for (int k = 0; k < count; k++)
    {
        if (id == products[k].id)
        {
            // Show current data before updating
            std::cout << "The product you want to update is: \n";

            std::cout << "id: " << products[k].id << "\n";
            std::cout << "Name: " << products[k].name << "\n";
            std::cout << "Quantity: " << products[k].quantity << "\n";
            std::cout << "Price: " << products[k].price << "\n";

            std::cout << "-----------------------------" << std::endl;

            // Replace values at same index (no new product, just overwrite)
            std::cout << "Enter the new details to update the product: " << std::endl;

            std::cout << "Enter a new id: ";
            std::cin >> products[k].id;

            // Clear leftover newline before getline
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Enter a new name: ";
            std::getline(std::cin, products[k].name);

            std::cout << "Enter a new quantity: ";
            std::cin >> products[k].quantity;

            std::cout << "Enter a new price: ";
            std::cin >> products[k].price;

            std::cout << "Product updated successfully" << std::endl;

            found = true;
            return;
        }
    }

    if (!found)
    {
        std::cout << "Product not found, unable to update" << std::endl;
        return;
    }
}

// Deletes a product from the system
void deleteProduct()
{
    int id;
    bool found = false;

    std::cout << "Enter the id of the product you want to delete: ";
    std::cin >> id;

    // Find the product index
    for (int m = 0; m < count; m++)
    {
        if (id == products[m].id)
        {
            // Shift everything left to "remove" the product
            // This avoids leaving empty gaps in the arrays
            for (int n = m; n < count - 1; n++)
            {
                products[n] = products[n + 1];
            }

            // Reduce total number of products
            count--;

            std::cout << "Product successfully deleted \n";
            std::cout << "-----------------------------" << std::endl;

            found = true;
            return;
        }
    }

    if (!found)
    {
        std::cout << "Product not found, there is nothing to delete" << std::endl;
        return;
    }
}

// Main menu system
int main()
{
    int option;

    // Runs continuously until user chooses to exit
    while (true)
    {
        std::cout << "Welcome to the Inventory Management System" << std::endl;
        std::cout << "1. Add Product" << std::endl;
        std::cout << "2. Display Products" << std::endl;
        std::cout << "3. Search Product" << std::endl;
        std::cout << "4. Update Product" << std::endl;
        std::cout << "5. Delete Product" << std::endl;
        std::cout << "6. Exit" << std::endl;

        std::cout << "Please enter an option: ";
        std::cin >> option;

        // Each option triggers a specific function
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
                std::cout << "Thanks for using my program \n";
                std::cout << "Exiting..." << std::endl;
                return 0;  // ends program completely

            default:
                std::cout << "Please enter a valid option" << std::endl;
        }
    }
}