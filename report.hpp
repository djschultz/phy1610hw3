//
//  report.hpp
//  phys1610hw3
//
//  Created by Daniel Schultz on 2020-01-23.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#ifndef report_hpp
#define report_hpp

#include <stdio.h>

/// @brief a function that reports the time step, minimum, maximum, and total number of ants
/// @param timeStep the time step of the simulation
/// @param antData the array containing the minimum, maximum, and total number of ants
void report(int timeStep, int* antData);

#endif /* report_hpp */
