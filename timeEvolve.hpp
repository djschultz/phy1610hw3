//
//  timeEvolve.hpp
//  phys1610hw2
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#ifndef timeEvolve_hpp
#define timeEvolve_hpp

#include <stdio.h>

/// @brief Function to perform a time step for the ants moving
/// @param length side length of the table
/// @param nmoves the number of possible moves an ant can make
/// @param timestep the timestep which we are performing. this is only necessary for printing purposes
/// @param antData array holding the min, max, and total number of ants
/// @param number_of_ants_on_table array saying how many ants there are at any particular location
/// @param new_number_of_ants_on_table array holding updated numbers of ants on table after timestep
/// @param partition array determining how many ants moving in each direction
/// @param moves array listing possible moves an ant can make
void incrementTime(int length, int nmoves, int timestep, int* antData, int* number_of_ants_on_table, int* new_number_of_ants_on_table, int* partition, const int moves[][2]);

#endif /* timeEvolve_hpp */
