//
//  report.cpp
//  phys1610hw3
//
//  Created by Daniel Schultz on 2020-01-23.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#include "report.hpp"
#include <iostream>

void report(int timeStep, int* antData){
    std::cout << timeStep << " " << antData[2] << " " << antData[0] << " " << antData[1] << std::endl;
}
