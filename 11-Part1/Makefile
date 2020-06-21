# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 - Lecture 10 - Part 1

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


# Command: make SLLTest
SLLTestObjs := $(OBJECTS)/SLLTest.o

SLLTest: $(SLLTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SLLTest $(SLLTestObjs)

$(OBJECTS)/SLLTest.o: $(PROG)/SLLTest.cpp $(CLASSES)/SLList.h
	$(PP) $(CXXFLAGS) -c $(PROG)/SLLTest.cpp -o $@



# Command: make SLLTest2
SLLTest2Objs := $(OBJECTS)/SLLTest2.o

SLLTest2: $(SLLTest2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SLLTest2 $(SLLTest2Objs)
	$(EXE)/./SLLTest2

$(OBJECTS)/SLLTest2.o: $(PROG)/SLLTest2.cpp $(CLASSES)/SLList.h
	$(PP) $(CXXFLAGS) -c $(PROG)/SLLTest2.cpp -o $@

	

# Make all
all: countSort1 countSort1


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
