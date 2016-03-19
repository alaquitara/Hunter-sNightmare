//
//  Bridge.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Bridge.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for central.  Class is an fight type
 ** Input:  Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#ifndef Bridge_hpp
#define Bridge_hpp
#include "Space.hpp"

#include <stdio.h>
class Bridge : public Space
{
private:
    Item* music;
    Beast* cleric;
public:
    Bridge() : Space("Bridge") {music = new Item("MusicBox", 1); cleric = new ClericBeast();}
    //Space* enterRoom(Hunter*);
    void enterRoom(Hunter* hunter);
    void menu();
    void special();
    Beast* getBeast();
    Item* pickupItem();
    Item *getItem();
};
#endif /* Bridge_hpp */
