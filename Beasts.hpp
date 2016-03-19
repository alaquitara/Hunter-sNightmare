//
//  Beasts.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Beasts.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for thebeast, clericbeast, and gascoigne.  Class is abstract
 ** Input: none
 ** Output:  Beast object created
 *********************************************************************/
#ifndef Beasts_hpp
#define Beasts_hpp
#include <iostream>
#include <cstdlib>
#include <stdio.h>

class Beast
{
protected:
    int armor;
    unsigned int health;
    std::string name;
    bool isdead;
    
public:
    
    Beast(std::string, int, int);
    
    void setHealth(int);
    int getHealth();
    void speak();
    
    virtual std::string getName() = 0;
    virtual int attack() = 0;
    virtual int defend() = 0;
    void loseHealth(int);
    bool getDead();
    
    int rollDie(int num, int sides);
};


/*class TheBeast: public Beast
{
public:
    TheBeast() : Beast ("Beast", 0, 10){}
    int attack() { return Beast::rollDie(2,6);};
    int defend() { return Beast::rollDie(1,5);};
    std::string getName() {return "Beast";};
    
};

class ClericBeast: public Beast
{
public:
    bool burn;
    ClericBeast() : Beast ("Cleric Beast", 20, 200){burn = false;}
    int attack() {return Beast::rollDie(1,10);};
    int defend() {return Beast::rollDie(1,10);};
    std::string getName() {return "Cleric Beast";};
    void weaken();
    
};

class Gascoigne: public Beast
{
public:
    bool transform;
    Gascoigne() : Beast ("Father Gascoigne", 5, 35){transform = false;}
    int attack();
    int defend() {return Beast::rollDie(1,10);};
    std::string getName() {return "Father Gascoigne";};
    bool musicBox();
    void speak();
    void transTest();
    void setTransform(bool);
    */
#endif /* Beasts_hpp */
