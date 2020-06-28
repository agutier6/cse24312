# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 - Lecture 13 - Part 1

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
CLASSES := classes
PROG := programs
OBJECTS := objects
EXE := executables


# Command: make wrapper
# Tests the wrapper class
wrapperObjs := $(OBJECTS)/wrapper.o

wrapper: $(wrapperObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/wrapper $(wrapperObjs)
	$(EXE)/./wrapper

$(OBJECTS)/wrapper.o: $(PROG)/wrapper.cpp $(CLASSES)/stack.h
	$(PP) $(CXXFLAGS) -c $(PROG)/wrapper.cpp -o $@


# Command: make maxMinStack
# Tests the maxMinStack simulator
maxMinStackObjs := $(OBJECTS)/maxMinStack.o

maxMinStack: $(maxMinStackObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxMinStack $(maxMinStackObjs)
	$(EXE)/./maxMinStack

$(OBJECTS)/maxMinStack.o: $(PROG)/maxMinStack.cpp $(CLASSES)/maxMinStack.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxMinStack.cpp -o $@



# Command: make hanoi
# Towers of Hanoi solution using 
# std::stack and recursion
hanoiObjs :=  $(OBJECTS)/hanoi.o

hanoi: $(hanoiObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/hanoi $(hanoiObjs)
	$(EXE)/./hanoi 3
	$(EXE)/./hanoi 4

$(OBJECTS)/hanoi.o: $(PROG)/hanoi.cpp $(CLASSES)/Tower.h
	$(PP) $(CXXFLAGS) -c $(PROG)/hanoi.cpp -o $@	
	

# Make all
all: wrapper maxMinStack hanoi


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*