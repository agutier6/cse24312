# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 - Lecture 08 - Part 2

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


# Command: make IrishTest
# Base class for First Inheritance Example
IrishTestObjs := $(OBJECTS)/IrishTest.o $(OBJECTS)/Irish.o 

IrishTest: $(IrishTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/IrishTest $(IrishTestObjs)
	$(EXE)/./IrishTest

$(OBJECTS)/IrishTest.o: $(PROG)/IrishTest.cpp $(CLASSES)/Irish.h
	$(PP) $(CXXFLAGS) -c $(PROG)/IrishTest.cpp -o $@

$(OBJECTS)/Irish.o: $(CLASSES)/Irish.cpp $(CLASSES)/Irish.h
	$(PP) $(CXXFLAGS) -c $(CLASSES)/Irish.cpp -o $@



# Command: make Inherit 
# Derived Classes for First Inheritance Example 
InheritObjs := $(OBJECTS)/Inherit.o $(OBJECTS)/Faculty.o $(OBJECTS)/Student.o $(OBJECTS)/Irish.o

Inherit: $(InheritObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Inherit $(InheritObjs)
	$(EXE)/./Inherit

# Inherit.cpp class both derived classes
$(OBJECTS)/Inherit.o: $(PROG)/Inherit.cpp $(CLASSES)/Student.h $(CLASSES)/Faculty.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Inherit.cpp -o $@

# Faculty inherits Irish
$(OBJECTS)/Faculty.o: $(CLASSES)/Faculty.cpp $(CLASSES)/Faculty.h $(CLASSES)/Irish.h
	$(PP) $(CXXFLAGS) -c $(CLASSES)/Faculty.cpp -o $@

# Student inherits Irish
$(OBJECTS)/Student.o: $(CLASSES)/Student.cpp $(CLASSES)/Student.h $(CLASSES)/Irish.h
	$(PP) $(CXXFLAGS) -c $(CLASSES)/Student.cpp -o $@

# Irish.o is already created in the Base Class
	


# Command: make Inherit2
# Example of this object in Inheritance Example 
Inherit2Objs := $(OBJECTS)/Inherit2.o $(OBJECTS)/Faculty.o $(OBJECTS)/Student.o $(OBJECTS)/Irish.o

Inherit2: $(Inherit2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Inherit2 $(Inherit2Objs)
	$(EXE)/./Inherit2

# Inherit.cpp class both derived classes
$(OBJECTS)/Inherit2.o: $(PROG)/Inherit2.cpp $(CLASSES)/Student.h $(CLASSES)/Faculty.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Inherit2.cpp -o $@

# Irish.o, Student.o, and Faculty.o are already created in make Inherit
	

# Make all
all: IrishTest Inherit Inherit2


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
