//
// Created by Sandybridge W10 on 3/9/2019.
//

#ifndef FINALPROJECT_COMMANDMODULE_H
#define FINALPROJECT_COMMANDMODULE_H
#include "Space.h"

class ArkhamEast: public Space {


private:

bool riddleSolved = false;

public:

    ArkhamEast();

    void riddle(Space *&currentLocation, vector<Space *> ArkhamAsylumMap);
   // virtual void riddleSolved(){ cout<<key<<std::endl;}
    virtual void run(Space *&currentLocation, vector<Space *> ArkhamAsylumMap);

};


#endif //FINALPROJECT_COMMANDMODULE_H
