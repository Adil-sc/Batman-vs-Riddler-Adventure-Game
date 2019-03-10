//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "Player.h"

Player::Player(string newName)
        :name(newName)
{
    utilityBelt.push_back("    ");
    utilityBelt.push_back("    ");
    utilityBelt.push_back("    ");
    utilityBelt.push_back("    ");
}

void Player::setName(string name) {
    this->name = name;
}

void Player::setTimeLimit(int timeLimit) {
    this->timeLimit = timeLimit;
}

void Player::addToUtilityBelt(string newItem,int VectorPos) {

       utilityBelt[VectorPos] = newItem;
        keyCount++;

}

void Player::setKeyCount(int keyCount) {
    this->keyCount = keyCount;
}
void Player::batmanUtilityBelt() {
    cout<<"Utility Belt: ";
    for(int i = 0; i<utilityBelt.size();i++){
        //For color:  cout<<"["<<GREEN<<utilityBelt[i]<<RESET<<"] ";
        cout<<"["<<utilityBelt[i]<<"] ";
    }

    cout<<""<<std::endl;
    cout<<""<<std::endl;
}

string Player::getName() {
    return name;
}

int Player::getTimeLimit() {
    return timeLimit;
}

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

void Player::timeLimitCountdown() {

    cout<<"Time limit remaining: "<<timeLimit<<" min"<<std::endl;

}