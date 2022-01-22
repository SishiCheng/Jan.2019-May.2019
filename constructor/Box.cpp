//
// Created by Cici on 3/21/2019.
//

#include "Box.h"

Box::Box() : Rectangle() {
    height=0.0;
    volume=0.0;
}

Box::Box(double w, double l, double h) : Rectangle(w, l) {
    height=h;
    volume=getArea()*h;
}

double Box::getHeight() const {
    return height;
}

double Box::getVolume() const {
    return volume;
}