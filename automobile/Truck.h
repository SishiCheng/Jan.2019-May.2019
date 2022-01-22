//
// Created by Cici on 3/22/2019.
//

#ifndef AUTOMOBILE_TRUCK_H
#define AUTOMOBILE_TRUCK_H

#include <string>
#include "Automobile.h"

using namespace std;
// The Truck class represents a truck.
class Truck : public Automobile {
private:
    string type;

public:
    Truck();
// Default constructor
// Constructor #2

    Truck(string, int, int, double, string);
    // Accessor for driveType attribute

    string getType();
};


#endif //AUTOMOBILE_TRUCK_H
