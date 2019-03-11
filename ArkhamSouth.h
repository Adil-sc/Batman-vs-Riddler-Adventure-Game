/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the derived Arkham South class
*********************************************************************/

#ifndef FINALPROJECT_ARKHAMSOUTH_H
#define FINALPROJECT_ARKHAMSOUTH_H

#include "Space.h"

class ArkhamSouth:public Space {

private:
    bool riddleSolved = false;

public:
    ArkhamSouth();
    ~ArkhamSouth(){}

    void riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);
    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

};


#endif //FINALPROJECT_ARKHAMSOUTH_H
