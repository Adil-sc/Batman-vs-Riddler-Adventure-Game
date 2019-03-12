/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class outline file for the Game class that handles the core game logic
*********************************************************************/

#ifndef FINALPROJECT_GAME_H
#define FINALPROJECT_GAME_H

#include "Space.h"
#include "ArkhamEast.h"
#include "ArkhamWest.h"
#include "ArkhamMainRoom.h"
#include "ArkhamNorth.h"
#include "ArkhamSouth.h"
#include "ArkhamDeathRoom.h"
#include "Player.h"
#include "ArkhamWinRoom.h"


class Game {

private:

    bool playing = true;
    Space *currentLocation = nullptr;
    Space *previousLocation = nullptr;
    Player *batman = new Player("Batman");
    vector <Space *> ArkhamAsylumMap;

public:

    Game();
   ~Game();

    void gameStart();

    void showPlayerStates();

};


#endif //FINALPROJECT_GAME_H
