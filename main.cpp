/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Final project for class 162
*********************************************************************/

#include <iostream>
#include "Game.h"




int main() {

    Game myGame;
    int menuChoice = 0;
    vector <string> myMenuOptions = {"Play","Quit"};
    Menu myMenu("",myMenuOptions);


    displaySplashScreen();
    cout<<"In this game, you play as Batman. You'v found yourself stuck in Arkham Asylum and you must answer the ";
    cout<<"Riddlers riddles in time to prevent the patients at the Asylum from being released";
    cout<<" The Riddler has hidden keys all around the Asulum - Keys that you need to override the patient release system."<<std::endl;
    cout<<""<<std::endl;
    cout<<"Explore the various parts of Arkham Asylum looking for terminals to answer the Riddlers questions.";
    cout<<" Answer correctly, and you may have a chance to stop the patients escaping into Gotham...";
    cout<<"Answer even a single riddle wrong...and the patients will be freed - with you as their first target!"<<std::endl;
    cout<<""<<std::endl;

    menuChoice = myMenu.displayMenu();

    switch(menuChoice){
        case 1:
            myGame.gameStart();
            break;

        case 2:
            break;
    }

    return 0;
}
