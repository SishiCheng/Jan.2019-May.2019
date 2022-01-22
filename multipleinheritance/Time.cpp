//
// Created by Cici on 3/22/2019.
//

#include "Time.h"

Time::Time() {
    hour=0;
    min=0;
    sec=0;
}
// Constructor
Time::Time(int h, int m,int s) {
    hour=h;
    min=m;
    sec=s;
}
// Accessor function
int Time::getHour() const {
    return hour;
}
int Time::getMin() const {
    return min;
}
int Time::getSec() const {
    return sec;
}