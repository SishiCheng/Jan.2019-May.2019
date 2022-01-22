#include <iostream>
#include "DateTime.h"

// This program demonstrates a class with multiple inheritance.

int main() {
    DateTime d;// Define a DateTime object and use the default
    // constructor to initialize it.

    // Display the object's date and time.
    d.showDateTime();
    // Define a DateTime object and initialize it

    // with the date 2/4/1960 and the time 5:32:27.
    DateTime pastDay(2, 4, 1960, 5, 32, 27);
    // Display the object's date and time.
    pastDay.showDateTime();

    return 0;
}