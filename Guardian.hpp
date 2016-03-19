//
//  Guardian.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Guardian.HPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file file for Guardian class
 ** Input: Hunter object exists
 ** Output:  Guardian object created
 *********************************************************************/
#ifndef Guardian_hpp
#define Guardian_hpp
#include "Hunter.hpp"
#include <stdio.h>
class Guardian : public Hunter
{
public:
    bool block;
    Guardian() : Hunter("Guardian", 30){block = false;}
    int attack();
    int defend();
    std::string getName();
};
#endif /* Guardian_hpp */
