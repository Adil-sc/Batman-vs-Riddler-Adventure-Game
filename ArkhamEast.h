/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the derived Arkham East class
*********************************************************************/
#ifndef FINALPROJECT_COMMANDMODULE_H
#define FINALPROJECT_COMMANDMODULE_H
#include "Space.h"

class ArkhamEast: public Space {


private:

    bool riddleSolved = false;

public:

    ArkhamEast();
   ~ArkhamEast(){}

    void riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

   // virtual void riddleSolved(){ cout<<key<<std::endl;}
    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player);

};


#endif //FINALPROJECT_COMMANDMODULE_H
