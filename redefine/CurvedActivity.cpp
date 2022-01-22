//
// Created by Cici on 3/22/2019.
//

#include "CurvedActivity.h"

CurvedActivity::CurvedActivity(){
    rawScore=0.0;
    percentage=0.0;
}

void CurvedActivity::setScore(double r) {
    rawScore=r;
    GradedActivity::setScore(rawScore * percentage);
}

void CurvedActivity::setPercentage(double p) {
    percentage=p;
}
 // Accessor functions
double CurvedActivity::getRawScore() const {
    return rawScore;
}

double CurvedActivity::getPercentage() const {
    return percentage;
}