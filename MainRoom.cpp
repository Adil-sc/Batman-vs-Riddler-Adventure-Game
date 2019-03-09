//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "MainRoom.h"

MainRoom::MainRoom()
    :Space("Main Room")
{

}

void MainRoom::riddle(Space *&currentLocation,vector<Space *>spaceStateionMap) {

    int menuChoice = 0;

    cout<<"***Command Modukle***"<<std::endl;

    vector <string> myMenuOptions = {"Go through North Module","Go through South Module","Go through East Module","Go through West Module"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:

            //set current location to West Module
            currentLocation = spaceStateionMap[1];

            break;

        case 2:
            currentLocation = spaceStateionMap[2];
            break;

        case 3:
            currentLocation = spaceStateionMap[3];
            break;

        case 4:
            currentLocation = spaceStateionMap[4];
            break;


    }
}