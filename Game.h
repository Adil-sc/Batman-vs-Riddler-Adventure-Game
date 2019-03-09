//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_GAME_H
#define FINALPROJECT_GAME_H

#include "Space.h"
#include "EastModule.h"
#include "WestModule.h"
#include "MainRoom.h"


class Game {

private:

    bool playing = true;
    Space *currentLocation = nullptr;
    Space *previousLocation = nullptr;


    vector <Space *> spaceStateionMap;





public:
    Game();
    void gameStart();

};


#endif //FINALPROJECT_GAME_H
