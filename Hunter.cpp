//
//  Hunter.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Hunter.HPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for Hunter/ rogue /guardian/ cheater.  Class is abstract
 ** Input: Item Objects and enemy object.
 ** Output:  hunter object created
 *********************************************************************/

#include "Hunter.hpp"

//constructor
Hunter::Hunter(std::string n,  int s)
{
    srand( static_cast<unsigned int>( time(NULL)));
    name = n;
    health = s;
    std::vector<Item*> pack;
    location = NULL;
    holy = false;
    music = false;
    complete = false;
}

/*********************************************************************
 ** Function: setHealth
 ** Description: Allows for specification of Hunter health outside
 of the constructor
 ** Parameters:  int hp
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  Hunter object strength is set to hp
 *********************************************************************/
void Hunter::setHealth(int hp)
{
    health = hp;
}

/*********************************************************************
 ** Function: getHealth
 ** Description: returns the value of Hunter object's health
 ** Parameters:  none
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  returns the health value
 *********************************************************************/
int Hunter::getHealth()
{
    return health;
}

/*********************************************************************
 ** Function: getName
 ** Description: returns the value of Hunter object's name.
 ** Parameters:  none
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  returns the name of the Hunter as a string
 *********************************************************************/
std::string Hunter::getName()
{
    return name;
}

/*********************************************************************
 ** Function: getSpace
 ** Description: returns the value of Hunter object's location.
 ** Parameters:  none
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  returns the name of the location of hunter
 *********************************************************************/
Space* Hunter::getSpace()
{
    return this->location;
}

/*********************************************************************
 ** Function: setSpace
 ** Description: Allows for specification of Hunter location
 ** Parameters:  Space object
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  returns hunters location
 *********************************************************************/
void Hunter::setSpace(Space* room)
{
    this->location = room;
}

/*********************************************************************
 ** Function: rollDie
 ** Description: simulates a roll of a die.
 ** Parameters:  an int for the number of rolls, and for the number
 of sides on the die.
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  returns the value of the dice roll.
 *********************************************************************/
int Hunter::rollDie(int numRoll, int numSides)
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
 ** Description: removes Health of a character when they take damage.
 ** Parameters:  int hp, the amount of health to be removed
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  none
 *********************************************************************/
void Hunter::loseHealth(int hp)
{
    health -= hp;
    
}

/*********************************************************************
 ** Function: heal
 ** Description: increases hunters health
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  health is updated
 *********************************************************************/
void Hunter::heal()
{
    if ((getName() == "Guardian") && (getHealth() != 30))
    {
        health = getHealth() + rollDie(1,10);
        if(getHealth() > 30)
        {
            health = 30;
        }
    }
    else if ((getName() == "Rogue") && (getHealth() != 20))
    {
        health = getHealth() + rollDie(1,10);
        if(getHealth() > 20)
        {
            health = 20;
        }
    }
    std::cout<<"You have "<<getHealth()<<" HP"<<std::endl;
}

/*********************************************************************
 ** Function: addItem
 ** Description: adds item to the pack
 ** Parameters:  Item object
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  item is added to the pack
 *********************************************************************/
void Hunter::addItem(Item  in)
{
    pack.push_back(in);
    std::cout << "\n** " << in.getName() << " acquired **\n";
    std::cout<<'\n';
    sleep(1);
}

/*********************************************************************
 ** Function: has item
 ** Description: checks to see if a hunter is carrying an item
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  returned bool value
 *********************************************************************/
bool Hunter::hasItem(std::string name)
{
    bool n = false;
    for (int i= 0; i< pack.size(); i++)
    {
        if (pack[i].getName() == name)
        {
            n =true;
        }
        else
        {
            n = false;
        }
    }
    return n;
}

/*********************************************************************
 ** Function: remove Item
 ** Description: removes an item from the pack
 ** Parameters:  string out
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  out is removed from the pack
 *********************************************************************/
