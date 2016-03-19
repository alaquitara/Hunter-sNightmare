//
//  Rogue.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Rogue.HPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file file for Rogue class
 ** Input: Hunter object exists
 ** Output:  Rogue object created
 *********************************************************************/
#ifndef Rogue_hpp
#define Rogue_hpp
#include "Hunter.hpp"

#include <stdio.h>

class Rogue : public Hunter
{
public:
    bool backstab;
    Rogue() : Hunter("Rogue",  20) {backstab = false;}
    int attack();
    int defend() {return Hunter::rollDie(1,6);};
    std::string getName() {return "Rogue";};
};
#endif /* Rogue_hpp */
