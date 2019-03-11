/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the derived ArkhamDeathRoom class
*********************************************************************/

#ifndef FINALPROJECT_ARKHAMDEATHROOM_H
#define FINALPROJECT_ARKHAMDEATHROOM_H

#include "Space.h"

class ArkhamDeathRoom: public Space {

private:

public:

    ArkhamDeathRoom();
    ~ArkhamDeathRoom(){}



    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);


};


#endif //FINALPROJECT_ARKHAMDEATHROOM_H
