//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "Game.h"

Game::~Game() {

    for (std::vector<Space *>::iterator it = ArkhamAsylumMap.begin() ; it != ArkhamAsylumMap.end(); ++it)
    {
        delete (*it);
    }
    ArkhamAsylumMap.clear();

    delete batman;

}

Game::Game() {

    ArkhamAsylumMap.push_back(new ArkhamMainRoom()); //Arkham Main
    ArkhamAsylumMap.push_back(new ArkhamNorth()); //North
    ArkhamAsylumMap.push_back(new ArkhamSouth()); // South
    ArkhamAsylumMap.push_back(new ArkhamEast()); // East
    ArkhamAsylumMap.push_back(new ArkhamWest());// West
    ArkhamAsylumMap.push_back(new ArkhamDeathRoom()); //Death Room
    ArkhamAsylumMap.push_back(new ArkhamWinRoom()); //Win Room

    //Links Arkham Main to other areas of Arkham
    ArkhamAsylumMap[Arkham_Main]->setTop(ArkhamAsylumMap[Arkham_North]);  //North
    ArkhamAsylumMap[Arkham_Main]->setBottom(ArkhamAsylumMap[Arkham_South]);  //South
    ArkhamAsylumMap[Arkham_Main]->setRight(ArkhamAsylumMap[Arkham_East]); //East
    ArkhamAsylumMap[Arkham_Main]->setLeft(ArkhamAsylumMap[Arkham_West]); //West

    //Links Arkham North to Arkham Main
    ArkhamAsylumMap[Arkham_North]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_North]->setBottom(ArkhamAsylumMap[Arkham_Main]);
    ArkhamAsylumMap[Arkham_North]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_North]->setLeft(nullptr);

    //Links Arkham South to Arkham Main
    ArkhamAsylumMap[Arkham_South]->setTop(ArkhamAsylumMap[Arkham_Main]);
    ArkhamAsylumMap[Arkham_South]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_South]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_South]->setLeft(nullptr);

    //Links Arkham East to Arkham Main
    ArkhamAsylumMap[Arkham_East]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_East]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_East]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_East]->setLeft(ArkhamAsylumMap[Arkham_Main]);

    //Links Arkham West to Arkham Main
    ArkhamAsylumMap[Arkham_West]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_West]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_West]->setRight(ArkhamAsylumMap[Arkham_Main]);
    ArkhamAsylumMap[Arkham_West]->setLeft(nullptr);

    //Sets all direction pointers of the Arkham Death Room to null
    ArkhamAsylumMap[Arkham_DeathRoom]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_DeathRoom]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_DeathRoom]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_DeathRoom]->setLeft(nullptr);

    //Sets all direction pointers of the Arkham Win  Room to null
    ArkhamAsylumMap[Arkham_WinRoom]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_WinRoom]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_WinRoom]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_WinRoom]->setLeft(nullptr);

    currentLocation = ArkhamAsylumMap[Arkham_Main];
}


void Game::gameStart() {

    //Main game loop that only ends if the player runs out of time, gets a riddle wrong,  or reaches the end of the game.
    while (playing) {
        //Shows Batmans stats such as the time remaining in the game and the contents of Batmans utility belt
        showPlayerStates();

        //Runs the primary method of the Space object that is held in the currentLocation pointer
        currentLocation->run(currentLocation, ArkhamAsylumMap, batman);

        //  batman->setKeyCount(4);

        //If all 4 keys have been collected, we proceed to the final area of the game
        if (batman->allKeysCollected() == true) {

            //Displays Batmans name, time remaining, and items in the utility belt
            showPlayerStates();

            //Sets the location to the Arkham Win Room
            currentLocation = ArkhamAsylumMap[Arkham_WinRoom];
            //Runs the win room main function
            currentLocation->run(currentLocation, ArkhamAsylumMap, batman);
            //The game is over, we can exit the loop now
            playing = false;
        }

        //If the Game has ended or the time limit is up, we show the death screen
        if (currentLocation == ArkhamAsylumMap[Arkham_DeathRoom] || batman->getTimeLimit() <= 0) {
            currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            currentLocation->run(currentLocation, ArkhamAsylumMap, batman);
            playing = false;
        }
    }
}

void Game::showPlayerStates() {
    cout<<""<<std::endl;
    //Shows Baatmans name
    cout<<batman->getName()<<std::endl;
    //Sets the time remaining between rounds
    batman->setTimeLimit(batman->getTimeLimit()-10);
    //Shows how much time is left in the game
    batman->timeLimitCountdown();
    //Shows the contents held in Batmans utility belt
    batman->batmanUtilityBelt();
}