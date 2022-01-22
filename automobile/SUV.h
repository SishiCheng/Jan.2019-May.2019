//
// Created by Cici on 3/22/2019.
//

#ifndef AUTOMOBILE_SUV_H
#define AUTOMOBILE_SUV_H

#include "Automobile.h"

// The SUV class represents a SUV.
class SUV : public Automobile{
private:
    int passengers;

public:
    // Default constructor
    SUV();
    // Constructor #2
    SUV(string, int, int, double, int);
    // Accessor for passengers attribute
    int getPassengers();
};


#endif //AUTOMOBILE_SUV_H
