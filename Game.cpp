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


    ArkhamAsylumMap.push_back(new ArkhamMainRoom()); //
    ArkhamAsylumMap.push_back(new ArkhamNorth()); //North
    ArkhamAsylumMap.push_back(new ArkhamSouth()); // South
    ArkhamAsylumMap.push_back(new ArkhamEast()); // East
    ArkhamAsylumMap.push_back(new ArkhamWest());// West
    ArkhamAsylumMap.push_back(new ArkhamDeathRoom()); //Death Room
    ArkhamAsylumMap.push_back(new ArkhamWinRoom()); //Win Room



    //Settling top,left,right,bottom pointers
    ArkhamAsylumMap[Arkham_Main]->setTop(ArkhamAsylumMap[0]);  //North
    ArkhamAsylumMap[Arkham_Main]->setBottom(ArkhamAsylumMap[2]);  //South
    ArkhamAsylumMap[Arkham_Main]->setRight(ArkhamAsylumMap[3]); //East
    ArkhamAsylumMap[Arkham_Main]->setLeft(ArkhamAsylumMap[4]); //West

    //Link the North Module to the main room top
    ArkhamAsylumMap[Arkham_North]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_North]->setBottom(ArkhamAsylumMap[0]);
    ArkhamAsylumMap[Arkham_North]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_North]->setLeft(nullptr);

    //Link the Sourth Module to the main rooms bottom
    ArkhamAsylumMap[Arkham_South]->setTop(ArkhamAsylumMap[0]);
    ArkhamAsylumMap[Arkham_South]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_South]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_South]->setLeft(nullptr);

    //Link the East Module to the main rooms bottom
    ArkhamAsylumMap[Arkham_East]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_East]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_East]->setRight(nullptr);
    ArkhamAsylumMap[Arkham_East]->setLeft(ArkhamAsylumMap[0]);

    //Link the West Module to the main rooms bottom
    ArkhamAsylumMap[Arkham_West]->setTop(nullptr);
    ArkhamAsylumMap[Arkham_West]->setBottom(nullptr);
    ArkhamAsylumMap[Arkham_West]->setRight(ArkhamAsylumMap[0]);
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


    while (playing) {
        showPlayerStates();

        currentLocation->run(currentLocation, ArkhamAsylumMap, batman);

        //  batman->setKeyCount(4);
        //If all 4 keys have been collected
        if (batman->allKeysCollected() == true) {
            //Displays Batmans name, time remaining, and items in the utility belt
            showPlayerStates();

            //Sets the location to the win room
            currentLocation = ArkhamAsylumMap[Arkham_WinRoom];
            //Runs the win room
            currentLocation->run(currentLocation, ArkhamAsylumMap, batman);
            //Game is over
            playing = false;
        }

        //If the Game has ended or the time limit is up
        if (currentLocation == ArkhamAsylumMap[Arkham_DeathRoom] || batman->getTimeLimit() <= 0) {
            currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            currentLocation->run(currentLocation, ArkhamAsylumMap, batman);
            playing = false;
        }
    }
}

void Game::showPlayerStates() {
    cout<<""<<std::endl;
    cout<<batman->getName()<<std::endl;
    batman->setTimeLimit(batman->getTimeLimit()-10);
    batman->timeLimitCountdown();
    batman->batmanUtilityBelt();
}