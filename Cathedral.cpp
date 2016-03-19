//
//  Cathedral.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Cathedral.CPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for central.  Class is an Item type
 ** Input:  Item and Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#include "Cathedral.hpp"

/*********************************************************************
 ** Function: enterRoom
 ** Description: provides interaction with the room
 ** Parameters:  Hunter Pointer
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  Hunter object updated
 *********************************************************************/
void Cathedral::enterRoom(Hunter* hunter)
{
    int choice;
    
    std::cout<<" The Grand Cathedral.  A place of worship for the white church"<<std::endl;
    
    do
    {
        menu();
        std::cin>>choice;
        
        switch(choice)
        {
            case 1:
            {
                std::cout<<"The door slams and locks behind you\n"<<std::endl;
                hunter->setSpace(east);
                break;
            }
            case 2:
            {
                hunter->setSpace(south);
                break;
            }
            case 3:
            {
                special();
                if(hunter->hasItem("BloodVial"))
                {
                    std::cout<<"You atone for you sins and are liberated of your beasthood"<<std::endl;
                    std::cout<<"There is also a blood vial here but you are already carrying one."<<std::endl;
                    
                }
                else{
                    hunter->addItem(*blood);
                    std::cout<<"You atone for you sins and are liberated of your beasthood"<<std::endl;
                    std::cout<<"Blood Vial entered into your inventory"<<std::endl;
                }
                
                break;
            }
            case 4:
            {
                int n = 0;
                {
                std::cout<<" in the center of the church stands a massive alter, upon it are the scraps of the most recent communion and some holy water.  What do you do?"<<std::endl;
                std::cout<<" 1. Eat the scraps\n"
                <<" 2. take the water"<<std::endl;
                std::cin>>n;
                if(n == 1)
                {
                    std::cout<<"You eat the scraps off the alter... I wouldn't call that satisfying"<<std::endl;
                }
                if(n ==2)
                {
                    if(!hunter->hasItem("HolyWater"))
                    {
                    std::cout<<"You take the water"<<std::endl;
                    hunter->addItem(*water);
                    }
                    else
                    {
                        std::cout<<"You already have HolyWater, You can't carry any more"<<std::endl;
                    }
                }
                break;
                }
            }
            case 5:
            {
                
                hunter->useItem();
                break;
            }
            default:
            {
                std::cout<<"Please choose from the list"<<std::endl;
            }
                
        }
    }
    while((choice != 1) && (choice !=2));
}
/*********************************************************************
 ** Function: menu
 ** Description: displays menu for cathedral
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Cathedral::menu()
{
    std::cout<<" 1. Walk out the back door \n"
    <<" 2. go back to Central Yharnham \n"
    <<" 3. Seek confession \n"
    <<" 4. Check the alter \n"
    <<" 5. Use Item \n"<<std::endl;
}
/*********************************************************************
 ** Function: confession
 ** Description: voice diologue
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Cathedral::special()
{
    std::cout<<" You enter the confessional and atone for your sins.\n" <<std::endl;
}

