//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_PLAYER_H
#define FINALPROJECT_PLAYER_H

#include <string>
#include <iostream>
#include <vector>
#include "gameGraphics.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Player {

    private:

    string name = "";
    int timeLimit = 110;
    int keyCount = 0;
    vector <string> utilityBelt;


    public:

    Player(string newName);
    //Setters
    void setName(string name);
    void setTimeLimit(int timeLimit);
    void addToUtilityBelt(string newItem,int VectorPos);
    void setKeyCount(int keyCount);

    //Getters
    string getName();
    int getTimeLimit();
    int getUtilityBeltSize();

    bool allKeysCollected();

    void batmanUtilityBelt();
    void timeLimitCountdown();

};


#endif //FINALPROJECT_PLAYER_H
