/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the derived ArkhamMainRoom class
*********************************************************************/
#ifndef FINALPROJECT_MAINROOM_H
#define FINALPROJECT_MAINROOM_H

#include "Space.h"

class ArkhamMainRoom: public Space {

private:

public:

    ArkhamMainRoom();
   ~ArkhamMainRoom(){}

    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

};


#endif //FINALPROJECT_MAINROOM_H
