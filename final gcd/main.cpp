// This program demonstrates a recursive function to calculate
// the greatest common divisor (gcd) of two numbers.
#include <iostream>

using namespace std;

// Function prototype
int gcd(int, int);

int main() {
    int num1, num2;
    // Get two numbers.
    cout << "Please enter two numbers:";
    cin >> num1 >>num2;
    // Display the GCD of the numbers.
    cout << gcd(num1,num2);

    return 0;
}

//**********************************************************
// Definition of gcd. This function uses recursion to*
// calculate the greatest common divisor of two integers,*
// passed into the parameters x and y.*
//**********************************************************

int gcd(int n1, int n2) {
    if(n1%n2==0) return n2;
    else gcd(n2, n1%n2);
}
// Base case

// Recursive case