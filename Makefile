###
### @author - Adil Chaudhry <chaudhra@oregonstate.edu>
### @description - Makefile for FinalProject  
###

CFLAGS = -std=c++11 -ggdb3 -Wall 

FinalProject: main.o Space.o ArkhamWest.o inputValidation.o Menu.o Game.o ArkhamMainRoom.o ArkhamNorth.o ArkhamSouth.o ArkhamEast.o ArkhamDeathRoom.o Player.o ArkhamWinRoom.o gameGraphics.o
	g++ $(CFLAGS) main.o Space.o ArkhamWest.o inputValidation.o Menu.o Game.o ArkhamMainRoom.o ArkhamNorth.o ArkhamSouth.o ArkhamEast.o ArkhamDeathRoom.o Player.o ArkhamWinRoom.o gameGraphics.o -o FinalProject

main.o: main.cpp
	g++ $(CFLAGS) -c main.cpp
	
Space.o: Space.cpp Space.h
	g++ $(CFLAGS) -c Space.cpp
	
ArkhamWest.o:ArkhamWest.cpp ArkhamWest.h
	g++ $(CFLAGS) -c ArkhamWest.cpp
	
ArkhamMainRoom.o: ArkhamMainRoom.cpp ArkhamMainRoom.h
	g++ $(CFLAGS) -c ArkhamMainRoom.cpp

ArkhamNorth.o: ArkhamNorth.cpp ArkhamNorth.h
	g++ $(CFLAGS) -c ArkhamNorth.cpp

ArkhamSouth.o: ArkhamSouth.cpp ArkhamSouth.h
	g++ $(CFLAGS) -c ArkhamSouth.cpp

ArkhamEast.o: ArkhamEast.cpp ArkhamEast.h
	g++ $(CFLAGS) -c ArkhamEast.cpp

ArkhamDeathRoom.o: ArkhamDeathRoom.cpp ArkhamDeathRoom.h
	g++ $(CFLAGS) -c ArkhamDeathRoom.cpp

Player.o: Player.cpp Player.h
	g++ $(CFLAGS) -c Player.cpp
	
ArkhamWinRoom.o: ArkhamWinRoom.cpp ArkhamWinRoom.h
	g++ $(CFLAGS) -c ArkhamWinRoom.cpp

gameGraphics.o: gameGraphics.cpp gameGraphics.h
	g++ $(CFLAGS) -c gameGraphics.cpp
	
Game.o:Game.cpp Game.h
	g++ $(CFLAGS) -c Game.cpp
	
inputValidation.o: inputValidation.cpp inputValidation.h
	g++ $(CFLAGS) -c inputValidation.cpp
	
Menu:Menu.cpp Menu.h
	g++ $(CFLAGS) -c Menu.cpp
	
clean:
	rm *.o FinalProject