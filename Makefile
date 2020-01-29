#Makefile for antsontable.cpp

#Specify what compiler we will use
CXX = g++

#Macro for the flags that we will use to compile the code. 
flags = -std=c++14 -O3 -march=native

#Link all of the out files and combine into an executable called antsontable
antsontable: antsontable.o ants.o partition.o vectorization.o timeEvolve.o report.o append_array.o
	$(CXX) $(flags) -o antsontable antsontable.o ants.o partition.o vectorization.o timeEvolve.o report.o append_array.o

#Individually compile all of the modules without making an executable
antsontable.o: antsontable.cpp ants.hpp partition.hpp vectorization.hpp timeEvolve.hpp report.hpp
	$(CXX) $(flags) -c -o antsontable.o antsontable.cpp

ants.o: ants.cpp vectorization.hpp
	$(CXX) $(flags) -c -o ants.o ants.cpp

partition.o: partition.cpp
	$(CXX) $(flags) -c -o partition.o partition.cpp

vectorization.o: vectorization.cpp
	$(CXX) $(flags) -c -o vectorization.o vectorization.cpp

timeEvolve.o: timeEvolve.cpp partition.hpp report.hpp ants.hpp vectorization.hpp
	$(CXX) $(flags) -c -o timeEvolve.o timeEvolve.cpp 

report.o: report.cpp
	$(CXX) $(flags) -c -o report.o report.cpp

append_array.o: append_array.cpp
	$(CXX) $(flags) -c -o append_array.o append_array.cpp

clean: 
	rm -f antsontable.o ants.o partition.o vectorization.o timeEvolve.o report.o antsontable ants.rat output.dat append_array.o
	
