//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_COMMANDMODULE_H
#define FINALPROJECT_COMMANDMODULE_H
#include "Space.h"

class ArkhamEast: public Space {


private:



public:

    ArkhamEast();


    virtual void riddle(Space *&currentLocation,vector<Space *>ArkhamAsylumMap);

};


#endif //FINALPROJECT_COMMANDMODULE_H
