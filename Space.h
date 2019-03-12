/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class outline file for the Spaces base class which is used to implement the various areas of the game
*********************************************************************/
#ifndef FINALPROJECT_SPACE_H
#define FINALPROJECT_SPACE_H

#include <string>
#include <iostream>
#include <vector>
#include "Menu.h"
#include "inputValidation.h"
#include "Player.h"
#include "gameGraphics.h"

using std::string;
using std::cout;
using std::cin;
using std::vector;

//Enum that is used to identify the different space objects held in the ArkhamAsylumMap vector in Game.h
enum Locations {Arkham_Main,Arkham_North,Arkham_South,Arkham_East,Arkham_West,Arkham_DeathRoom,Arkham_WinRoom};

class Space {

private:

    string description;
    Space *top = nullptr;
    Space *left = nullptr;
    Space *right = nullptr;
    Space *bottom = nullptr;

public:

    //Constructor
    Space(string newDescription);

    //Destructor
    virtual ~Space(){}

    //Setters functions
    void setTop(Space *top);
    void setLeft(Space *left);
    void setRight(Space *right);
    void setBottom(Space *bottom);


    //Getter functions
    Space *getTop();
    Space *getLeft();
    Space *getRight();
    Space *getBottom();

    //Pure virtual function that will handle displaying the riddle in each room
    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) = 0;

   // virtual void riddleSolved(){}

};


#endif //FINALPROJECT_SPACE_H
