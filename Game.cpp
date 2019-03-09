//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "Game.h"



Game::Game() {


    ArkhamAsylumMap.push_back(new ArkhamMainRoom()); //
    ArkhamAsylumMap.push_back(new ArkhamNorth()); //North
    ArkhamAsylumMap.push_back(new ArkhamSouth()); // South
    ArkhamAsylumMap.push_back(new ArkhamEast()); // East
    ArkhamAsylumMap.push_back(new ArkhamWest());// West



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





    currentLocation = ArkhamAsylumMap[0];
}


void Game::gameStart() {



    cout<<"Game start"<<std::endl;
    while(playing){

        currentLocation->riddle(currentLocation,ArkhamAsylumMap);

    }


}