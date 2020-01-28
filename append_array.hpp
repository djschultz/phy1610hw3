#ifndef append_array__hpp
#define append_array__hpp

#include <stdio.h>
#include <rarray>
/// @brief a function that reports the time step, minimum, maximum, and total number of ants
/// @param timeStep the time step of the simulation
/// @param antData the array containing the minimum, maximum, and total number of ants
void print_rarray(rarray<int,2> myrarray, std::string filename);

#endif /* append_array_hpp */
