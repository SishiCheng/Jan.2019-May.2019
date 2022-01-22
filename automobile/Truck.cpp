//
// Created by Cici on 3/22/2019.
//

#include "Truck.h"

Truck::Truck() {
    type=" ";
}

Truck::Truck(string m, int mo, int mi, double p, string t) : Automobile(m, mo, mi, p) {
    type=t;
}

string Truck::getType(){
    return type;
}