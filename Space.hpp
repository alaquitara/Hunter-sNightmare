//
//  Space.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Space.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: abstract class for game areas
 ** Input:  Enemy and Hunter objects
 ** Output:  Objects interact with spaces
 *********************************************************************/
#ifndef Space_hpp
#define Space_hpp

#include <stdio.h>
#include "Beasts.hpp"
#include "TheBeast.hpp"
#include "ClericBeast.hpp"
#include "Hunter.hpp"
#include "Gascoigne.hpp"
#include <string>

class Hunter;

class Space
{
protected:
    std::string name;
    Space *north;
    Space *south;
    Space *east;
    Space *west;
    
    Beast* beast;
    Item item;
    
    bool complete;

public:
    Space(std::string n);
    ~Space();
    virtual void menu() = 0;
    virtual void enterRoom(Hunter*) = 0;
    virtual void special()=0;
    
    void setNorth(Space*);
    void setSouth(Space*);
    void setEast(Space*);
    void setWest(Space*);
    
    std::string getName();
    bool getComplete() {return complete;};
    
   
    
};
#endif /* Space_hpp */
