//
//  Nightmare.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Nightmare.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for class Nightmare
 ** Input:  All Class objects
 ** Output:  Class objects interacting
 *********************************************************************/
#ifndef Nightmare_hpp
#define Nightmare_hpp

#include <stdio.h>
#include <iostream>
#include "Space.hpp"
#include "Hunter.hpp"
#include "Beasts.hpp"
#include "SickRoom.hpp"
#include "Central.hpp"
#include "Cathedral.hpp"
#include "Bridge.hpp"
#include "Tomb.hpp"
#include "Dream.hpp"
#include "Guardian.hpp"
#include "Rogue.hpp"
#include "Cheater.hpp"


class Nightmare
{
private:
   
    Space* sickRoom;
    Space* central;
    Space* cathedral;
    Space* bridge;
    Space* tomb;
    Space* dream;
    Hunter* hunter;
public:
    Nightmare();
    void play();
    Hunter* charSelect(Hunter*);
    
};
#endif /* Nightmare_hpp */
