#include <iostream>
using namespace std;

// I decided to limit the system to 10 products for simplicity
// Each array stores one attribute of every product
int product_id[10];
string product_name[10];
int product_quantity[10];
double product_price[10];

// This keeps track of how many products are currently stored
int count = 0;

// Adds a new product to the system
// Uses "count" as the position where the new product will be stored
void addProduct() 
{   
    // If inventory is full, stop immediately
    if (count >= 10)
    {
        cout << "Inventory full \n";
        return;  // No need for else, we exit early
    }

    cout << "Enter the details of the product you want to add: " << endl;

    // Store each value at index [count]
    cout << "Enter the id of the product:";
    cin >> product_id[count];

    cout << "Enter the name of the product:";
    cin >> product_name[count];

    cout << "Enter the quantity of the product:";
    cin >> product_quantity[count];

    cout << "Enter the price of the product:";
    cin >> product_price[count];

    // Move to next available slot
    count++;
}

// Displays all products currently stored
// Loops from 0 to count (only valid products)
void displayProducts() 
{
    for (int i = 0; i < count; i++)
    {
        cout << "Product " << i + 1 << "\n";

        cout << "id: " << product_id[i] << "\n";
        cout << "Name: " << product_name[i] << "\n";
        cout << "Quantity: " << product_quantity[i] << "\n";
        cout << "Price: " << product_price[i] << "\n";

        cout << "-----------------------------" << endl;
    }
}

// Searches for a product by ID
void searchProduct()
{
    int id;
    bool found = false;  // helps track if we found it or not

    cout << "Enter the id of the product you want to find: ";
    cin >> id;

    // Check each stored product
    for (int j = 0; j < count; j++)
    {
        if (id == product_id[j])
        {
            cout << "The product you are looking for is: \n";

            cout << "id: " << product_id[j] << "\n";
            cout << "Name: " << product_name[j] << "\n";
            cout << "Quantity: " << product_quantity[j] << "\n";
            cout << "Price: " << product_price[j] << "\n";

            cout << "-----------------------------" << endl;

            found = true;
            return;  // stop once we find it
        }
    }

    // If loop ends and nothing matched
    if (found == false)
    {
        cout << "Product not found" << endl;
        return;
    }
}

// Updates an existing product
void updateProduct()
{
    int id;
    bool found = false;

    cout << "Enter the id of the product you want to update: ";
    cin >> id;

    // Find the product first
    for (int k = 0; k < count; k++)
    {
        if (id == product_id[k])
        {
            // Show current data before updating
            cout << "The product you want to update is: \n";

            cout << "id: " << product_id[k] << "\n";
            cout << "Name: " << product_name[k] << "\n";
            cout << "Quantity: " << product_quantity[k] << "\n";
            cout << "Price: " << product_price[k] << "\n";

            cout << "-----------------------------" << endl;

            // Replace values at same index (no new product, just overwrite)
            cout << "Enter the new details to update the product: " << endl;

            cout << "Enter the id of the product:";
            cin >> product_id[k];

            cout << "Enter the name of the product:";
            cin >> product_name[k];

            cout << "Enter the quantity of the product:";
            cin >> product_quantity[k];

            cout << "Enter the price of the product:";
            cin >> product_price[k];

            cout << "Product updated successfully" << endl; 

            found = true;
            return;
        }
    }

    if (found == false)
    {
        cout << "Product not found, unable to update" << endl;
        return;
    }
}

// Deletes a product from the system
void deleteProduct()
{
    int id;
    bool found = false;

    cout << "Enter the id of the product you want to delete: ";
    cin >> id;

    // Find the product index
    for (int m = 0; m < count; m++)
    {
        if (id == product_id[m])
        {
            // Shift everything left to "remove" the product
            // This avoids leaving empty gaps in the arrays
            for (int n = m; n < count - 1; n++)
            {
                product_id[n] = product_id[n + 1];
                product_name[n] = product_name[n + 1];
                product_quantity[n] = product_quantity[n + 1];
                product_price[n] = product_price[n + 1];
            }

            // Reduce total number of products
            count--;

            cout << "Product successfully deleted \n";
            cout << "-----------------------------" << endl;

            found = true;
            return;
        }
    }

    if (found == false)
    {
        cout << "Product not found, there is nothing to delete" << endl;
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
        cout << "Welcome to the Inventory Management System" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Display Products" << endl;
        cout << "3. Search Product" << endl;
        cout << "4. Update Product" << endl;
        cout << "5. Delete Product" << endl;
        cout << "6. Exit" << endl;

        cout << "Please enter an option: ";
        cin >> option; 

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
                cout << "Thanks for using my program \n";
                cout << "Exiting..." << endl;
                return 0;  // ends program completely

            default:
                cout << "Please enter a valid option" << endl;
        }
    }
}