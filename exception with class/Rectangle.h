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
    // Exception class
    class NegativeWidth {
    private:
        double value;

    public:
        NegativeWidth(double v) {
            value=v;
        }
        double getVal() const {
            return value;
        }

    };
    class NegativeLength {
    private:
        double value;
    public:
        NegativeLength(double v) {value=v;}
        double getVal() const { return value;}
    };
    //Default Constructor
    Rectangle();

    // Mutator functions, defined in Rectangle.cpp
    void setWidth(double);
    void setLength(double);

    double getWidth() const;

    double getLength() const;

    double getArea() const;
};


#endif //CONSTRUCTOR_RECTANGLE_H
