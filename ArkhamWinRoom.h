/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class outline file for the derived ArkhamWinRoom class
*********************************************************************/

#ifndef FINALPROJECT_ARKHAMWINROOM_H
#define FINALPROJECT_ARKHAMWINROOM_H

#include "Space.h"

class ArkhamWinRoom: public Space {

private:
    bool riddleSolved = false;
public:

    ArkhamWinRoom();
    ~ArkhamWinRoom(){}
    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

};


#endif //FINALPROJECT_ARKHAMWINROOM_H
