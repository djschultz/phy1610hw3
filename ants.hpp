//
//  ants.hpp
//  phys1610hw3
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#ifndef ants_hpp
#define ants_hpp

#include <stdio.h>
#include <rarray>

/// @brief Function that uniformly places ants on a table.
/// @param length side length of the table
/// @param total_ants the total number of ants to be placed on the table
/// @param number_of_ants_on_table the array holding the number of ants at each location on the table. This array is modified by placeAnts so that it has the placed number of ants as its elements
void placeAnts(int length, int total_ants, rarray<int,2> number_of_ants_on_table);

/// @brief Function that counts the total number of ants on the table (some might fall of the table). This number is put into antData[2].
/// @param length side length of the table
/// @param antData array holding information about the min, max, and total number of ants on the table
/// @param number_of_ants_on_table the array holding the number of ants at each location on the table
void countAnts(int length, int* antData, rarray<int,2> number_of_ants_on_table);

#endif /* ants_hpp */
