//
// Created by Cici on 3/23/2019.
//

#include "Profuct.h"

Profuct::Profuct(string n, int u) {
    name = n;
    units = u;
}
void Profuct::setName(string u) {
    name=u;
}
void Profuct::setUnits(int u) {
    units=u;
}
string Profuct::getName() const {
    return name;
}
int Profuct::getUnits() const {
    return units;
}