//
// Created by Cici on 3/21/2019.
//

#ifndef CONSTRUCTOR_BOX_H
#define CONSTRUCTOR_BOX_H

#include "Rectangle.h"

class Box : public Rectangle {
protected:
    double height;
    double volume;

public:
    Box();

    Box(double, double, double);

    double getHeight() const;

    double getVolume() const;
};


#endif //CONSTRUCTOR_BOX_H
