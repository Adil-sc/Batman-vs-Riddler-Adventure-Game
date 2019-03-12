/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class implementation file for the derived Arkham North class
*********************************************************************/
#include "ArkhamNorth.h"

ArkhamNorth::ArkhamNorth()
        : Space("Arkham North") {

}


/*********************************************************************
** Description: Function that handles displaying the riddle for each room the player is in.
 * Takes as parameters:
 * Space* To interact with the current location of the player
 * vector<Space*> To have access to all locations in the game
 * Player* To modify player attributes like adding items to the utility belt
*********************************************************************/
void ArkhamNorth::riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    if (riddleSolved != true) {
        int menuChoice = 0;

        //Riddle question
        cout << GREEN << std::endl;
        cout << "+-----------------------------------------------------------------------+" << std::endl;
        cout << "|                           RIDDLE ME THIS                              |" << std::endl;
        cout << "+-----------------------------------------------------------------------+" << std::endl;
        cout << "|                                                                       |" << std::endl;
        cout << "|             WHAT BELONGS TO YOU, BUT IS USED BY OTHERS?               |" << std::endl;
        cout << "|                                                                       |" << std::endl;
        cout << "+-----------------------------------------------------------------------+" << std::endl;
        cout << "+-----------------------------------------------------------------------+" << std::endl;
        cout << "|                                                                       |" << std::endl;
        cout << "|                                ________                               |" << std::endl;
        cout << "|                           _jgN########Ngg_                            |" << std::endl;
        cout << "|                         _N##N@@**  **9NN##Np_                         |" << std::endl;
        cout << "|                        d###P            N####p                        |" << std::endl;
        cout << "|                        <##>              T####                        |" << std::endl;
        cout << "|                                          d###P                        |" << std::endl;
        cout << "|                                       _g###@F                         |" << std::endl;
        cout << "|                                    _gN##@P                            |" << std::endl;
        cout << "|                                  gN###F                               |" << std::endl;
        cout << "|                                 d###F                                 |" << std::endl;
        cout << "|                                0###F                                  |" << std::endl;
        cout << "|                                0###F                                  |" << std::endl;
        cout << "|                                0###F                                  |" << std::endl;
        cout << "|                                'NN@'                                  |" << std::endl;
        cout << "|                                 ___                                   |" << std::endl;
        cout << "|                                q###r                                  |" << std::endl;
        cout << "|                                 **                                    |" << std::endl;
        cout << "+-----------------------------------------------------------------------+" << std::endl;
        cout << RESET << std::endl;

        //Riddle answers held in a vector
        vector<string> myMenuOptions = {"The Bat Mobile", "Your heart", "Your name", "Life"};
        Menu myMenu("", myMenuOptions);
        menuChoice = myMenu.displayMenu();

        switch (menuChoice) {

            case 1:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
                break;


            case 2:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
                break;

                //Correct answer. Sets the riddleSolved to true, adds a Key to the utility belt
                //and takes the player back to the main room of Arkham
            case 3:
                Player->addToUtilityBelt("Arkham North Key", 0);
                riddleSolved = true;
                currentLocation = ArkhamAsylumMap[Arkham_North]->getBottom();
                cout << GREEN << "OBTAINED 1X ARKHAM NORTH KEY" << RESET << std::endl;
                cout << "Lines of code flash on the terminal....Batman hear a safe in the room unlock. He approaches the safe and in it he finds a key.";
                cout << " He puts the key in his utility belt and proceeds to search the rest of the Asylum" << std::endl;

                cout << "Press enter to continue..." << std::endl;
                cin.ignore();
                cin.ignore();

                break;

            case 4:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
                break;

        }
      //If the riddle is already solved, we dont have to solve anything
    } else {

        cout << "Riddle already solved" << std::endl;
        cout << "Press enter to continue..." << std::endl;
        cin.ignore();
        cin.ignore();

        currentLocation = ArkhamAsylumMap[Arkham_North]->getBottom();

    }

}


/*********************************************************************
** Description: Virtual method that is called for each of the space objects to run anything specific to that room
 * Takes as parameters:
 * Space* To interact with the current location of the player
 * vector<Space*> To have access to all locations in the game
 * Player* To modify player attributes like adding items to the utility belt
*********************************************************************/
void ArkhamNorth::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    int menuChoice = 0;

    cout << "<--Arkham North-->" << std::endl;
    cout << "" << std::endl;

    displayBatman();
    cout << "Batman steps into the Botanical Gardens...Nothing but the moon light illuminates the grounds. As he sprints through the garden";
    cout << ", he feels a soft green light break through the bushes..";
    cout << "Batman approaches the light..The care takers quarters." << std::endl;
    cout << "Batman opens the door and sees a terminal." << std::endl;
    cout << "" << std::endl;

    vector<string> myMenuOptions = {"Interact with terminal", "Leave Arkham north and go back to main area"};
    Menu myMenu("", myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice) {

        case 1:
            //Riddle question is displayed with options, if answer is correct, the player gets a key
            riddle(currentLocation, ArkhamAsylumMap, Player);

            break;

        case 2:
            currentLocation = ArkhamAsylumMap[Arkham_North]->getBottom();
            break;

    }

}
