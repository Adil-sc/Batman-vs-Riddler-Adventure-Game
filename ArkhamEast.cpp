//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "ArkhamEast.h"

ArkhamEast::ArkhamEast()
    :Space("East Module Room")
{

}

void ArkhamEast::riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    if(riddleSolved != true){
    int menuChoice = 0;

    //Riddle question
 cout<<"+-----------------------------------------------------------------------+"<<std::endl;
 cout<<"|                           RIDDLE ME THIS                              |"<<std::endl;
 cout<<"+-----------------------------------------------------------------------+"<<std::endl;
 cout<<"|     WHAT IS THE BEGINNING OF ETERNITY, THE END OF TIME AND SPACE,     |"<<std::endl;
 cout<<"|         THE BEGINNING OF EVERY END AND THE END OF EVERY RACE?         |"<<std::endl;
 cout<<"|                                                                       |"<<std::endl;
 cout<<"+-----------------------------------------------------------------------+"<<std::endl;
 cout<<"+-----------------------------------------------------------------------+"<<std::endl;
 cout<<"|                                                                       |"<<std::endl;
 cout<<"|                                ________                               |"<<std::endl;
 cout<<"|                           _jgN########Ngg_                            |"<<std::endl;
 cout<<"|                         _N##N@@**  **9NN##Np_                         |"<<std::endl;
 cout<<"|                        d###P            N####p                        |"<<std::endl;
 cout<<"|                        <##>              T####                        |"<<std::endl;
 cout<<"|                                          d###P                        |"<<std::endl;
 cout<<"|                                       _g###@F                         |"<<std::endl;
 cout<<"|                                    _gN##@P                            |"<<std::endl;
 cout<<"|                                  gN###F                               |"<<std::endl;
 cout<<"|                                 d###F                                 |"<<std::endl;
 cout<<"|                                0###F                                  |"<<std::endl;
 cout<<"|                                0###F                                  |"<<std::endl;
 cout<<"|                                0###F                                  |"<<std::endl;
 cout<<"|                                'NN@'                                  |"<<std::endl;
 cout<<"|                                 ___                                   |"<<std::endl;
 cout<<"|                                q###r                                  |"<<std::endl;
 cout<<"|                                 **                                    |"<<std::endl;
 cout<<"+-----------------------------------------------------------------------+"<<std::endl;

   // cout<<"What is the beginning of eternity,\n the end of time and space,\n the beginning of every end and the end of every race? "<<std::endl;
    //Riddle answers held in a vector
    vector <string> myMenuOptions = {"Time","The letter E","Nothing","Life"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:
            currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            break;

            //Correct answer
        case 2:
            Player->addToUtilityBelt("Arkham East Key",2);
            riddleSolved = true;
            currentLocation = ArkhamAsylumMap[Arkham_East]->getLeft();
            cout<<"Lines of code flash on the terminal....Batman hear a safe in the room unlock. He approaches the safe and in it he finds a key.";
            cout<<" He puts the key in his utility belt and proceeds to search the rest of the Asylum"<<std::endl;

            cout<<"Press enter to continue..."<<std::endl;
            cin.ignore();
            cin.ignore();
            break;

        case 3:
            currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            break;

        case 4:
            currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
            break;

    }
    } else{
        cout<<"Riddle already solved"<<std::endl;
        cout<<"Press enter to continue..."<<std::endl;
        cin.ignore();
        cin.ignore();

        currentLocation = ArkhamAsylumMap[Arkham_East]->getLeft();

    }

}

void ArkhamEast::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {


    int menuChoice = 0;

    cout<<"<--Arkham East-->"<<std::endl;
    cout<<""<<std::endl;
    cout<<"The lights flicker as Batman steps into the Psyc ward of Arkham east. Off in the distance, at the end of a long hall"<<std::endl;
    cout<<"way, he sees a soft green glow creep out under a door";
    cout<<"Batman approaches the door, the plaque reads Dr.'Joan Leland'.."<<std::endl;
    cout<< "Batman opens the door and sees a terminal.. "<<std::endl;
    cout<<""<<std::endl;

    vector <string> myMenuOptions = {"Interact with terminal","Leave Arkham east and go back to main area"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:

            riddle(currentLocation,ArkhamAsylumMap,Player);

            break;

        case 2:
            currentLocation = ArkhamAsylumMap[Arkham_East]->getLeft();
            break;

    }


}



