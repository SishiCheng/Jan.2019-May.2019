//
// Created by Cici on 3/22/2019.
//

#ifndef REDEFINE_CURVEDACTIVITY_H
#define REDEFINE_CURVEDACTIVITY_H

#include "GradedActivity.h"

class CurvedActivity : public GradedActivity{
protected:
    double rawScore;// Unadjusted score
    double percentage;// Curve percentage

public:
    // Default constructor
    CurvedActivity();
    // Mutator functions
    void setScore(double);

    void setPercentage(double);
    // Accessor functions
    double getRawScore() const;

    double getPercentage() const;
};


#endif //REDEFINE_CURVEDACTIVITY_H
