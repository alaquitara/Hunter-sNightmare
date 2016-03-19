//
//  Nightmare.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Nightmare.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Controls the flow of the game
 ** Input:  All Class objects
 ** Output:  Class objects interacting
 *********************************************************************/
#include "Nightmare.hpp"
Nightmare::Nightmare()
{
    //creates all class objects
    
    hunter = charSelect(hunter);
    
    sickRoom = new SickRoom();
    central = new Central();
    cathedral = new Cathedral();
    bridge = new Bridge();
    tomb = new Tomb();
    dream = new Dream();
    
    
    //initialize the map
    
    sickRoom->setNorth(central);
    sickRoom->setSouth(dream);
    sickRoom->setEast(NULL);
    sickRoom->setWest(NULL);
    
    dream->setNorth(sickRoom);
    dream->setSouth(NULL);
    dream->setEast(NULL);
    dream->setWest(NULL);
    
    central->setNorth(cathedral);
    central->setSouth(sickRoom);
    central->setEast(bridge);
    central->setWest(NULL);
    
    cathedral->setNorth(NULL);
    cathedral->setSouth(central);
    cathedral->setEast(tomb);
    cathedral->setWest(NULL);
    
    bridge->setNorth(tomb);
    bridge->setSouth(NULL);
    bridge->setEast(NULL);
    bridge->setWest(central);
    
    tomb->setNorth(NULL);
    tomb->setSouth(bridge);
    tomb->setEast(NULL);
    tomb->setWest(cathedral);
    
    
    //Hunter starts off in the sickroom.
    hunter->setSpace(sickRoom);
}

/*********************************************************************
 ** Function: charSelect
 ** Description: Allows user to pick which type of hunter to play
 ** Parameters:  Hunter pointer
 ** Pre-Conditions: Hunter object exists
 ** Post-Conditions:  hunter is assigned to a child class
 *********************************************************************/
Hunter* Nightmare::charSelect(Hunter* p1)
{
    int select;
    
    do
    {
        std::cout<< "****Hunter Select****"<<std::endl;
        std::cout<<"Select 1 for Guardian"<<std::endl;
        std::cout<<"Select 2 for Rogue"<<std::endl;
        std::cout<<"Select 3 for a Cheater"<<std::endl;
        std::cin>> select;
    }while((select <1) && (select > 2));
    switch (select)
    {
        case 1:
        {
            p1 = new Guardian();
            std::cout<<"You chose Guardian"<<std::endl;
            break;
        }
        case 2:
        {
            p1 = new Rogue();
            std::cout<<"You chose Rogue"<<std::endl;
            break;
        }
        case 3:
        {
            p1 = new Cheater();
            std::cout<<"You chose Cheater"<<std::endl;
        }
        default:
            std::cout<<"please select from the menu"<<std::endl;
    }
    return p1;
}

/*********************************************************************
 ** Function: play
 ** Description: Runs the game
 ** Parameters:  None
 ** Pre-Conditions: Nighmare object exists
 ** Post-Conditions:  none
 *********************************************************************/
void Nightmare::play()
{
    int moves = 15;
    Space* thisSpace;
    Space* nextSpace;
    thisSpace = hunter->getSpace();
    
    std::cout<<" You awaken in a cold sweat.  Surrounding you are blood soaked hospital beds.  An IV still attached to your arm.  The IV bag reads \"FEAR THE OLD BLOOD\"  You have a vague memory of an old hunter who welcomes and guides new hunters in the dream,  what secrets does he hide? What's that smell? The sweet blood, oh it sings to me. It's enough to make a man sick"<<std::endl;
    
    std::cout<<"You remove the IV from your arm and get out of bed, what do you do next?"<<std::endl;
    
    //runs loop until player dies or completes the game
    while((hunter->getHealth()> 0) && (moves>0)  && (hunter->complete == false))
    {
        std::cout<<"\n*****"<<moves<<" more hours before dawn*****\n"<<std::endl;
        sleep(2);
        thisSpace = hunter->getSpace();
        thisSpace->enterRoom(hunter);
        nextSpace = thisSpace;
        moves--;
    }
    
    if((moves ==0) || (hunter->getHealth() < 1))
    {
        std::cout<<"You wake up without successfully completing them nightmare.  See you next time you sleep, Might as well throw away that dream catcher\n"<<std::endl;
        std::cout<<"*****YOU LOSE*****"<<std::endl;
    }
}
