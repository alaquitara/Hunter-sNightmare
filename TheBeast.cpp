//
//  TheBeast.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  TheBeast.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header for TheBeast class
 ** Input: Public Hunter
 ** Output:  TheBeast object created
 *********************************************************************/
#include "TheBeast.hpp"

/*********************************************************************
 ** Function: attack
 ** Description: calculates value of attach
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  returns value of attack
 *********************************************************************/
int TheBeast:: attack()
{
    return Beast::rollDie(2,6);
}

/*********************************************************************
** Function:defend
** Description: calculates value of defend
** Parameters:  none
** Pre-Conditions: Beast object exists
** Post-Conditions:  returns value of defend
*********************************************************************/
int TheBeast:: defend()
{
    return Beast::rollDie(1,5);
}

/*********************************************************************
 ** Function: getName
 ** Description: Returns name of Cleric Beast
 ** Parameters:  none
 ** Pre-Conditions: ClericBeast object exists
 ** Post-Conditions:  name is returned
 *********************************************************************/
std::string TheBeast::getName()
{
    return "Beast";
}
