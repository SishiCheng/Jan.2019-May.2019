// This program demonstrates an exception being thrown and caught.
#include <iostream>

using namespace std;

//Function prototype
double divideNum(int, int);

int main() {
    int numerator, denominator;//To hold two numbers

    double quotient;// To hold the quotient of the numbers

    // Get two numbers.
    cout << "Enter the numerator and denominator:";
    cin >> numerator >> denominator;
    // Divide num1 by num2 and catch any
    try{
        quotient=divideNum(numerator,denominator);
        cout << quotient;
    }
    catch (string exceptionString) {
        cout << exceptionString;
    }
    // potential exceptions.

    cout << "End of program.";

    return 0;
}

//*********************************************
// The divide function divides the numerator •
//by the denominator. If the denominator is
// zero, the function throws an exception.
//*******************•*************************
double divideNum(int n, int d) {
    if(d==0) {
        string exceptionString="The denominator can't be 0.\n";
        throw exceptionString;
    }
    else return static_cast<double>(n)/d;
}