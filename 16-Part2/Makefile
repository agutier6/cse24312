# This is the Makefile for the CSE 24312 course - Lecture 16 - Part 2

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


# Command: make reorderList
reorderListObjs := $(OBJECTS)/reorderList.o 

reorderList: $(reorderListObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/reorderList $(reorderListObjs)
	$(EXE)/./reorderList

$(OBJECTS)/reorderList.o: $(PROG)/reorderList.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/reorderList.cpp -o $@

	
# Command: make KMostFreq
# Initial Examples of Trie Node
KMostFreqObjs := $(OBJECTS)/KMostFreq.o 

KMostFreq: $(KMostFreqObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/KMostFreq $(KMostFreqObjs)
	$(EXE)/./KMostFreq

$(OBJECTS)/KMostFreq.o: $(PROG)/KMostFreq.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/KMostFreq.cpp -o $@


# Make all
all: KMostFreq


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
