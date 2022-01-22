//
// Created by Cici on 3/21/2019.
//

#include "GradedActivity.h"

GradedActivity::GradedActivity() {
    score=0.0;
}

GradedActivity::GradedActivity(double s) {
    score=s;
}

void GradedActivity::setScore(double s) {
    score=s;
}

double GradedActivity::getScore() const {
    return score;
}

char GradedActivity::getLettergrade() const {
    char lettergrade;

    if (score>89) lettergrade='A';
    else if (score>79) lettergrade='B';
    else if (score>69) lettergrade='C';
    else if (score>59) lettergrade='D';
    else lettergrade='F';

    return lettergrade;
}