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
	
	
	
# Command: make MST
MSTObjs := $(OBJECTS)/MST.o 

MST: $(MSTObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MST $(MSTObjs)
	$(EXE)/./MST

$(OBJECTS)/MST.o: $(PROG)/MST.cpp $(CLASSES)/Graph4.h
	$(PP) $(CXXFLAGS) -c $(PROG)/MST.cpp -o $@


# Command: make MST2
MST2Objs := $(OBJECTS)/MST2.o 

MST2: $(MST2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MST2 $(MST2Objs)
	$(EXE)/./MST2

$(OBJECTS)/MST2.o: $(PROG)/MST2.cpp $(CLASSES)/Graph4.h
	$(PP) $(CXXFLAGS) -c $(PROG)/MST2.cpp -o $@



# Command: make DFS
DFSObjs := $(OBJECTS)/DFS.o 

DFS: $(DFSObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DFS $(DFSObjs)
	$(EXE)/./DFS

$(OBJECTS)/DFS.o: $(PROG)/DFS.cpp $(CLASSES)/Graph5.h
	$(PP) $(CXXFLAGS) -c $(PROG)/DFS.cpp -o $@


# Command: make DFS2
DFS2Objs := $(OBJECTS)/DFS2.o 

DFS2: $(DFS2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DFS2 $(DFS2Objs)
	$(EXE)/./DFS2

$(OBJECTS)/DFS2.o: $(PROG)/DFS2.cpp $(CLASSES)/Graph5.h
	$(PP) $(CXXFLAGS) -c $(PROG)/DFS2.cpp -o $@
	
	

# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make all
all: testVert1 testVert2 testGraph1 Graph


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
