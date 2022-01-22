// This program demonstrates a function template
// with two type parameters.
#include <iostream>
#include <iomanip>

using namespace std;
// Template definition for square function
template <class T>
T sum(const T val, const T val2) {
    return val+val2;
}

template <class T>
T sum(const T val, const T val2, const T val3) {
    return val+val2+val3;
}

int main() {
    double num1, num2, num3;

    cout << "Enter two values: ";
    cin >> num1 >> num2;
    cout << "Their sum is " << sum(num1, num2) << endl;

    cout << "Enter three values: ";
    cin >> num1 >> num2 >> num3;
    cout << "Their sum is " << sum(num1, num2, num3) << endl;
    return 0;
}