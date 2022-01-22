#include <iostream>
#include "Box.h"

using namespace std;

int main() {
    double width;//to hold the box width
    double length;
    double height;

    cout << "Please enter the width of the box: ";
    cin >> width;

    cout << "Please enter the length of the box: ";
    cin >> length;

    cout << "Please enter the height of the box: ";
    cin >> height;

    Box b(width, length, height);

    cout << "Here are the box properties:\n"
         << "width " << b.getWidth() <<endl
         << "length " << b. getLength() <<endl
         << "height " << b.getHeight() <<endl
         << "base area " << b.getArea() <<endl
         << "volume " << b.getVolume();
}
// To hold the box's length
// To hold the box's height

// Get the width, length, and height from the user.

// Define a Box object.

// Display the Box object's properties.