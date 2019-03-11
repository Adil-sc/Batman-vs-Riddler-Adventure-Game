//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "ArkhamDeathRoom.h"

ArkhamDeathRoom::ArkhamDeathRoom()
    :Space("Arkham Death Room")
{

}

void ArkhamDeathRoom::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    if(Player->getTimeLimit() <=0){
        displayBatmanOutOfTime();
    }else{

        displayBatmanDeath();
    }



}