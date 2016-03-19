//
//  SickRoom.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  dream.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for SickRoom.  Class is a Item / Fight type
 ** Input:  Item and Hunter objects exists
 ** Output:  continues game
 *********************************************************************/
#include "SickRoom.hpp"

/*********************************************************************
 ** Function: menu
 ** Description: displays menu for SickRoom
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/

void SickRoom::menu()
{
    std::cout<<" 1. Light the torch \n"
             <<" 2. Explore the room \n"
             <<" 3. Use Item \n"
             <<" 4. Exit out the front door"<<std::endl;
}

/*********************************************************************
 ** Function: enterRoom
 ** Description: provides interaction with the room
 ** Parameters:  Hunter Pointer
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  Hunter object updated
 *********************************************************************/
void SickRoom::enterRoom(Hunter* hunter)
{
    //Item lighter("Lighter", 1); Beast* beastr = new TheBeast();
    int choice;

    
    do
    {
        menu();
        std::cin>>choice;
    
        switch(choice)
        {
            case 1:
            {
                if(hunter->hasItem("Lighter"))
                {
                    std::cout<<"You light the torch, as you do so skeletons appear from the floor below you. They pull you deep beneath the ground and away from the nightmare"<<std::endl;
                    hunter->setSpace(south);
                }
                else
                    std::cout<<"You have nothing with which to light the torch... \n"<<std::endl;
                    sleep(1);
                    break;
                }
            case 2:
                {
                int n;
                special();
                std::cin>> n;
            
                if(n == 1)
                {
                    if(!hunter->hasItem("lighter"))
                    hunter->addItem(*lighter);
                }
                break;
                }
            case 3:
            {
                hunter->useItem();
                break;
            }
            case 4:
            {
                std::cout<<"The fowl stench of the room is too much to bear,  you make a move for the front door, just as you reach for the handle you hear the ghastly snarls of a beast behind you, Enough trembling in your boots. A hunter must hunt. "<<std::endl;
                hunter->fight(beastr);
                hunter->setSpace(north);
                break;
            }
            default:
            {
                std::cout<<"Please choose from the list"<<std::endl;
            }

        }
    }
    while((choice != 4) && (choice !=1));
}

void SickRoom::special()
{
    std::cout<<"You decided to search the room.  In a cupboard near the back you find a lighter"<<std::endl;
    std::cout<<"Enter 1 to pick it up.  Enter 2 to leave it"<<std::endl;
    
}

