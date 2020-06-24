# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 - Lecture 10 - Part 2

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


# Command: make fibOld
fibOldObjs := $(OBJECTS)/fibOld.o

fibOld: $(fibOldObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/fibOld $(fibOldObjs)

$(OBJECTS)/fibOld.o: $(PROG)/fibOld.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/fibOld.cpp -o $@
	
	
# Command: make fibMemo
fibMemoObjs := $(OBJECTS)/fibMemo.o

fibMemo: $(fibMemoObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/fibMemo $(fibMemoObjs)

$(OBJECTS)/fibMemo.o: $(PROG)/fibMemo.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/fibMemo.cpp -o $@



# Command: make steps
stepsObjs := $(OBJECTS)/steps.o

steps: $(stepsObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/steps $(stepsObjs)

$(OBJECTS)/steps.o: $(PROG)/steps.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/steps.cpp -o $@



# Command: make coinChange
coinChangeObjs := $(OBJECTS)/coinChange.o

coinChange: $(coinChangeObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/coinChange $(coinChangeObjs)

$(OBJECTS)/coinChange.o: $(PROG)/coinChange.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/coinChange.cpp -o $@



# Command: make coinChange1
coinChange1Objs := $(OBJECTS)/coinChange1.o

coinChange1: $(coinChange1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/coinChange1 $(coinChange1Objs)

$(OBJECTS)/coinChange1.o: $(PROG)/coinChange1.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/coinChange1.cpp -o $@



# Command: make coinChange2
coinChange2Objs := $(OBJECTS)/coinChange2.o

coinChange2: $(coinChange2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/coinChange2 $(coinChange2Objs)

$(OBJECTS)/coinChange2.o: $(PROG)/coinChange2.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/coinChange2.cpp -o $@



# Command: make coinChange3
coinChange3Objs := $(OBJECTS)/coinChange3.o

coinChange3: $(coinChange3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/coinChange3 $(coinChange3Objs)

$(OBJECTS)/coinChange3.o: $(PROG)/coinChange3.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/coinChange3.cpp -o $@



# Command: make coinChange4
coinChange4Objs := $(OBJECTS)/coinChange4.o

coinChange4: $(coinChange4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/coinChange4 $(coinChange4Objs)

$(OBJECTS)/coinChange4.o: $(PROG)/coinChange4.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/coinChange4.cpp -o $@
	

# Make all
all: fibOld fibMemo steps


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
