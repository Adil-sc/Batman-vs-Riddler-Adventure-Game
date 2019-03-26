/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class implementation file for the derived ArkhamMainRoom class
*********************************************************************/

#include "ArkhamMainRoom.h"

ArkhamMainRoom::ArkhamMainRoom()
        : Space("Arkham Main") {

}


/*********************************************************************
** Description: Virtual method that is called for each of the space objects to run anything specific to that room
 * Takes as parameters:
 * Space* To interact with the current location of the player
 * vector<Space*> To have access to all locations in the game
 * Player* To modify player attributes like adding items to the utility belt
*********************************************************************/
void ArkhamMainRoom::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    int menuChoice = 0;


    cout << "<--Arkham Asylum-->" << std::endl;

    vector<string> myMenuOptions = {"Explore the Botanical Gardens Arkham North ", "Explore the Correctional Facility in Arkham South", "Explore the Psyc Ward in in Arkham East",
                                    "Explore the Intensive Care facility in Arkham West"};
    Menu myMenu("", myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice) {

        case 1:

            currentLocation = currentLocation->getTop();
            break;

        case 2:

            currentLocation = currentLocation->getBottom();
            break;

        case 3:

            currentLocation = currentLocation->getRight();
            break;

        case 4:

            currentLocation = currentLocation->getLeft();
            break;

    }

}