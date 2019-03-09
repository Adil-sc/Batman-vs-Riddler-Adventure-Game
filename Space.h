//
// Created by Sandybridge W10 on 3/8/2019.
//

#ifndef FINALPROJECT_SPACE_H
#define FINALPROJECT_SPACE_H

#include <string>
#include <iostream>
#include <vector>
#include "Menu.h"
#include "inputValidation.h"

using std::string;
using std::cout;
using std::cin;
using std::vector;

enum Locations {Main_Room,North_Room,South_Room,East_Room,West_Room};

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
   // ~Space();
    virtual ~Space(){}

    //Setters

    void setTop(Space *top);
    void setLeft(Space *left);
    void setRight(Space *right);
    void setBottom(Space *bottom);


    //Getters

    Space *getTop();
    Space *getLeft();
    Space *getRight();
    Space *getBottom();


    virtual void riddle(Space *&currentLocation,vector<Space *> spaceStateionMap) = 0;


};


#endif //FINALPROJECT_SPACE_H
