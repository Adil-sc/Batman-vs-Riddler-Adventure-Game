#include <iostream>
#include "Game.h"




int main() {

    Game myGame;
    int menuChoice = 0;
    vector <string> myMenuOptions = {"Play","Quit"};
    Menu myMenu("",myMenuOptions);

    displaySplashScreen();


    menuChoice = myMenu.displayMenu();

    switch(menuChoice){
        case 1:
            myGame.gameStart();
            break;

        case 2:
            break;
    }


    return 0;
}
