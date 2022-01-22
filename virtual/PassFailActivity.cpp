//
// Created by Cici on 3/22/2019.
//

#include "PassFailActivity.h"

PassFailActivity::PassFailActivity() : GradedActivity(){
    minPassingScore=0.0;
}
// Constructor
PassFailActivity::PassFailActivity(double s) : GradedActivity() {
    minPassingScore=s;
}
// Mutator
void PassFailActivity::setMinPassingScore(double m) {
    minPassingScore=m;
}
// Accessors
double PassFailActivity::getMinPassingScore() const {
    return minPassingScore;
}

char PassFailActivity::getLettergrade() const {
    char letterGrade;
    if (score >= minPassingScore)
        letterGrade = 'P';
    else
        letterGrade = 'F';

    return letterGrade;
}