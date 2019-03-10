//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_ARKHAMDEATHROOM_H
#define FINALPROJECT_ARKHAMDEATHROOM_H

#include "Space.h"

class ArkhamDeathRoom: public Space {

private:

public:

    ArkhamDeathRoom();



    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap);


};


#endif //FINALPROJECT_ARKHAMDEATHROOM_H
