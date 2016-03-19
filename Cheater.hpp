//
//  Cheater.hpp
//  162final
//
//  Created by Alexander Laquitara on 3/15/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#ifndef Cheater_hpp
#define Cheater_hpp
#include "Hunter.hpp"

#include <stdio.h>
class Cheater: public Hunter
{
public:
    Cheater() : Hunter("Cheater",  1000){;};
    int attack();
    int defend();
    std::string getName();
};
#endif /* Cheater_hpp */
