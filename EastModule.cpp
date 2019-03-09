//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "EastModule.h"

EastModule::EastModule()
    :Space("East Module Room")
{

}


void EastModule::riddle(Space *&currentLocation,vector<Space *>spaceStateionMap) {


    int menuChoice = 0;

    cout<<"***East Module***"<<std::endl;

    vector <string> myMenuOptions = {"Interact with terminal","Go back to main area"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:

            //Riddle question is displayed with options, if answer is correct, the player gets a key

            break;

        case 2:
            currentLocation = spaceStateionMap[0];
            break;

    }


}