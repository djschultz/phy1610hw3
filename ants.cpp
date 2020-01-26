//
//  ants.cpp
//  phys1610hw2
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#include "ants.hpp"
#include "vectorization.hpp"


void placeAnts(int length, int total_ants, int* number_of_ants_on_table){
    // place the ants evenly on the table
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            int n = linear(i, j, length, length);
            number_of_ants_on_table[n] = ((long long)(n+1)*total_ants)/(length*length) - ((long long)(n)*total_ants)/(length*length);
        }
    }
}


void countAnts(int length, int* antData, int* number_of_ants_on_table){

    int nmin = antData[0];
    int nmax = antData[1];
    int total_ants = antData[2];
    
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            int n = linear(i, j, length, length); // linear index
            total_ants += number_of_ants_on_table[n];
            if (nmin > number_of_ants_on_table[n]) {
                nmin = number_of_ants_on_table[n];
            }
            if (nmax < number_of_ants_on_table[n]) {
                nmax = number_of_ants_on_table[n];
            }
        }
    }
    antData[0] = nmin;
    antData[1] = nmax;
    antData[2] = total_ants;
}
