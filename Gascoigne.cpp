//
//  Gascoigne.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "Gascoigne.hpp"
/*********************************************************************
 ** Program Filename:  Gascoigne.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation for Gascoigne class
 ** Input: Public Hunter
 ** Output:  Gascoign object created
 *********************************************************************/

/*********************************************************************
 ** Function: attack
 ** Description: Checks to see if gascoigne transforms and applies it to attack
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  returns a damage value
 *********************************************************************/
int Gascoigne::attack()
{
    transTest();
    if (transform == true)
    {
        return Beast::rollDie(5,10);
    }
    
    else
    {
        return Beast::rollDie(3,6);
    }
}
/*********************************************************************
 ** Function:defend
 ** Description: calculates value of defend
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  returns value of defend
 *********************************************************************/
int Gascoigne::defend() {return Beast::rollDie(1,10);}

/*********************************************************************
 ** Function: Weaken
 ** Description: applies the effects of holywater and weakens the clericBeat
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  health = 2
 *********************************************************************/
std::string Gascoigne:: getName() {return "Father Gascoigne";}

/*********************************************************************
 ** Function: transTest
 ** Description: Checks to see if gascoigne transforms
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  transform returned
 *********************************************************************/
void Gascoigne::transTest()
{
    if (getHealth() < 15)
    {
        std::cout<<"Father Gascoigne Transforms into a viscous beast,  Only his favorite melody can cure him of his beasthood\n"<<std::endl;
        transform = true;
    }
    
}
