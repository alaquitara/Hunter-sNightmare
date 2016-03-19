//
//  Battle.cpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "Battle.hpp"
void Battle:: assessDMG(Hunter* player1, Hunter* player2)
{
    dmg = 0;
    
    p1 = player1->attack();
    p2 = player2->defend();
    
    
    std::cout<<player1->getName()<< " Attacks "<<player2->getName()<<std::endl;
    
    {
        dmg = p1-p2;
        applyDMG(player2);
    }
}

void Battle::applyDMG(Hunter* player2)
{
    
    if (dmg > 0 + player2->getArmor())
    {
        player2->loseHealth(dmg - player2->getArmor());
    }
    
    std::cout<<player2->getName()<< " has "<<player2->getHealth()<<" Health remaining"<<std::endl;
    std::cout<<'\n';
    
    if(player2->getHealth() <= 0)
    {
        std::cout<<"***PREY SLAUGHTERED***"<<std::endl;
    }
}


void Battle::runSim(Hunter* player1, Hunter* player2)
{
    
    while((player1->getHealth() >0) && (player2->getHealth() >0))
    {
        assessDMG(player1, player2);
        std::swap(player1, player2);//http://www.cplusplus.com/reference/algorithm/swap/
    }
}

bool Battle::isDead(Hunter * player1)
{
    if(player1->getHealth() > 0)
    {
        return false;
    }
    else
        return true;
}
