//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_ARKHAMNORTH_H
#define FINALPROJECT_ARKHAMNORTH_H

#include "Space.h"

class ArkhamNorth:public Space {

private:
    bool riddleSolved = false;

public:
    ArkhamNorth();


    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap);

};


#endif //FINALPROJECT_ARKHAMNORTH_H
