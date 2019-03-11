/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class outline file for the derived Arkham South class
*********************************************************************/

#ifndef FINALPROJECT_WESTMODULE_H
#define FINALPROJECT_WESTMODULE_H
#include "Space.h"

class ArkhamWest: public Space {

private:
    bool riddleSolved = false;
public:

    ArkhamWest();
    ~ArkhamWest(){}

    void riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);
    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);



};


#endif //FINALPROJECT_WESTMODULE_H
