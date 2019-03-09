//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "Game.h"



Game::Game() {


    spaceStateionMap.push_back(new MainRoom()); //
    spaceStateionMap.push_back(nullptr); //North
    spaceStateionMap.push_back(nullptr); // South
    spaceStateionMap.push_back(new EastModule()); // East
    spaceStateionMap.push_back(new WestModule());// West



    //Settling top,left,right,bottom pointers

    spaceStateionMap[0]->setBottom()


    currentLocation = spaceStateionMap[0];
}


void Game::gameStart() {



    cout<<"Game start"<<std::endl;
    while(playing){

        currentLocation->riddle(currentLocation,spaceStateionMap);

    }


}