/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Outlines the functions that help display various graphics in the game
*********************************************************************/

#ifndef FINALPROJECT_GAMEGRAPHICS_H
#define FINALPROJECT_GAMEGRAPHICS_H

#include <iostream>
#include <chrono>
#include <thread>


using std::cout;
using std::cin;
//using std::chrono::milliseconds;
//using std::thread;

//Defines various color codes that we can use to display color in a unix terminal. Not supported on Windows.
//Credit: https://stackoverflow.com/questions/9158150/colored-output-in-c
#define GREEN   "\033[32m"      /* Green */
#define RED     "\033[31m"      /* Red */
#define YELLOW  "\033[33m"      /* Yellow */
#define RESET   "\033[0m"

void displayBatman();
void displaySplashScreen();
void displayBatmanFace();
void displayBatmanDeath();
void displayBatmanWinScreen();
void displayBatmanSymbol();
void displayBatmanOutOfTime();


#endif //FINALPROJECT_GAMEGRAPHICS_H
