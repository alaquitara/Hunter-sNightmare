//
//  Beasts.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Beasts.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for thebeast, clericbeast, and gascoigne.  Class is abstract
 ** Input: none
 ** Output:  Beast object created
 *********************************************************************/
#include "Beasts.hpp"
//constructor
Beast::Beast(std::string n, int a, int s)
{
    srand( static_cast<unsigned int>( time(NULL)));
    name = n;
    armor = a;
    health = s;
    isdead = false;

}

/*********************************************************************
 ** Function: setArmor
 ** Description: Allows for specification of beasts health outside
 of the constructor
 ** Parameters:  int hp
 ** Pre-Conditions: Character object exists
 ** Post-Conditions:  Character object strength is set to hp
 *********************************************************************/
void Beast::setHealth(int hp)
{
    health = hp;
}

/*********************************************************************
 ** Function: getHealth
 ** Description: returns the value of Beast object's Health
 ** Parameters:  none
 ** Pre-Conditions: Character object exists
 ** Post-Conditions:  returns the health value
 *********************************************************************/
int Beast::getHealth()
{
    return health;
}

/*********************************************************************
 ** Function: getName
 ** Description: returns the value of Beast object's name.
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  returns the name of the Beast as a string
 *********************************************************************/
std::string Beast::getName()
{
    return name;
}

/*********************************************************************
 ** Function: rollDie
 ** Description: simulates a roll of a die.
 ** Parameters:  an int for the number of rolls, and for the number
 of sides on the die.
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  returns the value of the dice roll.
 *********************************************************************/
int Beast::rollDie(int numRoll, int numSides)
{
    int j= 0;
    
    for(int i = 0; i<numRoll; i++)
    {
        j +=rand()% numSides +1;
    }
    return j;
}

/*********************************************************************
 ** Function: loseHealth
 ** Description: removes health of a beast when they take damage.
 ** Parameters:  int hp the amount of health to be removed
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  none
 *********************************************************************/
void Beast::loseHealth(int hp)
{
    health -= hp;
    
}

/*********************************************************************
 ** Function: speak()
 ** Description: Diologue for Gascoigne
 ** Parameters:  none
 ** Pre-Conditions: Beast object exists
 ** Post-Conditions:  none
 *********************************************************************/
void Beast::speak()
{
    std::cout<<"Beasts all over the shop... You'll be one of them, sooner or later"<<std::endl;
    
    
    std::cout<<"Do you have a screw loose...or is it your animal intuition? You hunters have more blood on your hands!" << std::endl;
}


