/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the derived Arkham North class
*********************************************************************/

#ifndef FINALPROJECT_ARKHAMNORTH_H
#define FINALPROJECT_ARKHAMNORTH_H

#include "Space.h"



class ArkhamNorth:public Space {

private:

    bool riddleSolved = false;

public:

    ArkhamNorth();
   ~ArkhamNorth(){}

    void riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

};


#endif //FINALPROJECT_ARKHAMNORTH_H
