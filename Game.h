//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_GAME_H
#define FINALPROJECT_GAME_H

#include "Space.h"
#include "ArkhamEast.h"
#include "ArkhamWest.h"
#include "ArkhamMainRoom.h"
#include "ArkhamNorth.h"
#include "ArkhamSouth.h"
#include "ArkhamDeathRoom.h"


class Game {

private:

    bool playing = true;
    Space *currentLocation = nullptr;
    Space *previousLocation = nullptr;


    vector <Space *> ArkhamAsylumMap;





public:
    Game();
    void gameStart();

};


#endif //FINALPROJECT_GAME_H
