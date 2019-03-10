//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_MAINROOM_H
#define FINALPROJECT_MAINROOM_H

#include "Space.h"

class ArkhamMainRoom: public Space {

private:

public:

    ArkhamMainRoom();

    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap);

};


#endif //FINALPROJECT_MAINROOM_H
