//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "ArkhamEast.h"

ArkhamEast::ArkhamEast()
    :Space("East Module Room")
{

}

void ArkhamEast::riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap) {


    int menuChoice = 0;


    cout<<"What is the beginning of eternity, the end of time and space, the beginning of every end and the end of every race? "<<std::endl;
    vector <string> myMenuOptions = {"Q1","Q2","Q3","Q4"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();



    switch (menuChoice){

        case 1:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            break;

        case 2:

            break;

        case 4:

            break;

        case 5:

            break;

    }


}

void ArkhamEast::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap) {


    int menuChoice = 0;

    cout<<"***Arkham East***"<<std::endl;

    vector <string> myMenuOptions = {"Interact with terminal","Go back to main area"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:

            riddle(currentLocation,ArkhamAsylumMap);

            break;

        case 2:
            currentLocation = ArkhamAsylumMap[Arkham_East]->getLeft();
            break;

    }


}



