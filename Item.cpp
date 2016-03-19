//
//  Item.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Item.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Implementation file for class Item
 ** Input: none
 ** Output:  Item object created
 *********************************************************************/
#include "Item.hpp"
#include <stdio.h>
#include <string>
//default constructor
Item::Item()
{
    name = " ";
    quantity = 0;
}


Item::Item(std::string thisName, int thisQuantity)
{
    name = thisName;
    quantity = thisQuantity;
}

/*********************************************************************
 ** Function: getName
 ** Description: gets name
 ** Parameters:  None
 ** Pre-Conditions: Items object exists
 ** Post-Conditions:  None
 *********************************************************************/
std::string Item::getName()
{
    return name;
}

/*********************************************************************
 ** Function: getQuanity
 ** Description: gets quanity
 ** Parameters:  None
 ** Pre-Conditions: Items object exists
 ** Post-Conditions:  None
 *********************************************************************/
int Item::getQuantity()
{
    return quantity;
}

/*********************************************************************
 ** Function: setName
 ** Description: sets name
 ** Parameters:  string
 ** Pre-Conditions: Item object exists
 ** Post-Conditions:  None
 *********************************************************************/
void Item::setName(std::string thisName)
{
    this->name = thisName;
}

/*********************************************************************
 ** Function: setQuantity
 ** Description: sets quantty
 ** Parameters:  int
 ** Pre-Conditions: Item object exists
 ** Post-Conditions:  None
 *********************************************************************/
void Item::setQuantity(int thisQuantity)
{
    this->quantity = thisQuantity;
}





