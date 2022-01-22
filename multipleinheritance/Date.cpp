#include "Date.h"//
// Created by Cici on 3/22/2019.
//

#include "Date.h"
Date::Date() {
    day=0;
    month=0;
    year=0;
}// Default constructor

Date::Date(int d, int m, int y) {
    day=d;
    month=m;
    year=y;
}// Constructor

// Accessors
int Date::getDay() const {
    return day;
}
int Date::getMonth() const {
    return month;
}
int Date::getYear() const {
    return year;
}