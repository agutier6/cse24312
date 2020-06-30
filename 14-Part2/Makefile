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
	
	
	
# Command: make BFS
# Initial Examples of pthreads
BFSObjs := $(OBJECTS)/BFS.o 

BFS: $(BFSObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BFS $(BFSObjs)
	$(EXE)/./BFS

$(OBJECTS)/BFS.o: $(PROG)/BFS.cpp $(CLASSES)/Graph7.h
	$(PP) $(CXXFLAGS) -c $(PROG)/BFS.cpp -o $@


# Command: make BFS2
# Initial Examples of pthreads
BFS2Objs := $(OBJECTS)/BFS2.o 

BFS2: $(BFS2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BFS2 $(BFS2Objs)
	$(EXE)/./BFS2

$(OBJECTS)/BFS2.o: $(PROG)/BFS2.cpp $(CLASSES)/Graph8.h
	$(PP) $(CXXFLAGS) -c $(PROG)/BFS2.cpp -o $@



# Command: make MST
MSTObjs := $(OBJECTS)/MST.o 

MST: $(MSTObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MST $(MSTObjs)
	$(EXE)/./MST

$(OBJECTS)/MST.o: $(PROG)/MST.cpp $(CLASSES)/Graph.h
	$(PP) $(CXXFLAGS) -c $(PROG)/MST.cpp -o $@


# Command: make MST2
MST2Objs := $(OBJECTS)/MST2.o 

MST2: $(MST2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MST2 $(MST2Objs)
	$(EXE)/./MST2

$(OBJECTS)/MST2.o: $(PROG)/MST2.cpp $(CLASSES)/Graph.h
	$(PP) $(CXXFLAGS) -c $(PROG)/MST2.cpp -o $@
	
	

# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make all
all: testVert1 testVert2 testGraph1 Graph


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
