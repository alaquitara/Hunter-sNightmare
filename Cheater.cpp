//
//  Cheater.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Cheater.CPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file file for Rogue class
 ** Input: Hunter object exists
 ** Output:  Cheater object created
 *********************************************************************/
#include "Cheater.hpp"

/*********************************************************************
 ** Function: Attack
 ** Description: calculates attack value
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  returns attack value
 *********************************************************************/
int Cheater::attack() {return Hunter::rollDie(15,15);}

/*********************************************************************
 ** Function: defend
 ** Description: Guardians defense adds option for shield block.
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  returns defense value
 *********************************************************************/
int Cheater::defend() {return Hunter::rollDie(15,15);}

/*********************************************************************
 ** Function: getName
 ** Description: Returns name of Cheater Beast
 ** Parameters:  none
 ** Pre-Conditions: cheter object exists
 ** Post-Conditions:  name is returned
 *********************************************************************/
std::string Cheater::getName(){return "Cheater";}
