//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_WESTMODULE_H
#define FINALPROJECT_WESTMODULE_H
#include "Space.h"

class ArkhamWest: public Space {

private:
    bool riddleSolved = false;
public:

    ArkhamWest();

    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);



};


#endif //FINALPROJECT_WESTMODULE_H
