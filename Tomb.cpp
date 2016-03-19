//
//  Tomb.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Tomb.CPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for Tomb.  Class is an fight type
 ** Input:  Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#include "Tomb.hpp"

/*********************************************************************
 ** Function: enterRoom
 ** Description: provides interaction with the room
 ** Parameters:  Hunter Pointer
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  Hunter object updated
 *********************************************************************/
void Tomb::enterRoom(Hunter* hunter)
{
    int choice = 0;
    
    std::cout<<"Entering the Tomb of Oedon"<<std::endl;
    sleep(2);
    std::cout<<"A shadowy figure of a hunter stands towards the back of the tomb\n"<<std::endl;
    
    do
    {
        menu();
        std::cin>>choice;
        
        switch(choice)
        {
            case 1:
            {
                std::cout<<"You approach the hunter. This must be Father Gascoigne, a hunter lost too long in the nightmare\n"<<std::endl;
                if(hunter->music == true)
                {
                    std::cout<<"Gascoigne:\"Beasts all over the shop... you'll be one sooner or laaaa..... You you've found me Music Box.  Oh how I do love that melody.  Did you find me daughter?  Where is she?  Is she safe?\n I must go to her at once!  But first take this..\"\n"<<std::endl;
                    sleep(2);
                    std::cout<<"Father Gascoigne throws a large slimy slug at you.  It sticks to your face and starts to crawl all over your head.  You try to remove it but cannot\n"<<std::endl;
                    sleep(1);
                    std::cout<<"You awake... in your home... in your bed. The sun is rising, birds are singing. Your dog is licking your face, perhaps you should take it on a walk and start your day?"<<std::endl;
                    std::cout<<"sleep tight!\n"<<std::endl;
                    hunter->complete = true;
                }
                else
                {
                    gascoigne->speak();
                    hunter->fight(gascoigne);
                    std::cout<<"You awake... in your home... in your bed. The sun is rising, birds are singing. Perhaps you should make some coffee and start your day?"<<std::endl;
                    std::cout<<"sleep tight!\n"<<std::endl;
                    std::cout<<"*****YOU WIN*****"<<std::endl;
                    hunter->complete = true;
                }
                break;
            }
            case 2:
            {
                std::cout<<"You try but you can't bring yourself to leave\n"<<std::endl;
                break;
            }
            case 3:
            {
                std::cout<<"You attempt to open the door but it's locked\n"<<std::endl;
                break;
            }
            case 4:
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
    while(choice !=1);
}

/*********************************************************************
 ** Function: menu
 ** Description: displays menu for bridge
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Tomb::menu()
{
    std::cout<<" 1. Apprach the figure \n"
    <<" 2. Go south to the Great Bridge\n"
    <<" 3. Go back to the Cathedral \n"
    <<" 4. Use an Item"<<std::endl;
}

void Tomb::special()
{
    std::cout<<"Gascoigne:\"Beasts all over the shop... you'll be one sooner or laaaa..... You you've found me Music Box.  Oh how I do love that melody.  Did you find me daughter?  Where is she?  Is she safe?\n I must go to her at once!  But first take this..\"\n"<<std::endl;
    sleep(2);
    std::cout<<"Father Gascoigne throws a large slimy slug at you.  It sticks to your face and starts to crawl all over your head.  You try to remove it but cannot\n"<<std::endl;
}


