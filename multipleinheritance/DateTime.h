//
// Created by Cici on 3/22/2019.
//
// Specification file for the DateTime class

#ifndef MULTIPLEINHERITANCE_DATETIME_H
#define MULTIPLEINHERITANCE_DATETIME_H

#include "Date.h"
#include "Time.h"
#include <string>

using namespace std;

class DateTime : public Date, public Time {
public:
// Default constructor
    DateTime();
// Constructor
    DateTime(int, int, int, int, int, int);

    // The showDateTime function displays the date and the time.
    void showDateTime() const;
};


#endif //MULTIPLEINHERITANCE_DATETIME_H
