/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class implementation file for the derived ArkhamDeathRoom class
*********************************************************************/

#include "ArkhamDeathRoom.h"


/*********************************************************************
** Description: Default constructor
*********************************************************************/
ArkhamDeathRoom::ArkhamDeathRoom()
    :Space("Arkham Death Room")
{

}


/*********************************************************************
** Description: Virtual method that is called for each of the space objects to run anything specific to that room
 * Takes as parameters:
 * Space* To interact with the current location of the player
 * vector<Space*> To have access to all locations in the game
 * Player* To modify player attributes like adding items to the utility belt
*********************************************************************/
void ArkhamDeathRoom::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    if(Player->getTimeLimit() <=0){
        displayBatmanOutOfTime();
    }else{

        displayBatmanDeath();
    }



}