//
// Created by Cici on 3/22/2019.
//

#ifndef AUTOMOBILE_AUTOMOBILE_H
#define AUTOMOBILE_AUTOMOBILE_H

#include <string>

using namespace std;

// The Automobile class holds general data
// about an automobile in inventory.
class Automobile {
private:
    string make;// The auto's make
    int model;// The auto's year model
    int mileage;// The auto's mileage
    double price;// The auto's price

public:
    Automobile();// Default constructor

    // Constructor
    Automobile(string, int, int, double);
    // Accessors
    string getMake();
    int getModel();
    int getMileage();
    double getPrice();
};


#endif //AUTOMOBILE_AUTOMOBILE_H
