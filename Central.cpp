//
//  Central.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Central.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for central.  Class is a move / talk type
 ** Input:  Item and Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#include "Central.hpp"


/*********************************************************************
 ** Function: menu
 ** Description: displays menu for central
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Central::menu()
{
    std::cout<<" 1. Go north to the Grand Cathedral \n"
    <<" 2. Go East to the Great Bridge\n"
    <<" 3. Go West to the forbidden woods\n"
    <<" 4. Go south back to the sick room\n"
    <<" 5. Knock on the door of the caravan\n"
    <<" 6. Use an Item"<<std::endl;
}

/*********************************************************************
 ** Function: enterRoom
 ** Description: provides interaction with the room
 ** Parameters:  Hunter Pointer
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  Hunter object updated
 *********************************************************************/
void Central::enterRoom(Hunter* hunter)
{
    int choice;
    
            
    std::cout<<" Central Yharnam, a crossroads if you will.  It is a large circular area, the storefronts are boarded up.  This once bustling city center is now a ghost town.  In the center of it all stands a caravan with a faint flicker of candle light and a directional road post."<<std::endl;
            
            do
            {
                menu();
                std::cin>>choice;
                
                switch(choice)
                {
                    case 1:
                    {
                        hunter->setSpace(north);
                        break;
                    }
                    case 2:
                    {
                        hunter->setSpace(east);
                        break;
                    }
                    case 3:
                    {
                        std::cout<<"This direction is boarded up.  Theres no possible way you could get by\n\n"<<std::endl;
                        sleep(2);
                        break;
                    }
                    case 4:
                    {
                        hunter->setSpace(south);
                        break;
                    }
                    case 5:
                    {
                        special();
                        break;
                    }
                    case 6:
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
            while((choice == 5) && (choice ==6));
    }

/*********************************************************************
 ** Function: talk
 ** Description: voice diologue
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Central::special()
{
    std::cout<<"A voice calls out from behind the door \"Fair night for a hunter yeah.  The white church was once a powerful institution in Yharnam.  Things are no different on the night of the hunt.  In a nightmare the fair becomes foul.  Perhaps you can use their own powers against them.  Or maybe you're all pretending it doesn't exist?  I should think you still have dreams? Well, next time you dream... give some thought...\" \n"<<std::endl;
}




