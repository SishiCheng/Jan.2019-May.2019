#include "Student.h"//
// Created by Cici on 3/22/2019.
//

#include "Student.h"
#include <string>

using namespace std;

Student::Student() {
    name=" ";
    idNumber=" ";
    yearAdmitted=0;
}// Default constructor

Student::Student(string n, string i, int y) {
    name=n;
    idNumber=i;
    yearAdmitted=y;
}// Constructor

void Student::set(string n, string i, int y) {
    name=n;
    idNumber=i;
    yearAdmitted=y;
}// The set function sets the attribute data.
// Assign the name
// Assign the ID number
// Assign the year admitted

// Accessor functions
string Student::getName() const {
    return  name;
}
string Student::getidNumber() const {
    return idNumber;
}
int Student::getyearAdmitted() const {
    return yearAdmitted;
}

