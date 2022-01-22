//
// Created by Cici on 3/21/2019.
//

#ifndef INHERITANCE_GRADEDACTIVITY_H
#define INHERITANCE_GRADEDACTIVITY_H


//GradedActivity class declaration

class GradedActivity {
protected:
    //to hold the numeric score
    double score;

public:
    //default constructor
    GradedActivity();

    //constructor
    GradedActivity(double);

    //mutator function
    void setScore(double);

    //Accessor functions
    double getScore() const;

    virtual char getLettergrade() const;
};


#endif //INHERITANCE_GRADEDACTIVITY_H
