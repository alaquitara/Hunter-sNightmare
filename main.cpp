//
//  main.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include <iostream>
#include "Hunter.hpp"
#include "Space.hpp"
#include "Beasts.hpp"
#include "Nightmare.hpp"
/*********************************************************************
 ** Program Filename:  Main.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Main file
 ** Input:  Objects from class Nightmare
 ** Output:  Game text.
 *********************************************************************/
Hunter* charSelect(Hunter *);
void play();
void cheat();

int main(int argc, const char * argv[]) {
    
    int c = 0;
    std::cout<<"Welcome to the hunter's nightmare!\n.  You were once a weary traveler sickened by a plague who sought a cure in the city of Yharnam.  The last thing you remember is recieving a blood transfusion from the authorities of the healing church\n"<<std::endl;
    
    std::cout<<"would you like to read the cheat manual?"
                <<"If yes enter 1:\n"
                <<"Otherwise enter 2:\n"<<std::endl;
    std::cin>>c;
    
    if (c == 1)
    {
        cheat();
    }
    
    Nightmare* nightmare = new Nightmare();
    nightmare->play();
   
    return 0;
}


/*********************************************************************
 ** Function: Cheat
 ** Description: Tells the user how to complete the game
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void cheat()
{
    std::cout<<"While there are other ways to successfully complete this game, Here are the steps to follow for the path of least resistance\n"<<std::endl;
    std::cout<<"also remember that this game takes place in a Nightmare,  The beasts never actually go away\n"<<std::endl;
    std::cout<<"Oh and I included a cheater class to be sure to win"<<std::endl;
    
    std::cout<< "1: Search the SickRoom and find the ligher"<<std::endl;
    std::cout<< "2: Light the torch"<<std::endl;
    std::cout<<"4: Talk to the doll and old hunter"<<std::endl;
    std::cout<<"5: Go back to sickRoom"<<std::endl;
    std::cout<<"6: Exit the sickRoom"<<std::endl;
    std::cout<<"7: Go to the chapel"<<std::endl;
    std::cout<< "8: Take the water from the alter"<<std::endl;
    std::cout<<"9: Go back to central"<<std::endl;
    std::cout<<"10: Go to the Bridge"<<std::endl;
    std::cout<< "11: Cross the bridge"<<std::endl;
    std::cout<<"12: Use the holy water to weaken the Cleric Beast"<<std::endl;
    std::cout<<"13: Interact after Beast is Defeated"<<std::endl;
    std::cout<< "14: Get the Music Box from the girl"<<std::endl;
    std::cout<<"15: Go to the Tomb"<<std::endl;
    std::cout<<"16: Use the Music Box on Father Gascoigne"<<std::endl;
    
}
