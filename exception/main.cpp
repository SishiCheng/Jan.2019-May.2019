#include <iostream>

using namespace std;
// This program demonstrates an exception being thrown and caught

// Function prototype
double divide(int, int);

int main() {
    int num1, num2;// To hold two numbers

    double quotient;// To hold the quotient of the numbers

    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // Get two numbers.

    try {
        quotient = divide(num1, num2);
        cout << "The quotient is " << quotient << endl;
    }
    catch (string exceptionString) {
        cout << exceptionString;
    }

    cout << "End of the program.\n";
// Divide num1 by num2 and catch any

    // potential exceptions.
    return 0;
}

// The divide function divides the numerator
// by the denominator. If the denominator is
// zero, the function throws an exception.
double divide(int n1, int n2) {
    if (n2==0) {
        string exception = "ERROR: Cannot divide by zero.\n";
        throw exception;
    }
    else return static_cast<double> (n1)/n2;
}