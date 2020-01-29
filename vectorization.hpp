//
//  vectorization.hpp
//  phys1610hw3
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#ifndef vectorization_hpp
#define vectorization_hpp

#include <stdio.h>


/// @brief Function to compute the linear index for a matrix embedded in a one-dimensional array
/// @param row  row index
/// @param col   column index
/// @param nrow  number of rows in the matrix
/// @param ncol  number of rcolumns in the matrix
/// @return the linear index
int linear(int row, int col, int nrow, int ncol);

#endif /* vectorization_hpp */
