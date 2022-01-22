//
// Created by Cici on 3/22/2019.
//
// Specification file for the CsStudent class

#ifndef ABSTRACTBASECLASS_CSSTUDENT_H
#define ABSTRACTBASECLASS_CSSTUDENT_H

#include "Student.h"

// Constants for required hours
const int MATH_HOUR = 20;// Math hours
const int CS_HOUR = 40;// Computer science hours
const int GEN_ED_HOUR = 60;// General Ed hours

class CsStudent : public Student {
private:
    int mathHours;// Hours of math taken
    int csHours;// Hours of Computer Science taken
    int genHours;// Hours of general education taken

public:
    CsStudent();// Default constructor
    CsStudent(string, string, int);// Constructor
    // Mutator functions
    void setmathHours(int);
    void setcsHours(int);
    void setgenHours(int);
    // Overridden getRemainingHours function,
    // defined in CsStudent.cpp
    virtual int getRemaindinghour() const;
};


#endif //ABSTRACTBASECLASS_CSSTUDENT_H
