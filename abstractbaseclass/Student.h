//
// Created by Cici on 3/22/2019.
//
// Specification file for the Student class
#ifndef ABSTRACTBASECLASS_STUDENT_H
#define ABSTRACTBASECLASS_STUDENT_H

#include <string>

using namespace std;

class Student {
protected:
    string name;// Student name
    string idNumber;// Student ID
    int yearAdmitted;// Year student was admitted

public:
    Student();// Default constructor

    Student(string, string, int);// Constructor

    void set(string, string, int);// The set function sets the attribute data.
    // Assign the name
    // Assign the ID number
    // Assign the year admitted

    // Accessor functions
    string getName() const;
    string getidNumber() const;
    int getyearAdmitted() const;

    // Pure virtual function
    virtual int getRemaindinghour() const = 0;
};


#endif //ABSTRACTBASECLASS_STUDENT_H
