//
//  configurator.cpp
//  configurator
//
//  Created by Nikita Akulich on 27/01/2019.
//  Copyright © 2019 Mikita Akulich. All rights reserved.
//

#include <iostream>
#include "configurator.hpp"
#include "configuratorPriv.hpp"

void configurator::HelloWorld(const char * s)
{
    configuratorPriv *theObj = new configuratorPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void configuratorPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

