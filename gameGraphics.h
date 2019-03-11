//
// Created by Sandybridge W10 on 3/10/2019.
//

#ifndef FINALPROJECT_GAMEGRAPHICS_H
#define FINALPROJECT_GAMEGRAPHICS_H

#include <iostream>
#include <chrono>
#include <thread>


using std::cout;
using std::cin;
//using std::chrono::milliseconds;
//using std::thread;


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
