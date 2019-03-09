//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "Game.h"



Game::Game() {


    spaceStateionMap.push_back(new MainRoom()); //
    spaceStateionMap.push_back(new EastModule()); //North
    spaceStateionMap.push_back(new EastModule()); // South
    spaceStateionMap.push_back(new EastModule()); // East
    spaceStateionMap.push_back(new WestModule());// West



    //Settling top,left,right,bottom pointers
    spaceStateionMap[Main_Room]->setTop(spaceStateionMap[0]);  //North
    spaceStateionMap[Main_Room]->setBottom(spaceStateionMap[2]);  //South
    spaceStateionMap[Main_Room]->setRight(spaceStateionMap[3]); //East
    spaceStateionMap[Main_Room]->setLeft(spaceStateionMap[4]); //West

    //Link the North Module to the main room top
    spaceStateionMap[North_Room]->setTop(nullptr);
    spaceStateionMap[North_Room]->setBottom(spaceStateionMap[0]);
    spaceStateionMap[North_Room]->setRight(nullptr);
    spaceStateionMap[North_Room]->setLeft(nullptr);

    //Link the Sourth Module to the main rooms bottom
    spaceStateionMap[South_Room]->setTop(spaceStateionMap[0]);
    spaceStateionMap[South_Room]->setBottom(nullptr);
    spaceStateionMap[South_Room]->setRight(nullptr);
    spaceStateionMap[South_Room]->setLeft(nullptr);

    //Link the East Module to the main rooms bottom
    spaceStateionMap[East_Room]->setTop(nullptr);
    spaceStateionMap[East_Room]->setBottom(nullptr);
    spaceStateionMap[East_Room]->setRight(nullptr);
    spaceStateionMap[East_Room]->setLeft(spaceStateionMap[0]);

    //Link the West Module to the main rooms bottom
    spaceStateionMap[West_Room]->setTop(nullptr);
    spaceStateionMap[West_Room]->setBottom(nullptr);
    spaceStateionMap[West_Room]->setRight(spaceStateionMap[0]);
    spaceStateionMap[West_Room]->setLeft(nullptr);





    currentLocation = spaceStateionMap[0];
}


void Game::gameStart() {



    cout<<"Game start"<<std::endl;
    while(playing){

        currentLocation->riddle(currentLocation,spaceStateionMap);

    }


}