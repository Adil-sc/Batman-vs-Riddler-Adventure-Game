//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_WESTMODULE_H
#define FINALPROJECT_WESTMODULE_H
#include "Space.h"

class WestModule: public Space {

private:

public:

    WestModule();

    virtual void riddle(Space *&currentLocation,vector<Space *>spaceStateionMap);



};


#endif //FINALPROJECT_WESTMODULE_H
