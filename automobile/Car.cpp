//
// Created by Cici on 3/22/2019.
//

#include "Car.h"

Car::Car() {
    doors=0;
}

Car::Car(string m, int mo, int mi, double p, int d) : Automobile(m, mo, mi, p) {
    doors=d;
}

int Car::getDoors() {
    return doors;
}