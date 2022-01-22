//
// Created by Cici on 3/22/2019.
//

#ifndef VIRTUAL_PASSFAILACTIVITY_H
#define VIRTUAL_PASSFAILACTIVITY_H

#include "GradedActivity.h"

class PassFailActivity : public GradedActivity{
protected:
    // Minimum passing score
    double minPassingScore;

public:
    // Default constructor
    PassFailActivity();
    // Constructor
    PassFailActivity(double);
    // Mutator
    void setMinPassingScore(double);
    // Accessors
    double getMinPassingScore() const;

    char getLettergrade() const;
};


#endif //VIRTUAL_PASSFAILACTIVITY_H
