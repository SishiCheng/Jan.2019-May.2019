//
// Created by Cici on 3/22/2019.
//
// Specification file for the Time class

#ifndef MULTIPLEINHERITANCE_TIME_H
#define MULTIPLEINHERITANCE_TIME_H


class Time {
protected:
    int hour;
    int min;
    int sec;

public:
// Default constructor
    Time();
// Constructor
    Time(int, int ,int);
// Accessor function
    int getHour() const;
    int getMin() const;
    int getSec() const;
};


#endif //MULTIPLEINHERITANCE_TIME_H
