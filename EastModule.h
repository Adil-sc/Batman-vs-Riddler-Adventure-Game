//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_COMMANDMODULE_H
#define FINALPROJECT_COMMANDMODULE_H
#include "Space.h"

class EastModule: public Space {


private:



public:

    EastModule();


    virtual void riddle(Space *&currentLocation,vector<Space *>spaceStateionMap);

};


#endif //FINALPROJECT_COMMANDMODULE_H
