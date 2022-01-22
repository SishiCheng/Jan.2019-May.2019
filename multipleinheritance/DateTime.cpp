//
// Created by Cici on 3/22/2019.
//
// Implementation file for the DateTime class

#include <iostream>
#include <string>
#include "DateTime.h"

using namespace std;

// Default constructor
// Note that this constructor does nothing other
// than call default base class constructors
DateTime::DateTime() : Date(), Time(){}

// Constructor
// Note that this constructor does nothing other
// than call base class constructors
DateTime::DateTime(int a, int m, int y, int h, int mi, int s) : Date(a, m, y), Time(h, mi, s) {}

// The showDateTime function displays the date and the time.
void DateTime::showDateTime() const {
    // Display the date in the form MM/DD/YYYY.
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
    cout << getHour() << ":" << getMin() << ":" << getSec() << endl;
}