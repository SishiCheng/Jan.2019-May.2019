//
// Created by Cici on 3/22/2019.
//
// Specification file for the Date class

#ifndef MULTIPLEINHERITANCE_DATE_H
#define MULTIPLEINHERITANCE_DATE_H


class Date {
protected:
    int day;
    int month;
    int year;

public:
    Date();// Default constructor

    Date(int, int, int);// Constructor

// Accessors
    int getDay() const;
    int getMonth() const;
    int getYear() const;
};


#endif //MULTIPLEINHERITANCE_DATE_H
