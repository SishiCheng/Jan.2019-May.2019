//
// Created by Cici on 3/21/2019.
//

#ifndef INHERITANCE_FINALEXAM_H
#define INHERITANCE_FINALEXAM_H

#include "GradedActivity.h"


class FinalExam : public GradedActivity {
private:
    int questions;//number of questions
    double points;//points of each question
    int missed;//number of questions missed
public:
    //default constructor
    FinalExam();
    //constructor
    FinalExam(int, int);
    //Mutator Function
    void set(int, int);
    void adjustScore();
    //Accessor Functions
    int getQuestions() const;

    double getPoints() const;

    int getMissed() const;
};


#endif //INHERITANCE_FINALEXAM_H
