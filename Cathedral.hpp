//
//  Cathedral.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Cathedral.HPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for central.  Class is an Item type
 ** Input:  Item and Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#ifndef Cathedral_hpp
#define Cathedral_hpp

#include "Space.hpp"
#include <stdio.h>
class Cathedral : public Space
{
private:
    Item* blood;
    Item* water;
public:
    Cathedral() : Space("GrandCathedral") { blood = new Item("BloodVial", 1); water = new Item("HolyWater",1);}
    void enterRoom(Hunter* hunter);
    void menu();
    void special();
};
#endif /* Cathedral_hpp */
