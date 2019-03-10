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

}
void Player::batmanUtilityBelt() {
    cout<<"Utility Belt: ";
    for(int i = 0; i<utilityBelt.size();i++){
        cout<<"["<<utilityBelt[i]<<"] ";
    }
    cout<<""<<std::endl;
}

string Player::getName() {
    return name;
}

int Player::getTimeLimit() {
    return timeLimit;
}

void Player::timeLimitCountdown() {

    cout<<"Time limit remaining: "<<timeLimit-(rand()%15+1)<<std::endl;

}