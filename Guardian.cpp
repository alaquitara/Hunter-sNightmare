//
//  Guardian.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Guardian.CPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file file for Guardian class
 ** Input: Hunter object exists
 ** Output:  Guardian object created
 *********************************************************************/
#include "Guardian.hpp"

/*********************************************************************
 ** Function: Attack
 ** Description: Guardians calculates attack value
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  returns attack value
 *********************************************************************/
int Guardian::attack() {return Hunter::rollDie(1, 6);}

/*********************************************************************
 ** Function: defend
 ** Description: Guardians defense adds option for shield block.
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  returns defense value
 *********************************************************************/
int Guardian::defend()
{
    int defense = Hunter::rollDie(2, 6);
    if(defense >= 6)
    {
        std::cout<<"ATTACK BLOCKED"<<std::endl;
        block = true;
        defense = defense + 3;
    }
    return defense;
}

/*********************************************************************
 ** Function: getName
 ** Description: Returns name of Cleric Beast
 ** Parameters:  none
 ** Pre-Conditions: ClericBeast object exists
 ** Post-Conditions:  name is returned
 *********************************************************************/
std::string Guardian:: getName() {return "Guardian";}