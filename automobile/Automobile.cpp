//
// Created by Cici on 3/22/2019.
//

#include "Automobile.h"
#include <string>

using namespace std;
Automobile::Automobile() {
    make="0";
    model=0;
    mileage=0;
    price=0;
}

Automobile::Automobile(string m, int mo, int mi, double p) {
    make=m;
    model=mo;
    mileage=mi;
    price=p;
}

string Automobile::getMake() {
    return make;
}

int Automobile::getModel() {
    return model;
}

int Automobile::getMileage() {
    return mileage;
}

double Automobile::getPrice() {
    return price;
}