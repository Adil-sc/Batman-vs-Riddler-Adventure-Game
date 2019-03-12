/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the derived Arkham West class
*********************************************************************/
#include "ArkhamWest.h"

ArkhamWest::ArkhamWest()
        : Space("Arkham West") {

}


/*********************************************************************
** Description: Function that handles displaying the riddle for each room the player is in.
 * Takes as parameters:
 * Space* To interact with the current location of the player
 * vector<Space*> To have access to all locations in the game
 * Player* To modify player attributes like adding items to the utility belt
*********************************************************************/
void ArkhamWest::riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    if (riddleSolved != true) {
        int menuChoice = 0;

        //Riddle question
        cout << GREEN << std::endl;
        cout << "+-----------------------------------------------------------------------+" << std::endl;
        cout << "|                           RIDDLE ME THIS                              |" << std::endl;
        cout << "+-----------------------------------------------------------------------+" << std::endl;
        cout << "|                                                                       |" << std::endl;
        cout << "|    WHAT IS IT THAT NO MAN WANTS TO HAVE BUT NO MAN WANTS TO LOSE?     |" << std::endl;
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
        vector<string> myMenuOptions = {"A lawsuit", "True love", "Childern", "A countersuit"};
        Menu myMenu("", myMenuOptions);
        menuChoice = myMenu.displayMenu();

        switch (menuChoice) {

            //Correct answer. Sets the riddleSolved to true, adds a Key to the utility belt
            //and takes the player back to the main room of Arkham
            case 1:
                Player->addToUtilityBelt("Arkham West Key", 3);
                riddleSolved = true;
                currentLocation = ArkhamAsylumMap[Arkham_West]->getRight();
                cout << GREEN << "OBTAINED 1X ARKHAM WEST KEY" << RESET << std::endl;
                cout << "Lines of code flash on the terminal....Batman hear a safe in the room unlock. He approaches the safe and in it he finds a key.";
                cout << " He puts the key in his utility belt and proceeds to search the rest of the Asylum" << std::endl;

                cout << "Press enter to continue..." << std::endl;
                cin.ignore();
                cin.ignore();
                break;

            case 2:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
                break;

            case 3:
                currentLocation = ArkhamAsylumMap[Arkham_DeathRoom];
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

        currentLocation = ArkhamAsylumMap[Arkham_West]->getRight();

    }

}


/*********************************************************************
** Description: Virtual method that is called for each of the space objects to run anything specific to that room
 * Takes as parameters:
 * Space* To interact with the current location of the player
 * vector<Space*> To have access to all locations in the game
 * Player* To modify player attributes like adding items to the utility belt
*********************************************************************/
void ArkhamWest::run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap, Player *&Player) {

    int menuChoice = 0;

    cout << "<--Arkham West-->" << std::endl;
    cout << "" << std::endl;

    displayBatman();
    cout << "Batman steps into the intensive care facility...No one is here yet he feels a strange presence.";
    cout << " The lights flicker and switch off..a loud screech comes from the end of the hall.";
    cout << " Batman approaches a door that has its plaque scratched out, itreads 'Dr. Crane'..The Scarecrow." << std::endl;
    cout << "Batman opens the door and sees a terminal." << std::endl;
    cout << "" << std::endl;

    vector<string> myMenuOptions = {"Interact with terminal", "Go back to main area"};
    Menu myMenu("", myMenuOptions);
    menuChoice = myMenu.displayMenu();

    switch (menuChoice) {

        case 1:
            //Riddle question is displayed with options, if answer is correct, the player gets a key
            riddle(currentLocation, ArkhamAsylumMap, Player);
            break;

        case 2:
            //Player is sent back to the command module
            currentLocation = ArkhamAsylumMap[Arkham_West]->getRight();
            break;

    }

}