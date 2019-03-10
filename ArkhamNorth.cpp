//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "ArkhamNorth.h"

ArkhamNorth::ArkhamNorth()
    :Space("Arkham North")
{

}

void ArkhamNorth::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {


    int menuChoice = 0;

    cout<<"***Arkham North***"<<std::endl;

    vector <string> myMenuOptions = {"Interact with terminal","Go back to main area"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:

            //Riddle question is displayed with options, if answer is correct, the player gets a key

            break;

        case 2:
            currentLocation = ArkhamAsylumMap[Arkham_North]->getBottom();
            break;

    }


}