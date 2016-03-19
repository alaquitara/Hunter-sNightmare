//
//  TheBeast.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  TheBeast.hpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header for TheBeast class
 ** Input: Public Hunter
 ** Output:  TheBeast object created
 *********************************************************************/
#ifndef TheBeast_hpp
#define TheBeast_hpp
#include "Beasts.hpp"
#include <stdio.h>
class TheBeast: public Beast
{
public:
    TheBeast() : Beast ("Beast", 0, 10){}
    int attack();
    int defend();
    std::string getName();
    
};
#endif /* TheBeast_hpp */