void Hunter::removeItem(std::string out)
{
    for (int i= 0; i< pack.size(); i++)
    {
        if (pack[i].getName() == out)
        {
            pack.erase(pack.begin()+i);
        }
    }
}

/*********************************************************************
 ** Function: useitem
 ** Description: uses the item and removes it from the pack
 ** Parameters:  none
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  item is used, hunter updated, item removed from pack
 *********************************************************************/
void Hunter:: useItem()
{
     bool choice = false;
    std::string ichoice = "";
    int counter = 0;
    std::cout << "\nSelect an Item To Use:\n";
    for(int i = 0; i < pack.size(); i++)
    {
        counter = counter + 1;
        std::cout << pack[i].getName() << std::endl;
    }
    
    if(pack.empty())
        std::cout<<"Pack is empty\n"<<std::endl;
    
    else if(choice == false)
    {
        std::cout<<"Enter item name to use"<<std::endl;
        std::cin>> ichoice;
        
        //use bloodvial
        if ((ichoice == "BloodVial") || (ichoice == "bloodvial") || (ichoice == "Bloodvial"))
        {
            std::cout<<"You injest the hold blood and heal your wounds"<<std::endl;
            heal();
            choice = true;
            removeItem("BloodVial");
        }
        
        //use lighter
        else if ((ichoice == "Lighter") || (ichoice == "lighter"))
        {
            std::cout<<"You flick the lighter.  A small flame appears"<<std::endl;
            choice = true;
        }
        
        //use holywater
        else if ((ichoice =="HolyWater") || (ichoice == "holywater")|| (ichoice == "Holywater"))
        {
            std::cout<<"You douse yourself in Holy Water and are protected from evil"<<std::endl;
            holy = true;
            choice = true;
            removeItem("HolyWater");
        }
        
        //use music box
        else if((ichoice == "MusicBox") || (ichoice == "musicbox") || (ichoice == "Musicbox"))
        {
            std::cout<<"The music box begin's to play Father Gascoigne's favorite melody\n"<<std::endl;
            music = true;
            choice = true;
            removeItem("MusicBox");
        }
        
        else
        {
            std::cout<<"Please enter the name of the Item you wish to use"<<std::endl;
        }
    }
}

/*********************************************************************
 ** Function: fight
 ** Description: simulates a fight sequence
 ** Parameters:  Beast pointer
 ** Pre-Conditions: hunter object exists
 ** Post-Conditions:  either the Hunter or beast is defeated
 *********************************************************************/
void Hunter::fight(Beast* beast)
{
    int dmg = 0;
    //check to see if both are alive
    while(health>0 && beast->getHealth()>0)
    {
        
        int enemyAtck = beast->attack();
        sleep(1);
        int enemyDef = beast->defend();
        sleep(1);
        atk = attack();
        sleep(1);
        def = defend();
        sleep(1);
        
        dmg = atk - enemyDef;
        
        if(dmg <=0)
        {
            dmg = 0;
        }
        
        beast->loseHealth(dmg);
        
        std::cout << "You did " << dmg << " in damage" << std::endl;
        
        //if enemy is defeated
        
        if(beast->getHealth() <= 0)
        {
            std::cout << beast->getName() << " was defated!\n" << std::endl;
            std::cout<<"****PREY SLAUGHTERED****"<<std::endl;
        }
        else //you take damage check
        {
            std::cout << beast->getName() << " has " << beast->getHealth() << " in health" <<std::endl;
            
            dmg = enemyAtck - def;
            
            if(dmg <=0)
            {
                dmg = 0;
            }
            else
            {
                //health updated
                health = health - dmg;
                //check to see that health isn't negative
                if (health < 0)
                {
                    health = 0;
                }
            }
            std::cout << "You took " << dmg << " damage" << std::endl;
            std::cout << "You have " << health << " HP remaining\n" <<std::endl;
        }
        
        if(health <= 0)
        {
            std::cout << "*****You Died*****" << std::endl;
            return;
        }
    }
}
