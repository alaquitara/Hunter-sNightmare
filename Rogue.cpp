//
//  Rogue.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Rogue.CPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file file for Rogue class
 ** Input: Hunter object exists
 ** Output:  Rogue object created
 *********************************************************************/
#include "Rogue.hpp"

/*********************************************************************
 ** Function: attack
 ** Description: rogue attack adds chance for a viceral attack
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  returns attack value
 *********************************************************************/
int Rogue::attack()
{
    int atk = Hunter::rollDie(2,10);
    if(atk >= 12)
    {
        std::cout<<"VISCERAL ATTACK"<<std::endl;
        atk = atk + 3;
    }
    
    return atk;
}