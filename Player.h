//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_PLAYER_H
#define FINALPROJECT_PLAYER_H

#include <string>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Player {

    private:

    string name = "";
    int timeLimit = 100;

    vector <string> utilityBelt;


    public:

    Player(string newName);
    //Setters
    void setName(string name);
    void setTimeLimit(int timeLimit);
    void addToUtilityBelt(string newItem,int VectorPos);

    //Getters
    string getName();
    int getTimeLimit();

    void batmanUtilityBelt();
    void timeLimitCountdown();

};


#endif //FINALPROJECT_PLAYER_H
