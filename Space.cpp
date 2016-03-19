//
//  Space.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Space.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: abstract class for game areas
 ** Input:  Enemy and Hunter objects
 ** Output:  Objects interact with spaces
 *********************************************************************/
#include "Space.hpp"

Space::Space(std::string n)
{
    name = n;
    north = NULL;
    south = NULL;
    east = NULL;
    west = NULL;
    complete = false;
}

Space::~Space(){}

/*********************************************************************
 ** Function: setNorth
 ** Description: sets the northern Space
 ** Parameters:  Space Pointer
 ** Pre-Conditions: Space object exists
 ** Post-Conditions:  Space object assigned to the north
 *********************************************************************/
void Space::setNorth(Space* n)
{
    north = n;
}

/*********************************************************************
 ** Function: setSouth
 ** Description: sets the Southern Space
 ** Parameters:  Space Pointer
 ** Pre-Conditions: Space object exists
 ** Post-Conditions:  Space object assigned to the South
 *********************************************************************/
void Space::setSouth(Space* s)
{
    south = s;
}

/*********************************************************************
 ** Function: setEast
 ** Description: sets the eastern Space
 ** Parameters:  Space Pointer
 ** Pre-Conditions: Space object exists
 ** Post-Conditions:  Space object assigned to the east
 *********************************************************************/
void Space::setEast(Space* e)
{
    east = e;
}

/*********************************************************************
 ** Function: setWest
 ** Description: sets the Western Space
 ** Parameters:  Space Pointer
 ** Pre-Conditions: Space object exists
 ** Post-Conditions:  Space object assigned to the West
 *********************************************************************/
void Space::setWest(Space* w)
{
    west = w;
}

/*********************************************************************
 ** Function: getName()
 ** Description: Returns name of space
 ** Parameters:  none
 ** Pre-Conditions: Space object exists
 ** Post-Conditions:  returns name
 *********************************************************************/
std::string Space::getName()
{
    return name;
}

