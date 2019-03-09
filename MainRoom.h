//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_MAINROOM_H
#define FINALPROJECT_MAINROOM_H

#include "Space.h"

class MainRoom: public Space {

private:

public:

    MainRoom();

    virtual void riddle(Space *&currentLocation,vector<Space *>spaceStateionMap);

};


#endif //FINALPROJECT_MAINROOM_H
