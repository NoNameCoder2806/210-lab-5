// COMSC-210 | Lab 5 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
using namespace std;

// Function prototypes
int swap(int*, int*);

// Main function
int main() {
    // Declare 2 pointers x and y
    int* x = nullptr;
    int* y = nullptr;

    // Assign x to point at number 5, y to point at number 10
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
    return 0;
}

// Function implementations
/*
    swap()
    Allows the user to enter 2 int pointers. The function will swap them and return the sum value
    Arguments: 2 int pointers
    Returns: the sum of the 2 numbers
*/
int swap(int* a, int* b) {
    int temp = *a;
    a = b;
    *b = temp;
    return *a + *b;
}