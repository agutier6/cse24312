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
	
	
# Command: make TopSort
TopSortObjs := $(OBJECTS)/TopSort.o 

TopSort: $(TopSortObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/TopSort $(TopSortObjs)
	$(EXE)/./TopSort

$(OBJECTS)/TopSort.o: $(PROG)/TopSort.cpp $(CLASSES)/Graph6.h
	$(PP) $(CXXFLAGS) -c $(PROG)/TopSort.cpp -o $@


# Command: make PERT
PERTObjs := $(OBJECTS)/PERT.o 

PERT: $(PERTObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PERT $(PERTObjs)
	$(EXE)/./PERT

$(OBJECTS)/PERT.o: $(PROG)/PERT.cpp $(CLASSES)/Graph6.h
	$(PP) $(CXXFLAGS) -c $(PROG)/PERT.cpp -o $@


# Command: make Dijkstra
DijkstraObjs := $(OBJECTS)/Dijkstra.o 

Dijkstra: $(DijkstraObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Dijkstra $(DijkstraObjs)
	$(EXE)/./Dijkstra

$(OBJECTS)/Dijkstra.o: $(PROG)/Dijkstra.cpp $(CLASSES)/Graph7.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Dijkstra.cpp -o $@	
	

# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make all
all: testVert1 testVert2 testGraph1 Graph


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
