# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 course Lecture 05 - Part 2

# G++ is for the GCC compiler for C++
PP := g++

# Original Compiler Flags brought back for tempVoidNode only 
OLDFLAGS := -O0 -g -Wall
OLDCXXFLAGS := -m64 -std=c++11 $(OLDFLAGS)

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 


CLASSES := classes
PROG := programs
OBJECTS := objects
EXE := executables


# Command: make tempVoidNode
# Shows allocating templated generic types on the heap
# using imperative and procedural programming

tempVoidNodeObjs := $(OBJECTS)/tempVoidNode.o

tempVoidNode: $(tempVoidNodeObjs)
	$(PP) $(OLDCXXFLAGS) -o $(EXE)/tempVoidNode $(tempVoidNodeObjs)
	$(EXE)/./tempVoidNode

$(OBJECTS)/tempVoidNode.o: $(PROG)/tempVoidNode.cpp
	$(PP) $(OLDCXXFLAGS) -c $(PROG)/tempVoidNode.cpp -o $@



# Command: make tempVoidNode2
# Shows allocating templated generic types on the heap
# using imperative and procedural programming
# Uses proper casting of float

tempVoidNode2Objs := $(OBJECTS)/tempVoidNode2.o

tempVoidNode2: $(tempVoidNode2Objs)
	$(PP) $(OLDCXXFLAGS) -o $(EXE)/tempVoidNode2 $(tempVoidNode2Objs)
	$(EXE)/./tempVoidNode2

$(OBJECTS)/tempVoidNode2.o: $(PROG)/tempVoidNode2.cpp
	$(PP) $(OLDCXXFLAGS) -c $(PROG)/tempVoidNode2.cpp -o $@



# Command: make template1
# Simple templated class example

template1Objs := $(OBJECTS)/template1.o

template1: $(template1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/template1 $(template1Objs)
	$(EXE)/./template1

$(OBJECTS)/template1.o: $(PROG)/template1.cpp $(CLASSES)/A_1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/template1.cpp -o $@
	

# Command: make tempTest
# Simple templated class example

tempTestObjs := $(OBJECTS)/tempTest.o

tempTest: $(tempTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/tempTest $(tempTestObjs)
	$(EXE)/./tempTest


$(OBJECTS)/tempTest.o: $(PROG)/tempTest.cpp $(CLASSES)/A.h
	$(PP) $(CXXFLAGS) -c $(PROG)/tempTest.cpp -o $@


	

# Command: make classBad
# Example of Pitfall of splitting templated classes into cpp and h
# Contains deliberate compiler errors

classBadObjs := $(OBJECTS)/classBad.o $(OBJECTS)/Abad.o

classBad: $(classBadObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/classBad $(classBadObjs)
	$(EXE)/./classBad

$(OBJECTS)/classBad.o: $(PROG)/classBad.cpp $(CLASSES)/Abad.h
	$(PP) $(CXXFLAGS) -c $(PROG)/classBad.cpp -o $@
	
$(OBJECTS)/Abad.o: $(CLASSES)/Abad.cpp $(CLASSES)/Abad.h
	$(PP) $(CXXFLAGS) -c $(CLASSES)/Abad.cpp -o $@
	
	
	
# Command: make tempBad
# Example of Pitfall of splitting bad templating
# Contains deliberate compiler errors

tempBadObjs := $(OBJECTS)/tempBad.o

tempBad: $(tempBadObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/tempBad $(tempBadObjs)
	$(EXE)/./tempBad

$(OBJECTS)/tempBad.o: $(PROG)/tempBad.cpp $(CLASSES)/A.h
	$(PP) $(CXXFLAGS) -c $(PROG)/tempBad.cpp -o $@
	
	


# Command: make DynArrTest
# Initial Abstract Data Type class

DynArrTestObjs := $(OBJECTS)/DynArrTest.o

DynArrTest: $(DynArrTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest $(DynArrTestObjs)

$(OBJECTS)/DynArrTest.o: $(PROG)/DynArrTest.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/DynArrTest.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make all
all: tempDest DynArrTest

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
