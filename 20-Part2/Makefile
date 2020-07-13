# This is the Makefile for the CSE 20312 course Lecture 36

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

# Variables for Folders
36 := ~/DSSols/36-BitBloom
CLASSES := $(36)/classes
PROG := $(36)/programs
EXE := $(36)/executables
OBJECTS := $(36)/objects


	
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




# Make all
all: SubsetSums BloomURL


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
	
	
# Make gitPre
gitPre:
	make clean
	git add Makefile $(PROG)/*
	git commit -m "Lecture 36 Preview Assignment"
	git push

	
# Make gitIn
gitIn:
	make clean
	git add Makefile $(PROG)/*
	git commit -m "Lecture 36 In Class"
	git push
	
	
# Make gitIn
gitFix:
	make clean
	git add --all
	git commit -m "Lecture 36 In Class - Fix"
	git push
