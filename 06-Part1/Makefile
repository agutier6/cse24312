# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 course Lecture 06 - Part 1

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 


CLASSES := classes
PROG := programs
OBJECTS := objects
EXE := executables


# Command: make DynArrTest5
# Initial Example of DynArr allocation size and capacity

DynArrTest5Objs := $(OBJECTS)/DynArrTest5.o

DynArrTest5: $(DynArrTest5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest5 $(DynArrTest5Objs)
	$(EXE)/./DynArrTest5

$(OBJECTS)/DynArrTest5.o: $(PROG)/DynArrTest5.cpp $(CLASSES)/DynArr5.h
	$(PP) $(CXXFLAGS) -c $(PROG)/DynArrTest5.cpp -o $@



# Command: make DynArrTest5Bad
# Shows an example of -Wshadow enforcing strict naming
# Deliberate compiler error

DynArrTest5BadObjs := $(OBJECTS)/DynArrTest5Bad.o

DynArrTest5Bad: $(DynArrTest5BadObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest5Bad $(DynArrTest5BadObjs)
	$(EXE)/./DynArrTest5Bad

$(OBJECTS)/DynArrTest5Bad.o: $(PROG)/DynArrTest5Bad.cpp $(CLASSES)/DynArr5Bad.h
	$(PP) $(CXXFLAGS) -c $(PROG)/DynArrTest5Bad.cpp -o $@


# Command: make DynArrTest6
# Initial Example of DynArr allocation size and capacity

DynArrTest6Objs := $(OBJECTS)/DynArrTest6.o

DynArrTest6: $(DynArrTest6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest6 $(DynArrTest6Objs)
	$(EXE)/./DynArrTest6

$(OBJECTS)/DynArrTest6.o: $(PROG)/DynArrTest6.cpp $(CLASSES)/DynArr6.h
	$(PP) $(CXXFLAGS) -c $(PROG)/DynArrTest6.cpp -o $@



# Command: make DynArrTest
# Initial Example of DynArr allocation size and capacity

DynArrTestObjs := $(OBJECTS)/DynArrTest.o

DynArrTest: $(DynArrTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest $(DynArrTestObjs)
	$(EXE)/./DynArrTest

$(OBJECTS)/DynArrTest.o: $(PROG)/DynArrTest.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/DynArrTest.cpp -o $@
	

# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables



# Make all
all: DynArrTest5 DynArrTest6 DynArrTest

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
