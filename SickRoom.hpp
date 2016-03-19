//
//  SickRoom.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  SicRoom.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for Hunter's Dream.  Class is a Item / Fight type
 ** Input:  Item, beast, and Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#ifndef SickRoom_hpp
#define SickRoom_hpp

#include <stdio.h>
#include "Space.hpp"


class SickRoom : public Space
{
private:
    Item* lighter;
    Beast* beastr;
    
public:
    SickRoom(): Space("Sick Room") { beastr = new TheBeast(); lighter = new Item("Lighter",1);}
    void enterRoom(Hunter* hunter);
    //Space* enterRoom(Hunter* hunter);
    void menu();
    void special();
};

#endif /* SickRoom_hpp */
