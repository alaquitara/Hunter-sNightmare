//
//  ClericBeast.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  ClericBeast.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Headerfile for ClericBeast class
 ** Input: Public Hunter object exists
 ** Output:  Gascoign object created
 *********************************************************************/
#ifndef ClericBeast_hpp
#define ClericBeast_hpp
#include "Beasts.hpp"
#include <stdio.h>
class ClericBeast: public Beast
{
public:
    bool burn;
    ClericBeast() : Beast ("Cleric Beast", 20, 200){burn = false;}
    int attack();
    int defend();
    std::string getName();
    void weaken();
    
};
#endif /* ClericBeast_hpp */
