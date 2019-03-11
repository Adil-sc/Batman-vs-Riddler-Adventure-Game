/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the Player class which keeps track of things like the time remaining, items held etc
*********************************************************************/

#include "Player.h"


/*********************************************************************
** Description: Player constructor that sets up Batmans utity belt with 4 empty slots
*********************************************************************/
Player::Player(string newName)
        :name(newName)
{
    utilityBelt.push_back("    ");
    utilityBelt.push_back("    ");
    utilityBelt.push_back("    ");
    utilityBelt.push_back("    ");
}


/*********************************************************************
** Description: Lets you set the players name
*********************************************************************/
void Player::setName(string name) {
    this->name = name;
}


/*********************************************************************
** Description: Lets you set the players current time remaining in the game
*********************************************************************/
void Player::setTimeLimit(int timeLimit) {
    this->timeLimit = timeLimit;
}


/*********************************************************************
** Description: Function to let you add items to Batmans utility belt
 * Takes as paramaters:
 * A string to name the item
 * An int to determin the poistion in the vector you want to add the item
*********************************************************************/
void Player::addToUtilityBelt(string newItem,int VectorPos) {

       utilityBelt[VectorPos] = newItem;
        keyCount++;

}


/*********************************************************************
** Description: Function that lets you set the current key count
*********************************************************************/
void Player::setKeyCount(int keyCount) {
    this->keyCount = keyCount;
}

/*********************************************************************
** Description: Function that uses a vector to hold items in Batmans utility belt
 * This function helps to display its contents
*********************************************************************/
void Player::batmanUtilityBelt() {
    cout<<"Utility Belt: ";
    for(int i = 0; i<utilityBelt.size();i++){
        cout<<"["<<GREEN<<utilityBelt[i]<<RESET<<"] ";
        //cout<<"["<<utilityBelt[i]<<"] ";
    }

    cout<<""<<std::endl;
    cout<<""<<std::endl;
}


/*********************************************************************
** Description: Function returns the players name
*********************************************************************/
string Player::getName() {
    return name;
}


/*********************************************************************
** Description: Function returns the current time limit
*********************************************************************/
int Player::getTimeLimit() {
    return timeLimit;
}


/*********************************************************************
** Description: Function that gets the current size of Batmans utility belt vector
*********************************************************************/
int Player::getUtilityBeltSize() {
    return utilityBelt.size();
}

bool Player::allKeysCollected() {

    if(keyCount == 4){
        return true;
    } else{
        return false;
    }

}


/*********************************************************************
** Description: Function that displays the current time remaning in the game
*********************************************************************/
void Player::timeLimitCountdown() {

    cout<<"Time limit remaining: "<<timeLimit<<" min"<<std::endl;

}