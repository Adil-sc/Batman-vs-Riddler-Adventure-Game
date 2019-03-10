//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "ArkhamMainRoom.h"

ArkhamMainRoom::ArkhamMainRoom()
    :Space("Main Room")
{

}

void ArkhamMainRoom::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap) {

    int menuChoice = 0;

    cout<<"***Command Modukle***"<<std::endl;

    vector <string> myMenuOptions = {"Go through North Module","Go through South Module","Go through East Module","Go through West Module"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:

            //set current location to West Module
            currentLocation = ArkhamAsylumMap[1];

            break;

        case 2:
            currentLocation = ArkhamAsylumMap[2];
            break;

        case 3:
            currentLocation = ArkhamAsylumMap[3];
            break;

        case 4:
            currentLocation = ArkhamAsylumMap[4];
            break;


    }
}