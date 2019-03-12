/*********************************************************************
** Program Name: Final Project
** Author: Adil Chaudhry
** Date: 3/11/2019
** Description: Class definition file for the Spaces base class which is used to implement the various areas of the game
*********************************************************************/

#include "Space.h"


/*********************************************************************
** Description: Base class constructor
*********************************************************************/
Space::Space(string newDescription)
        : description(newDescription) {

}


/*********************************************************************
** Description: Setter function to set the top pointer of a space object
*********************************************************************/
void Space::setTop(Space *top) {

    this->top = top;

}


/*********************************************************************
** Description: Setter function to set the right pointer of a space object
*********************************************************************/
void Space::setRight(Space *right) {

    this->right = right;

}


/*********************************************************************
** Description: Setter function to set the left pointer of a space object
*********************************************************************/
void Space::setLeft(Space *left) {

    this->left = left;

}


/*********************************************************************
** Description: Setter function to set the bottom pointer of a space object
*********************************************************************/
void Space::setBottom(Space *bottom) {

    this->bottom = bottom;

}

/*********************************************************************
** Description: Returns a space object from a top pointer
*********************************************************************/
Space *Space::getTop() {

    return top;

}


/*********************************************************************
** Description: Returns a space object from a right pointer
*********************************************************************/
Space *Space::getRight() {

    return right;

}


/*********************************************************************
** Description: Returns a space object from a left pointer
*********************************************************************/
Space *Space::getLeft() {

    return left;
}


/*********************************************************************
** Description: Returns a space object from a bottom pointer
*********************************************************************/
Space *Space::getBottom() {
    return bottom;
}