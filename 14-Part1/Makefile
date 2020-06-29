# This is the Makefile for the CSE 20312 course Lecture 14 - Part 1

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


# Command: make testRemove
# Initial Examples of pthreads
testRemoveObjs := $(OBJECTS)/testRemove.o 

testRemove: $(testRemoveObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testRemove $(testRemoveObjs)
	$(EXE)/./testRemove

$(OBJECTS)/testRemove.o: $(PROG)/testRemove.cpp $(CLASSES)/Graph1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testRemove.cpp -o $@
	
	
	
# Command: make BFS
# Initial Examples of pthreads
BFSObjs := $(OBJECTS)/BFS.o 

BFS: $(BFSObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BFS $(BFSObjs)
	$(EXE)/./BFS

$(OBJECTS)/BFS.o: $(PROG)/BFS.cpp $(CLASSES)/Graph2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/BFS.cpp -o $@


# Command: make BFS2
# Initial Examples of pthreads
BFS2Objs := $(OBJECTS)/BFS2.o 

BFS2: $(BFS2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BFS2 $(BFS2Objs)
	$(EXE)/./BFS2

$(OBJECTS)/BFS2.o: $(PROG)/BFS2.cpp $(CLASSES)/Graph3.h
	$(PP) $(CXXFLAGS) -c $(PROG)/BFS2.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make all
all: testVert1 testVert2 testGraph1 Graph


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
