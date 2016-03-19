//
//  Item.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Item.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for class Item
 ** Input: none
 ** Output:  Item object created
 *********************************************************************/
#ifndef Item_hpp
#define Item_hpp
#include <string>

#include <stdio.h>
class Item
{
protected:
    std::string name;
    int quantity;
    
    
public:
    Item();
    Item(std::string, int);
    
    std::string getName();
    int getQuantity();
    
    void setName(std::string);
    void setQuantity(int);
};
#endif /* Item_hpp */
