# This is the Makefile for the CSE 24312 course - Lecture 18 - Part 2

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


# Command: make testBST6
# Test Contains, Min, and Max
testBST6Objs := $(OBJECTS)/testBST6.o 

testBST6: $(testBST6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST6 $(testBST6Objs)
	$(EXE)/./testBST6

$(OBJECTS)/testBST6.o: $(PROG)/testBST6.cpp $(CLASSES)/BST6.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST6.cpp -o $@


# Command: make testBST7
# Test Delete 
testBST7Objs := $(OBJECTS)/testBST7.o 

testBST7: $(testBST7Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST7 $(testBST7Objs)
	$(EXE)/./testBST7

$(OBJECTS)/testBST7.o: $(PROG)/testBST7.cpp $(CLASSES)/BST7.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST7.cpp -o $@



# Command: make maxHeight
# Test Max Height 
maxHeightObjs := $(OBJECTS)/maxHeight.o 

maxHeight: $(maxHeightObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxHeight $(maxHeightObjs)
	$(EXE)/./maxHeight

$(OBJECTS)/maxHeight.o: $(PROG)/maxHeight.cpp $(CLASSES)/BST7.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxHeight.cpp -o $@
	
	
# Command: make testAVL1
# Test AVL Tree - 1
testAVL1Objs := $(OBJECTS)/testAVL1.o 

testAVL1: $(testAVL1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testAVL1 $(testAVL1Objs)
	$(EXE)/./testAVL1

$(OBJECTS)/testAVL1.o: $(PROG)/testAVL1.cpp $(CLASSES)/AVLTree1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testAVL1.cpp -o $@



# Command: make testAVL
# Test AVL Tree - With Full Balance
testAVLObjs := $(OBJECTS)/testAVL.o 

testAVL: $(testAVLObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testAVL $(testAVLObjs)
	$(EXE)/./testAVL

$(OBJECTS)/testAVL.o: $(PROG)/testAVL.cpp $(CLASSES)/AVLTree.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testAVL.cpp -o $@
	

# Make all
all: testBSTNode1 testBSTNode2


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*