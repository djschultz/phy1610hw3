

#include "append_array.hpp"
#include <iostream>
#include <rarray>
#include <rarrayio>
#include <fstream>

void print_rarray(rarray<int,2> myrarray, std::string filename){
    std::ofstream fout;
    std::ifstream fin;
    fin.open(filename);
    fout.open(filename, std::ios::app);
    if(fin.is_open()){
        fout << myrarray << std::endl;
    }
    fin.close();
    fout.close();
}

