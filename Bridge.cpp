//
//  Bridge.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Bridge.CPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for central.  Class is an fight type
 ** Input:  Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#include "Bridge.hpp"

/*********************************************************************
 ** Function: menu
 ** Description: displays menu for bridge
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Bridge::menu()
{
    std::cout<<" 1. Cross the bridge and go east\n"
    <<" 2. Go back to central Yharnham\n"
    <<" 3. Use an Item"<<std::endl;
}

/*********************************************************************
 ** Function: enterRoom
 ** Description: provides interaction with the room
 ** Parameters:  Hunter Pointer
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  Hunter object updated
 *********************************************************************/
void Bridge::enterRoom(Hunter* hunter)
{
    int choice;
    
    std::cout<<" The Great Bridge.  A vessel from your world to ours."<<std::endl;
    
    do
    {
        menu();
        std::cin>>choice;
        
        switch(choice)
        {
            case 1:
            {
                int c;
                std::cout<<"You start crossing the bridge.  As you do the CLERIC BEAST charges from the other end.  A nephilim of a once white church priest, this abomination is blood thirsty!\n"<<std::endl;
                std::cout<<"what do you do?"<<std::endl;
                std::cout<<" 1. Use an Item \n"
                <<" 2. Face your foe\n"<<std::endl;
                
                std::cin>>c;
                
                if(c == 1)
                {
                    hunter->useItem();
                }
                else if (c ==2)
                {
                    if(hunter->holy == true)
                    {
                        int c;
                        std::cout<<"The holy water greatly weakened Cleric Beast, now is the time to attack!"<<std::endl;
                        cleric->setHealth(5);
                        hunter->fight(cleric);
                        special();
                        std::cin>>c;
                        if ((c ==1) && (hunter->getHealth() >0))
                        {
                            std::cout<<"a child's voice whispers from inside the house \"Here take this, it plays my daddy's favorite melody\""<<std::endl;
                            hunter->addItem(*music);
                            std::cout<<"Music Box added to inventory\n"<<std::endl;
                            sleep(1);
                            hunter->setSpace(north);
                            break;
                            }
                        
                        else if (hunter->getHealth() >0)
                        {
                            break;
                        }
                        else
                            hunter->setSpace(north);
                            break;
                    }
                    
                else;
                    hunter->fight(cleric);
                    if(hunter->getHealth() < 1)
                    {
                        break;
                    }
                    else
                        special();
                        std::cin>>c;
                        if ((c ==1) && (hunter->getHealth() >0))
                        {
                            std::cout<<"a child's voice whispers from inside the house \"Here take this, it plays my daddy's favorite melody\""<<std::endl;
                            
                            hunter->addItem(*music);
                            std::cout<<"Music Box added to inventory\n"<<std::endl;
                            sleep(1);
                            hunter->setSpace(north);
                        }
        
                    else
                    {
                        hunter->setSpace(north);
                    }
                }
                break;
            }
            case 2:
            {
                hunter->setSpace(west);
                break;
            }
            case 3:
            {
                hunter->useItem();
            }
            
            default:
            {
                std::cout<<"Please choose from the list"<<std::endl;
            }
                
        }
    }
    while((choice != 1) && (choice !=2));
}

void Bridge::special()
{
    std::cout<<"at the end of the bridge is a small house.  Its side window is cracked open and candle light burns from within\n"<<"what do you do?"<<std:: endl;
    std::cout<<" 1. Interact\n"
    <<" 2. ignore"<<std::endl;
}
