//
//  timeEvolve.cpp
//  phys1610hw3
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
#include <rarray>

void incrementTime(int length, int nmoves, int timestep, rarray<int,1> antData, rarray<int,2> number_of_ants_on_table, rarray<int,2> new_number_of_ants_on_table, rarray<int,1> partition, const int moves[][2]){
    // ants move to a new an auxiliary new 'table', empty this one first
    for (int i = 0; i < length;i++) {
        for (int j = 0; j < length;j++) {
            new_number_of_ants_on_table[i][j] = 0;
        }
    }

    // now move ants into auxiliary table
    for (int i = 0; i < length;i++) {
        for (int j = 0; j < length;j++) {
            if (number_of_ants_on_table[i][j] > 0 ) {
                // pick how many ants go in each of the 9 moves
                rand_partition(number_of_ants_on_table[i][j], nmoves, partition);
                // push ants in their respective moves
                for (int m = 0; m < nmoves; m++) {
                    int i2 = i + moves[m][0];
                    int j2 = j + moves[m][1];
                    // put only on new table if not falling off table
                    if (i2>=0 and i2<length and j2>=0 and j2<length) {
                        new_number_of_ants_on_table[i2][j2] += partition[m];
                    }
                }
            }
        }
    }
    
    // update number_of_ants_on_table
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            number_of_ants_on_table[i][j] = new_number_of_ants_on_table[i][j];
        }
    }
    
    // count ants and determine minimum and maximum number on a square
        
    countAnts(length, antData, number_of_ants_on_table);

    // report
    report(timestep+1, antData);

}
