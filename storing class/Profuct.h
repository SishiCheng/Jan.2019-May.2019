//
// Created by Cici on 3/23/2019.
//

#ifndef STORING_CLASS_PROFUCT_H
#define STORING_CLASS_PROFUCT_H
#include <string>

using namespace std;

class Profuct {
private:
    string name;
    int units;

public:
    Profuct(string, int);
    void setName(string u);
    void setUnits(int u);
    string getName() const;
    int getUnits() const;
};


#endif //STORING_CLASS_PROFUCT_H
