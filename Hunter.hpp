//
//  Hunter.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Hunter.CPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file file for Hunter/ rogue /guardian/ cheater.  Class is abstract
 ** Input: Item Objects and enemy object
 ** Output:  hunter object created
 *********************************************************************/

#ifndef Hunter_hpp
#define Hunter_hpp

#include "Item.hpp"
#include "Space.hpp"
#include "Beasts.hpp"
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>

class Space;


class Hunter
{
protected:
    
    int health;
    int def;
    int atk;
    std::string name;
    std::vector <Item> pack;
    Space* location;
    
    
public:
    
    Hunter(std::string, int);
    
    void setHealth(int);
    int getHealth();
    
    virtual std::string getName() = 0;
    virtual int attack() = 0;
    virtual int defend() = 0;
    void heal();
    int rollDie(int num, int sides);
    void loseHealth(int);
    void addItem(Item);
    void removeItem(std::string);
    void useItem();
    bool hasItem(std::string);
    bool holy;
    bool music;
    bool complete;
    
    void fight(Beast*);
    
    void setSpace(Space*);
    Space* getSpace();
};
/*
class Guardian : public Hunter
{
public:
    bool block;
    Guardian() : Hunter("Guardian", 30){block = false;}
    int attack() {return Hunter::rollDie(1, 6);};
    int defend();
    std::string getName() {return "Guardian";};
 

class Rogue : public Hunter
{
public:
    bool backstab;
    Rogue() : Hunter("Rogue",  20) {backstab = false;}
    int attack();
    int defend() {return Hunter::rollDie(1,6);};
    std::string getName() {return "Rogue";};
};

class Cheater: public Hunter
{
public:
    Cheater() : Hunter("Cheater",  1000){;};
    int attack() {return Hunter::rollDie(15,15);};
    int defend() {return Hunter::rollDie(15,15);};
    std::string getName(){return "Cheater";};
};
*/

#endif /* Hunter_hpp */
