//
//  vectorization.cpp
//  phys1610hw3
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#include "vectorization.hpp"

int linear(int row, int col, int nrow, int ncol)
{
    return row*ncol + col;
}

