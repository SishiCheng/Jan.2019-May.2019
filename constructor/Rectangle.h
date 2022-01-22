//
// Created by Cici on 3/21/2019.
//

#ifndef CONSTRUCTOR_RECTANGLE_H
#define CONSTRUCTOR_RECTANGLE_H


class Rectangle {
private:
    double width;
    double length;

public:
    //Default Constructor
    Rectangle();

    //constructor#2
    Rectangle(double, double);

    double getWidth() const;

    double getLength() const;

    double getArea() const;
};


#endif //CONSTRUCTOR_RECTANGLE_H
