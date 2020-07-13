# This is the Makefile for the CSE 20312 course - Lecture 20 Part 2

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

# Variables for Folders
CLASSES := classes
PROG := programs
EXE := executables
OBJECTS := objects


	
# Command: make SubsetSums
# Initial Examples of bitsets using Subset Sum problem
SubsetSumsObjs := $(OBJECTS)/SubsetSums.o 

SubsetSums: $(SubsetSumsObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SubsetSums $(SubsetSumsObjs)
	$(EXE)/./SubsetSums

$(OBJECTS)/SubsetSums.o: $(PROG)/SubsetSums.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/SubsetSums.cpp -o $@


# Command: make BloomURL
# Initial Examples of Bloom Filter
BloomURLObjs := $(OBJECTS)/BloomURL.o 

BloomURL: $(BloomURLObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BloomURL $(BloomURLObjs)
	$(EXE)/./BloomURL $(PROG)/Access_URLs.txt $(PROG)/NDCSE_URLs.txt

$(OBJECTS)/BloomURL.o: $(PROG)/BloomURL.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/BloomURL.cpp -o $@

# Initialize 
initialize:
	mkdir $(OBJECTS) $(EXE)

# Make all
all: SubsetSums BloomURL

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
