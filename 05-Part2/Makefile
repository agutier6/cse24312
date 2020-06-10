# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 10

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 


10 := ~/cse20312/10-Templates
CLASSES := $(10)/classes
PROG := $(10)/programs
OBJECTS := $(10)/objects
EXE := $(10)/executables


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



# Make all
all: tempDest DynArrTest

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
