//
//  Gascoigne.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Gascoigne.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Headerfile for Gascoigne class
 ** Input: Public Hunter
 ** Output:  Gascoign object created
 *********************************************************************/
#ifndef Gascoigne_hpp
#define Gascoigne_hpp
#include "Beasts.hpp"
#include <stdio.h>
class Gascoigne: public Beast
{
public:
    bool transform;
    Gascoigne() : Beast ("Father Gascoigne", 5, 35){transform = false;}
    int attack();
    int defend();
    std::string getName();
    bool musicBox();
    void speak();
    void transTest();
};
#endif /* Gascoigne_hpp */
