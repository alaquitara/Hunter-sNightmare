//
//  ClericBeast.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

/*********************************************************************
 ** Program Filename:  ClericBeast.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation for ClericBeast class
 ** Input: Public Hunter
 ** Output:  ClericBeast object created
 *********************************************************************/
#include "ClericBeast.hpp"

/*********************************************************************
 ** Function: attack
 ** Description: calculates value of attach
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  returns value of attack
 *********************************************************************/
int ClericBeast:: attack() {return Beast::rollDie(1,10);}

/*********************************************************************
 ** Function:defend
 ** Description: calculates value of defend
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  returns value of defend
 *********************************************************************/
int ClericBeast:: defend() {return Beast::rollDie(1,10);}

/*********************************************************************
 ** Function: getName
 ** Description: Returns name of Cleric Beast
 ** Parameters:  none
 ** Pre-Conditions: ClericBeast object exists
 ** Post-Conditions:  name is returned
 *********************************************************************/
std::string ClericBeast::getName() {return "Cleric Beast";}

/*********************************************************************
 ** Function: Weaken
 ** Description: applies the effects of holywater and weakens the clericBeat
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  health = 2
 *********************************************************************/
void ClericBeast::weaken()
{
    health = 2;
}