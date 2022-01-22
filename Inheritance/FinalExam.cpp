//
// Created by Cici on 3/21/2019.
//

#include "FinalExam.h"

FinalExam::FinalExam() {
    questions=0;
    points=0.0;
    missed=0;
}

FinalExam::FinalExam(int q, int m) {
    set(q, m);
}

void FinalExam::set(int q, int m) {
    //to hold the numeric score
    double score;

    //set the number of questions and number missed
    questions=q;
    missed=m;

    //calculate the points for each questions
    points=100.0/questions;

    //calculate the numeric score for this exam
    score=100.0-missed*points;

    //Call the inherited setScore function to set
    //the numeric score
    setScore(score);
}

void FinalExam::adjustScore() {
    double fraction=score- static_cast<int>(score);

    if(fraction>=0.5) {
        score=score+(1.0-fraction);
    }
}

int FinalExam::getQuestions() const {
    return questions;
}

double FinalExam::getPoints() const {
    return points;
}

int FinalExam::getMissed() const {
    return missed;
}