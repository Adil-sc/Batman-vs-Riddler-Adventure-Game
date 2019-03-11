//
// Created by Sandybridge W10 on 3/9/2019.
//

#include "ArkhamSouth.h"

ArkhamSouth::ArkhamSouth()
        :Space("Arkham South")
{

}


void ArkhamSouth::riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    if(riddleSolved != true){
        int menuChoice = 0;

        //Riddle question

        cout<<GREEN<<std::endl;
        cout<<"+-----------------------------------------------------------------------+"<<std::endl;
        cout<<"|                           RIDDLE ME THIS                              |"<<std::endl;
        cout<<"+-----------------------------------------------------------------------+"<<std::endl;
        cout<<"|                                                                       |"<<std::endl;
        cout<<"|     WHAT WEIGHS SIX OUNCES, SITS IN A TREE, AND IS VERY DANGEROUS?    |"<<std::endl;
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
        cout<<RESET<<std::endl;

        // cout<<"What is the beginning of eternity,\n the end of time and space,\n the beginning of every end and the end of every race? "<<std::endl;
        //Riddle answers held in a vector
        vector <string> myMenuOptions = {"A dove with a knife","A hawk with a shank","A tweaty bird with a revolver","A sparrow with a machine gun"};
        Menu myMenu("",myMenuOptions);
        menuChoice = myMenu.displayMenu();

        switch (menuChoice){

            case 1:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
                break;


            case 2:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
                break;

            case 3:

                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
                break;
                //Correct answer
            case 4:
                Player->addToUtilityBelt("Arkham South Key",2);
                riddleSolved = true;
                currentLocation = ArkhamAsylumMap[Arkham_North]->getBottom();
                cout<<GREEN<<"OBTAINED 1X ARKHAM SOUTH KEY"<<RESET<<std::endl;
                cout<<"Lines of code flash on the terminal....Batman hear a safe in the room unlock. He approaches the safe and in it he finds a key.";
                cout<<" He puts the key in his utility belt and proceeds to search the rest of the Asylum"<<std::endl;

                cout<<"Press enter to continue..."<<std::endl;
                cin.ignore();
                cin.ignore();

                break;

        }
    } else{
        cout<<"Riddle already solved"<<std::endl;
        cout<<"Press enter to continue..."<<std::endl;
        cin.ignore();
        cin.ignore();

        currentLocation = ArkhamAsylumMap[Arkham_South]->getTop();

    }

}

void ArkhamSouth::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {


    int menuChoice = 0;

    cout<<"<--Arkham South-->"<<std::endl;
    cout<<""<<std::endl;

    displayBatman();
    cout<<"Batman steps into the correctional facility...No one seems to be here";
    cout<<"batman kneels, fresh blood on the ground...seems tolead to a door. ";
    cout<<"Batman approaches the door, the plaque reads 'Aron Cash - Security Guard'.."<<std::endl;
    cout<<"Batman opens the door and sees a terminal."<<std::endl;
    cout<<""<<std::endl;

    vector <string> myMenuOptions = {"Interact with terminal","Leave Arkham south and go back to main area"};
    Menu myMenu("",myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice){

        case 1:

            //Riddle question is displayed with options, if answer is correct, the player gets a key
            riddle(currentLocation,ArkhamAsylumMap,Player);
            break;

        case 2:
            currentLocation = ArkhamAsylumMap[Arkham_South]->getTop();
            break;

    }


}