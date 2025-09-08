// COMSC-210 | Lab 5 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
using namespace std;

// Function prototypes
int swap(int*, int*);

// Main function
int main()
{
    // Dynamically declare 2 pointers x and y
    int* x = nullptr;
    int* y = nullptr;
    x = new int;
    y = new int;

    // Assign 5 and 10 to the memory locations x and y point to
    *x = 5;
    *y = 10;

    // Print the value that x and y is pointing to by dereferencing the pointers
    cout << "x = " << *x << "  | y = " << *y << endl;

    // Swap the values
    cout << "Swapping...\n";
    int sum = swap(x, y);

    // Print the values x and y point to after the swap and the sum of them
    cout << "x = " << *x << " | y = " << *y << endl;
    cout << "sum = " << sum << endl;

    // Delete the pointers
    delete x;
    delete y;

    return 0;
}

// Function implementations
/*
    swap()
    Allows the user to enter 2 int pointers. The function will swap them and return the sum value
    Arguments: 2 int pointers
    Returns: the sum of the 2 numbers
*/
int swap(int* a, int* b) 
{
    // Create a new int value and let it hold the value pointer a is pointing to
    int temp = *a;

    // Let pointer a points to the value pointer b is pointing to
    *a = *b;
    
    // Let pointer b points to the value of temp
    *b = temp;

    // Return the sum of the values the 2 pointers are pointing to
    return *a + *b;    // We dereference the pointers to get the values
}