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
    // Declare 2 int variables x and y and let them hold the values 5 and 10
    int x = 5;
    int y = 10;

    // Print the value that x and y is pointing to by dereferencing the pointers
    cout << "x = " << x << "  | y = " << y << endl;

    // Swap the values
    cout << "Swapping...\n";
    int sum = swap(&x, &y);

    // Print the values x and y point to after the swap and the sum of them
    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;

    return 0;
}

// Function implementations
/*
    swap()
    Swap the values the 2 pointers point to and return the sum.
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