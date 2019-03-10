//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "ArkhamMainRoom.h"

ArkhamMainRoom::ArkhamMainRoom()
    :Space("Arkham Main")
{

}

void ArkhamMainRoom::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    int menuChoice = 0;


    cout<<"<--Arkham Asylum-->"<<std::endl;

    vector <string> myMenuOptions = {"Explore the Botanical Gardens Arkham north ","Explore the correctional facility in Arkham south","Explore the Psyc Ward in in Arkham east","Explore the intensive care facility in Arkham west"};
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