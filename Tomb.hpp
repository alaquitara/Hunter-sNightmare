//
//  Tomb.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Tomb.HPP
 ** Author:    Alexander Laquitara
 ** Date:  3/3/2016
 ** Description: Header file for Tomb.  Class is an fight type
 ** Input:  Hunter objects exists
 ** Output:  continues game, updates Hunter
 *********************************************************************/
#ifndef Tomb_hpp
#define Tomb_hpp


#include "Space.hpp"

class Tomb : public Space
{
private:
    Beast* gascoigne;
public:
    Tomb() : Space("Tomb of Oedon") {gascoigne = new Gascoigne();}
    //Space* enterRoom(Hunter*);
    void enterRoom(Hunter* hunter);
    void menu();
    void special();
};

#endif /* Tomb_hpp */
