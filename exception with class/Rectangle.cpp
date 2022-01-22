//
// Created by Cici on 3/21/2019.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    width=0.0;
    length=0.0;
}

void Rectangle::setWidth(double w) {
    if (w>=0) {
        width=w;
    }
    else throw NegativeWidth(w);
}
void Rectangle::setLength(double l) {
    if (l>=0) length=l;
    else throw NegativeLength(l);
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