//
//  partition.hpp
//  phys1610hw3
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#ifndef partition_hpp
#define partition_hpp

#include <stdio.h>

/// @brief Function to randomly divide a number 'total' into a set of 'numdivision' numbers that add up to 'total'. Uses the C++ random library to generate the randomness.
/// @param total number that is to be subdivided (input)
/// @param nparts number of partitions into which to divide 'total (input)
/// @param nperpart  resulting number in each partition (output)

void rand_partition(int total, int nparts, int* nperpart);

#endif /* partition_hpp */
