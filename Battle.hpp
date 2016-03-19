//
//  Battle.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#ifndef Battle_hpp
#define Battle_hpp
#include "Hunter.hpp"
#include <iostream>
#include <stdio.h>
#include <algorithm>

class Battle
{
private:
    int dmg, p1, p2;
    static int lives;
    
public:
    void assessDMG(Hunter*, Hunter*);
    void applyDMG(Hunter*);
    void runSim(Hunter* player1, Hunter* player2);
    bool isDead(Hunter* player1);
};

#endif /* Battle_hpp */
