//
//  Central.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Central.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: header file for central.  Class is a move / talk type
 ** Input:  Item and Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#ifndef Central_hpp
#define Central_hpp

#include <stdio.h>
#include "Space.hpp"


class Central : public Space
{
private:
    
    
public:
    Central() : Space("Center Square") {}
    //Space* enterRoom(Hunter*);
    void enterRoom(Hunter* hunter);
    void menu();
    void special();
    Item* pickupItem();
    Item *getItem();
    
};
#endif /* Central_hpp */