# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 - Lecture 09 - Part 1

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


# Command: make countSort1
countSort1Objs := $(OBJECTS)/countSort1.o

countSort1: $(countSort1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSort1 $(countSort1Objs)
	$(EXE)/./countSort1

$(OBJECTS)/countSort1.o: $(PROG)/countSort1.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSort1.cpp -o $@



# Command: make countSort2
countSort2Objs := $(OBJECTS)/countSort2.o

countSort2: $(countSort2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSort2 $(countSort2Objs)
	$(EXE)/./countSort2

$(OBJECTS)/countSort2.o: $(PROG)/countSort2.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSort2.cpp -o $@
	

# Command: make countSort3
countSort3Objs := $(OBJECTS)/countSort3.o

countSort3: $(countSort3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSort3 $(countSort3Objs)
	$(EXE)/./countSort3

$(OBJECTS)/countSort3.o: $(PROG)/countSort3.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSort3.cpp -o $@
	

# Command: make countSort
countSortObjs := $(OBJECTS)/countSort.o

countSort: $(countSortObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSort $(countSortObjs)
	$(EXE)/./countSort

$(OBJECTS)/countSort.o: $(PROG)/countSort.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSort.cpp -o $@



# Command: make countSortImpr1
countSortImpr1Objs := $(OBJECTS)/countSortImpr1.o

countSortImpr1: $(countSortImpr1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSortImpr1 $(countSortImpr1Objs)
	$(EXE)/./countSortImpr1

$(OBJECTS)/countSortImpr1.o: $(PROG)/countSortImpr1.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSortImpr1.cpp -o $@



# Command: make countSortImpr2
countSortImpr2Objs := $(OBJECTS)/countSortImpr2.o

countSortImpr2: $(countSortImpr2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSortImpr2 $(countSortImpr2Objs)
	$(EXE)/./countSortImpr2

$(OBJECTS)/countSortImpr2.o: $(PROG)/countSortImpr2.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSortImpr2.cpp -o $@



# Command: make countSortImpr
countSortImprObjs := $(OBJECTS)/countSortImpr.o

countSortImpr: $(countSortImprObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSortImpr $(countSortImprObjs)
	$(EXE)/./countSortImpr

$(OBJECTS)/countSortImpr.o: $(PROG)/countSortImpr.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSortImpr.cpp -o $@



# Command: make countSortSTL
countSortSTLObjs := $(OBJECTS)/countSortSTL.o

countSortSTL: $(countSortSTLObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/countSortSTL $(countSortSTLObjs)
	$(EXE)/./countSortSTL

$(OBJECTS)/countSortSTL.o: $(PROG)/countSortSTL.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/countSortSTL.cpp -o $@



# Command: make sepChain
sepChainObjs := $(OBJECTS)/sepChain.o

sepChain: $(sepChainObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sepChain $(sepChainObjs)
	$(EXE)/./sepChain

$(OBJECTS)/sepChain.o: $(PROG)/sepChain.cpp $(CLASSES)/DynArr.h $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sepChain.cpp -o $@



# Command: make bucketSort
bucketSortObjs := $(OBJECTS)/bucketSort.o

bucketSort: $(bucketSortObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/bucketSort $(bucketSortObjs)
	$(EXE)/./bucketSort

$(OBJECTS)/bucketSort.o: $(PROG)/bucketSort.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/bucketSort.cpp -o $@
	

# Make all
all: countSort1 countSort1


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
