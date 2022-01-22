//
// Created by Cici on 3/21/2019.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    width=0.0;
    length=0.0;
}

Rectangle::Rectangle(double w, double l) {
    width=w;
    length=l;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return width*length;
}