# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 course Lecture 06 - Part 2

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 


CLASSES := classes
PROG := programs
OBJECTS := objects
EXE := executables


# Command: make sol_1
sol_1Objs := $(OBJECTS)/sol_1.o

sol_1: $(sol_1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol_1 $(sol_1Objs)
	$(EXE)/./sol_1

$(OBJECTS)/sol_1.o: $(PROG)/sol_1.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol_1.cpp -o $@



# Command: make sol_2
sol_2Objs := $(OBJECTS)/sol_2.o

sol_2: $(sol_2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol_2 $(sol_2Objs)
	$(EXE)/./sol_2

$(OBJECTS)/sol_2.o: $(PROG)/sol_2.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol_2.cpp -o $@
	
	
# Command: make sol_3
sol_3Objs := $(OBJECTS)/sol_3.o

sol_3: $(sol_3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol_3 $(sol_3Objs)
	$(EXE)/./sol_3

$(OBJECTS)/sol_3.o: $(PROG)/sol_3.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol3.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol_3.cpp -o $@


# Command: make sol
solObjs := $(OBJECTS)/sol.o

sol: $(solObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol $(solObjs)
	$(EXE)/./sol

$(OBJECTS)/sol.o: $(PROG)/sol.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables
	


# Make all
all: sol_1 DynArrTest6 DynArrTest

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
