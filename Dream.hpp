//
//  Dream.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/13/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  dream.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for Hunter's Dream.  Class is a talking/ Item class
 ** Input:  Item and Hunter objects exists
 ** Output:  continues game
 *********************************************************************/
#ifndef Dream_hpp
#define Dream_hpp
#include "Space.hpp"
#include <iostream>

#include <stdio.h>
class Dream : public Space
{
    
public:
    Dream(): Space("Hunter's Dream") {}
    void enterRoom(Hunter*);
    void menu();
    void special();
    void talk();
    Beast* getBeast();
    
};
#endif /* Dream_hpp */
