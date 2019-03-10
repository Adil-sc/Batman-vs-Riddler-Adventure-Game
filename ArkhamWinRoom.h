//
// Created by Sandybridge W10 on 3/10/2019.
//

#ifndef FINALPROJECT_ARKHAMWINROOM_H
#define FINALPROJECT_ARKHAMWINROOM_H

#include "Space.h"

class ArkhamWinRoom: public Space {

private:
    bool riddleSolved = false;
public:

    ArkhamWinRoom();
    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

};


#endif //FINALPROJECT_ARKHAMWINROOM_H
