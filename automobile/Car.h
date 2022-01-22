//
// Created by Cici on 3/22/2019.
//

#ifndef AUTOMOBILE_CAR_H
#define AUTOMOBILE_CAR_H

#include "Automobile.h"

// The Car class represents a car.
class Car : public Automobile{
private:
    int doors;

public:
    Car();// Default constructor
    Car(string, int, int, double, int);// Constructor #2

    int getDoors();// Accessor for doors attribute

};


#endif //AUTOMOBILE_CAR_H
