

#include "append_array.hpp"
#include <iostream>
#include <rarray>
#include <rarrayio>
#include <fstream>

void print_rarray(rarray<int,2> myrarray){
    std::ofstream fout;
    std::ifstream fin;
    fin.open("test.txt");
    fout.open("test.txt",std::ios::app);
    if(fin.is_open()){
        fout << myrarray << std::endl;
    }
    fin.close();
    fout.close();
}

