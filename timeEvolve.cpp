//
//  timeEvolve.cpp
//  phys1610hw2
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#include <iostream>
#include "timeEvolve.hpp"
#include "vectorization.hpp"
#include "partition.hpp"
#include "ants.hpp"
#include "report.hpp"


void incrementTime(int length, int nmoves, int timestep, int* antData, int* number_of_ants_on_table, int* new_number_of_ants_on_table, int* partition, const int moves[][2]){
    // ants move to a new an auxiliary new 'table', empty this one first
    for (int i = 0; i < length;i++) {
        for (int j = 0; j < length;j++) {
            int n = linear(i, j, length, length);
            new_number_of_ants_on_table[n] = 0;
        }
    }

    // now move ants into auxiliary table
    for (int i = 0; i < length;i++) {
        for (int j = 0; j < length;j++) {
            int n = linear(i, j, length, length);
            if (number_of_ants_on_table[n] > 0 ) {
                // pick how many ants go in each of the 9 moves
                rand_partition(number_of_ants_on_table[n], nmoves, partition);
                // push ants in their respective moves
                for (int m = 0; m < nmoves; m++) {
                    int i2 = i + moves[m][0];
                    int j2 = j + moves[m][1];
                    // put only on new table if not falling off table
                    if (i2>=0 and i2<length and j2>=0 and j2<length) {
                        int n = linear(i2, j2, length, length);
                        new_number_of_ants_on_table[n] += partition[m];
                    }
                }
            }
        }
    }
    
    // update number_of_ants_on_table
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            int n = linear(i, j, length, length); // linear index
            number_of_ants_on_table[n] = new_number_of_ants_on_table[n];
        }
    }
    
    // count ants and determine minimum and maximum number on a square
        
    countAnts(length, antData, number_of_ants_on_table);

    // report
    report(timestep+1, antData);

}
