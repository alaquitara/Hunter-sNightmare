//
//  Dream.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/13/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  dream.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for Hunter's Dream.  Class is a talking/ Item class
 ** Input:  Item and Hunter objects exists
 ** Output:  continues game
 *********************************************************************/
#include "Dream.hpp"

/*********************************************************************
 ** Function: menu
 ** Description: displays menu for hunters dream
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Dream::menu()
{
    std::cout<<" 1. Explore the Hunter's Dream \n"
    <<" 2. Talk with the doll \n"
    <<" 3. Return to Sick Room \n"<<std::endl;
}

/*********************************************************************
 ** Function: enterRoom
 ** Description: provides interaction with the room
 ** Parameters:  Hunter Pointer
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  hunter is updated
 *********************************************************************/
void Dream::enterRoom(Hunter* hunter)
{
    Item blood("BloodVial", 1);
    int choice;
    
    std::cout<<"You awaken in the Hunter's dream"<<std::endl;
    
    do
    {
        menu();
        std::cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            special();
            break;
        }
        case 2:
        {
            talk();
            if(!hunter->hasItem("BloodVial"))
            {
                std::cout<<"**She hands you a vial of blood**\n"<<std::endl;
                hunter->addItem(blood);
            }
            else
                std::cout<<"You can't carry anymore BloodVials"<<std::endl;
            break;
        }
        case 3:
        {
            hunter->setSpace(north);
            break;
        }
        default:
        {
            std::cout<<"Please choose from the list"<<std::endl;
            break;
        }
    }
    }
    while(choice != 3);
    
}

/*********************************************************************
 ** Function: talk
 ** Description: diologue of doll
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Dream::talk()
{
    std::cout<<"Welcome home good hunter \n"
        <<"did you know a hunter is a hunter even in a dream?\n"
        <<"in your journey ahead you must destroy the scourge to end this nightmare \n"
        <<"Seek the old blood. Let us pray... let us wish... to partake in communion. Let us partake in communion... and feast upon the old blood."<<std::endl;
}

/*********************************************************************
 ** Function: Special
 ** Description: diologue of doll
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Dream::special()
{
    std::cout<<"Ah-hah, you must be the new hunter. Welcome to the Hunter's Dream. This will be your home, for now. I am... Gehrman, friend to you hunters. You're sure to be in a fine haze about now, but don't think too hard about all of this. Just go out and kill a few beasts. It's for your own good. You know, it's just what hunters do! You'll get used to it...\n"
        <<"The night.. and dreams are long"<<std::endl;
}
