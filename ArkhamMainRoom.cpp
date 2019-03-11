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

    vector <string> myMenuOptions = {"Explore the Botanical Gardens Arkham North ","Explore the correctional facility in Arkham South","Explore the Psyc Ward in in Arkham East","Explore the intensive care facility in Arkham West"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:
            //currentLocation = ArkhamAsylumMap[1];
            currentLocation = currentLocation->getTop();
            break;

        case 2:
            //currentLocation = ArkhamAsylumMap[2];
            currentLocation = currentLocation->getBottom();
            break;

        case 3:
         //   currentLocation = ArkhamAsylumMap[3];
            currentLocation = currentLocation->getRight();
            break;

        case 4:
         //   currentLocation = ArkhamAsylumMap[4];
            currentLocation = currentLocation->getLeft();
            break;


    }
}