# This is the Makefile for the CSE 24312 course - Lecture 19 - Part 2

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

# Variables for Folders
CLASSES := classes
PROG := programs
EXE := executables
OBJECTS := objects


# Command: make testRBTNode1
# Test initial class for compilation
testRBTree1Objs := $(OBJECTS)/testRBTree1.o

testRBTree1: $(testRBTree1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testRBTree1 $(testRBTree1Objs)
	$(EXE)/./testRBTree1

$(OBJECTS)/testRBTree1.o: $(PROG)/testRBTree1.cpp $(CLASSES)/RBTree1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testRBTree1.cpp -o $@



# Command: make testRBTNode2
# Test initial class for compilation
testRBTree2Objs := $(OBJECTS)/testRBTree2.o

testRBTree2: $(testRBTree2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testRBTree2 $(testRBTree2Objs)
	$(EXE)/./testRBTree2

$(OBJECTS)/testRBTree2.o: $(PROG)/testRBTree2.cpp $(CLASSES)/RBTree2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testRBTree2.cpp -o $@	



# Command: make RBDelTest
# Shows a successful RBTree Tree Test
RBDelTestObjs := $(OBJECTS)/RBDelTest.o

RBDelTest: $(RBDelTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/RBDelTest $(RBDelTestObjs)
	$(EXE)/./RBDelTest

$(OBJECTS)/RBDelTest.o: $(PROG)/RBDelTest.cpp $(CLASSES)/RBTree.h
	$(PP) $(CXXFLAGS) -c $(PROG)/RBDelTest.cpp -o $@


# Command: make treeTest
# Shows a successful RBTree Tree Test
treeTestObjs := $(OBJECTS)/treeTest.o

treeTest: $(treeTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/treeTest $(treeTestObjs)
	$(EXE)/./treeTest

$(OBJECTS)/treeTest.o: $(PROG)/treeTest.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/treeTest.cpp -o $@



# Command: make multiSet
# Shows a successful RBTree Tree Test
multiSetObjs := $(OBJECTS)/multiSet.o

multiSet: $(multiSetObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/multiSet $(multiSetObjs)
	$(EXE)/./multiSet

$(OBJECTS)/multiSet.o: $(PROG)/multiSet.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/multiSet.cpp -o $@
	

# Make all
all: testRBTNode1Objs testRBTNode2Objs RBDelTest treeTest multiSet

# Make initialize
initialize :
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
