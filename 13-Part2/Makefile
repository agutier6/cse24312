# This is the Makefile for the CSE 20312 course Lecture 33

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


# Command: make testVert1
# Initial Examples of Vertex
testVert1Objs := $(OBJECTS)/testVert1.o 

testVert1: $(testVert1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testVert1 $(testVert1Objs)
	$(EXE)/./testVert1

$(OBJECTS)/testVert1.o: $(PROG)/testVert1.cpp $(CLASSES)/Vertex1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testVert1.cpp -o $@



# Command: make testVert2
# Initial Examples of Vertex
testVert2Objs := $(OBJECTS)/testVert2.o 

testVert2: $(testVert2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testVert2 $(testVert2Objs)
	$(EXE)/./testVert2

$(OBJECTS)/testVert2.o: $(PROG)/testVert2.cpp $(CLASSES)/Vertex2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testVert2.cpp -o $@



# Command: make testGraph1
# Initial Examples of Graph
testGraph1Objs := $(OBJECTS)/testGraph1.o 

testGraph1: $(testGraph1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testGraph1 $(testGraph1Objs)
	$(EXE)/./testGraph1

$(OBJECTS)/testGraph1.o: $(PROG)/testGraph1.cpp $(CLASSES)/Graph1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testGraph1.cpp -o $@



# Command: make Graph
# Initial Examples of pthreads
GraphObjs := $(OBJECTS)/Graph.o 

Graph: $(GraphObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Graph $(GraphObjs)
	$(EXE)/./Graph

$(OBJECTS)/Graph.o: $(PROG)/Graph.cpp $(CLASSES)/Graph.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Graph.cpp -o $@



# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make all
all: testVert1 testVert2 testGraph1 Graph


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
