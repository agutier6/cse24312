# This is the Makefile for the CSE 24312 course - Lecture 19 - Part 2

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


# Command: make treeTest
# Shows a successful RBTree Tree Test
treeTestObjs := $(OBJECTS)/treeTest.o

treeTest: $(treeTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/treeTest $(treeTestObjs)
	$(EXE)/./treeTest

$(OBJECTS)/treeTest.o: $(PROG)/treeTest.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/treeTest.cpp -o $@



# Command: make multiSet
# Shows a successful RBTree Tree Test
multiSetObjs := $(OBJECTS)/multiSet.o

multiSet: $(multiSetObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/multiSet $(multiSetObjs)
	$(EXE)/./multiSet

$(OBJECTS)/multiSet.o: $(PROG)/multiSet.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/multiSet.cpp -o $@
	

# Make all
all: treeTest multiSet

# Make initialize
initialize :
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
