//
// Created by Sandybridge W10 on 3/10/2019.
//

#include "ArkhamWinRoom.h"

ArkhamWinRoom::ArkhamWinRoom()
        :Space("Arkham Main")
{

}

void ArkhamWinRoom::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    int menuChoice = 0;

    cout<<"<--Arkham Asylum-->"<<std::endl;
    cout<<""<<std::endl;
    cout<<"Batman steps back into the Arkham Asylum's main area. He now has all 4 keys in his utility belt";
    cout<<"With just "<<Player->getTimeLimit()<<" min remaning, he approaches the terminal to put an end to the Riddlers madness";
    cout<<" and stop the patients from leaving the Asylum"<<std::endl;
    cout<<"Batman interacts with the terminal..."<<std::endl;
    cout<<"It asks him to enter in the correct key sequence."<<std::endl;
    cout<<""<<std::endl;

    vector <string> myMenuOptions = {"Arkham North Key, South Key, East Key, West Key","Arkham South Key, North Key, West Key, East Key","Arkham East Key, West Key, North Key, South Key"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();


    switch (menuChoice){

        case 1:
            //Riddle question is displayed with options, if answer is correct, the player gets a key
            //displayBatmanFace();

            displayBatmanWinScreen();
            cout<<"Batman stares at the terminal as its green light bathes his suit. 'ALL PATIENTS LOCKED' the terminal reads."<<std::endl;
            cout<<"Batman breathes a sigh of relief...all patients but the Riddler remain in the Asylum."<<std::endl;
            cout<<"The Riddler has escaped...but for tonight..Gotham is safe...for now."<<std::endl;

            displayBatmanSymbol();
            cout<<GREEN<<"GAME END"<<RESET<<std::endl;
            //Hack to ensure the end game screen is not called if player runs into an edge case of reaching the winning stage at the same time
            //as the time limit reaches 0. We just set the current game time to 100 in the back ground
            Player->setTimeLimit(100);
            riddleSolved = true;
            break;


        case 2:

            currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            break;

        case 3:

            currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            break;

    }

}