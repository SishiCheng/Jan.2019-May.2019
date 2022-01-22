#include "CsStudent.h"//
// Created by Cici on 3/22/2019.
//

#include "CsStudent.h"
#include <iostream>

using namespace std;

CsStudent::CsStudent() {
    mathHours=0;
    csHours=0;
    genHours=0;
}// Default constructor

CsStudent::CsStudent(string n, string i, int r) : Student(n, i, r) {
    mathHours=0;
    csHours=0;
    genHours=0;
}// Constructor

// Mutator functions
void CsStudent::setmathHours(int m) {
    mathHours=m;
}
void CsStudent::setcsHours(int c) {
    csHours=c;
}
void CsStudent::setgenHours(int g) {
    genHours=g;
}
// Overridden getRemainingHours function,
// defined in CsStudent.cpp

//****************************************************
// The CsStudent::getRemainingHours function returns the number of hours remaining to be taken.
int CsStudent::getRemaindinghour() const {
    int reqhours;// Total required hours
    int remainhours;// Remaining hours
    reqhours=MATH_HOUR+CS_HOUR+GEN_ED_HOUR;// Calculate the required hours
    remainhours=reqhours-(mathHours+csHours+genHours);// Calculate the remaining hours.
    return  remainhours;// Return the remaining hours.
}