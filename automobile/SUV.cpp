//
// Created by Cici on 3/22/2019.
//

#include "SUV.h"

SUV::SUV() {
    passengers=0;
}

SUV::SUV(string m, int mo, int mi, double p, int pa) : Automobile(m, mo, mi, p){
    passengers=pa;
}

int SUV::getPassengers() {
    return passengers;
}