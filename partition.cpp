//
//  partition.cpp
//  phys1610hw3
//
//  Created by Daniel Schultz on 2020-01-20.
//  Copyright © 2020 Daniel Schultz. All rights reserved.
//

#include "partition.hpp"

#include <random>
#include <algorithm>

size_t seed = 120;     // seed for random number generation
std::mt19937 engine(seed);

void rand_partition(int total, int nparts, int* nperpart)
{
    // never mind the implementation, we'll see how this works in a future lecture.
    std::uniform_int_distribution<int> uniformint(0, total);
    nperpart[0] = 0;
    for (int k = 1; k < nparts; k++)
        nperpart[k] = uniformint(engine);
    std::sort(nperpart, nperpart + nparts);
    for (int k = 0; k < nparts-1; k++)
        nperpart[k] = nperpart[k+1] - nperpart[k];
    nperpart[nparts-1] = total - nperpart[nparts-1];
}
