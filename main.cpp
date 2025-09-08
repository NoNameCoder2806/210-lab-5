// COMSC-210 | Lab 5 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
using namespace std;

// Function prototypes
int swap(int &, int &);

// Main function
int main() {
    int x = 5, y = 10;
    cout << "x = " << x << "  | y = " << y << endl;

    cout << "Swapping...\n";
    int sum = swap(x, y);
    cout << "x = " << x << " | y = " << y << endl;
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
int swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return a + b;
}