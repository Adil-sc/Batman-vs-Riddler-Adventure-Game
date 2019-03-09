//
// Created by Sandybridge W10 on 3/8/2019.
//

#include "Space.h"

Space::Space(string newDescription)
    :description(newDescription)
{

}

void Space::setTop(Space *top) {

    this->top = top;

}

void Space::setRight(Space *right) {

    this->right = right;

}

void Space::setLeft(Space *left) {

    this->left = left;

}

void Space::setBottom(Space *bottom) {

    this->bottom = bottom;

}


Space* Space::getTop() {

    return top;

}

Space* Space::getRight() {

    return right;

}

Space* Space::getLeft() {

    return left;
}

Space* Space::getBottom() {
    return bottom;
}