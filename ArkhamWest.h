//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_WESTMODULE_H
#define FINALPROJECT_WESTMODULE_H
#include "Space.h"

class ArkhamWest: public Space {

private:

public:

    ArkhamWest();

    virtual void riddle(Space *&currentLocation,vector<Space *>ArkhamAsylumMap);



};


#endif //FINALPROJECT_WESTMODULE_H