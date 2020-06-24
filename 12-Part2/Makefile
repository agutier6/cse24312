# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 course - Lecture 12 - Part 2

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CFLAGS := -std=c11 $(FLAGS)
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

# Variables for Folders
CLASSES := classes
PROG := programs
EXE := executables
OBJECTS := objects


# Command: make wrapper
wrapperObjs :=  $(OBJECTS)/wrapper.o

wrapper: $(wrapperObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/wrapper $(wrapperObjs)
	$(EXE)/./wrapper

$(OBJECTS)/wrapper.o: $(PROG)/wrapper.cpp $(CLASSES)/queue.h
	$(PP) $(CXXFLAGS) -c $(PROG)/wrapper.cpp -o $@



# Command: make shortestPath1
shortestPath1Objs :=  $(OBJECTS)/shortestPath1.o

shortestPath1: $(shortestPath1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/shortestPath1 $(shortestPath1Objs)
	$(EXE)/./shortestPath1

$(OBJECTS)/shortestPath1.o: $(PROG)/shortestPath1.cpp $(CLASSES)/queue.h
	$(PP) $(CXXFLAGS) -c $(PROG)/shortestPath1.cpp -o $@



# Command: make shortestPath2
shortestPath2Objs :=  $(OBJECTS)/shortestPath2.o

shortestPath2: $(shortestPath2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/shortestPath2 $(shortestPath2Objs)
	$(EXE)/./shortestPath2

$(OBJECTS)/shortestPath2.o: $(PROG)/shortestPath2.cpp $(CLASSES)/queue.h
	$(PP) $(CXXFLAGS) -c $(PROG)/shortestPath2.cpp -o $@



# Command: make shortestPath3
shortestPath3Objs :=  $(OBJECTS)/shortestPath3.o

shortestPath3: $(shortestPath3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/shortestPath3 $(shortestPath3Objs)
	$(EXE)/./shortestPath3

$(OBJECTS)/shortestPath3.o: $(PROG)/shortestPath3.cpp $(CLASSES)/queue.h
	$(PP) $(CXXFLAGS) -c $(PROG)/shortestPath3.cpp -o $@
	
	


# Command: make shortestPath
shortestPathObjs :=  $(OBJECTS)/shortestPath.o

shortestPath: $(shortestPathObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/shortestPath $(shortestPathObjs)
	$(EXE)/./shortestPath

$(OBJECTS)/shortestPath.o: $(PROG)/shortestPath.cpp $(CLASSES)/queue.h
	$(PP) $(CXXFLAGS) -c $(PROG)/shortestPath.cpp -o $@
	
	

# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables	


# Make all
all: wrapper shortestPath

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
