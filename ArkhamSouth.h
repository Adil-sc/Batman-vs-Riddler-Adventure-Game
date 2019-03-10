//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_ARKHAMSOUTH_H
#define FINALPROJECT_ARKHAMSOUTH_H

#include "Space.h"

class ArkhamSouth:public Space {

private:
    bool riddleSolved = false;

public:
    ArkhamSouth();


    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

};


#endif //FINALPROJECT_ARKHAMSOUTH_H
