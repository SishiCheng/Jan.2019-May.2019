// This program demonstrates Rectangle class exceptions
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    double width, length;
    bool tryAgain=true;
    // Create a Rectangle object
    Rectangle r;
    // Get the width and length
    cout << "Enter the rectangle's width: ";
    cin >> width;

   while(tryAgain) {
       try {
           r.setWidth(width);
           cout << "The width is " << r.getWidth() << endl;
           tryAgain=false;
       }
       catch (Rectangle::NegativeWidth) {
           cerr << "Please enter a nonnegative velue";
           cin >> width;
       }
   }

   cout << "Enter the rectangle's length: ";
   cin >> length;
   tryAgain=true;

    while(tryAgain){
        try {
            r.setWidth(length);
            cout << "The length is " << r.getLength() << endl;
            tryAgain=false;
        }
        catch (Rectangle::NegativeLength) {
                cerr << "The length is negative";
        }
    }
    cout << "\nEnd of the program.";
    return 0;
}