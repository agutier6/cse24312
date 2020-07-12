# This is the Makefile for the CSE 24312 course - Lecture 19

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
# Successfully create and allocate Red-Black Tree Nodes
testRBTNode1Objs := $(OBJECTS)/testRBTNode1.o

testRBTNode1: $(testRBTNode1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testRBTNode1 $(testRBTNode1Objs)
	$(EXE)/./testRBTNode1

$(OBJECTS)/testRBTNode1.o: $(PROG)/testRBTNode1.cpp $(CLASSES)/RBTNode1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testRBTNode1.cpp -o $@
	
	
	
# Command: make testRBTNode2
# Obtain and print the node's uncle
testRBTNode2Objs := $(OBJECTS)/testRBTNode2.o

testRBTNode2: $(testRBTNode2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testRBTNode2 $(testRBTNode2Objs)
	$(EXE)/./testRBTNode2

$(OBJECTS)/testRBTNode2.o: $(PROG)/testRBTNode2.cpp $(CLASSES)/RBTNode2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testRBTNode2.cpp -o $@


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
