// This program demonstrates a recursive function to
// calculate the factorial of a number.
#include <iostream>

using namespace std;

// Function prototype
int factorial(int n);

int main() {
    int num;
    // Get a number from the user.
    cout << "Enter a number:";
    cin >> num;
    // Display the factorial of the number.
    cout << factorial(num);
    return 0;
}

//**************************************************************
// Definition of factorial. A recursive function to calculate *
// the factorial of the parameter n.*
//**************************************************************

int factorial(int n) {
    if(n==0) return 1;
    else {
        return n*factorial(n-1);
    }
}
// Base case

// Recursive case