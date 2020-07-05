# This is the Makefile for the CSE 24312 course - Lecture 18 - Part 1

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


	
# Command: make testBSTNode1
# Initial Examples of BSTNode
testBSTNode1Objs := $(OBJECTS)/testBSTNode1.o 

testBSTNode1: $(testBSTNode1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBSTNode1 $(testBSTNode1Objs)
	$(EXE)/./testBSTNode1

$(OBJECTS)/testBSTNode1.o: $(PROG)/testBSTNode1.cpp $(CLASSES)/BSTNode1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBSTNode1.cpp -o $@



# Command: make testBSTNode2
# Initial Examples of BSTNode with pointers
# Deliberate Compiler Error
testBSTNode2Objs := $(OBJECTS)/testBSTNode2.o 

testBSTNode2: $(testBSTNode2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBSTNode2 $(testBSTNode2Objs)
	$(EXE)/./testBSTNode2

$(OBJECTS)/testBSTNode2.o: $(PROG)/testBSTNode2.cpp $(CLASSES)/BSTNode2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBSTNode2.cpp -o $@



# Command: make testBST1
# Initial Examples of BST with pointers
# Deliberate Compiler Error
testBST1Objs := $(OBJECTS)/testBST1.o 

testBST1: $(testBST1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST1 $(testBST1Objs)
	$(EXE)/./testBST1

$(OBJECTS)/testBST1.o: $(PROG)/testBST1.cpp $(CLASSES)/BST1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST1.cpp -o $@


# Command: make testBST2Bad
# Shows the student that pointers need to be 
# called by reference
testBST2BadObjs := $(OBJECTS)/testBST2Bad.o 

testBST2Bad: $(testBST2BadObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST2Bad $(testBST2BadObjs)
	$(EXE)/./testBST2Bad

$(OBJECTS)/testBST2Bad.o: $(PROG)/testBST2Bad.cpp $(CLASSES)/BST2Bad.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST2Bad.cpp -o $@


# Command: make testBST2
# Initial Examples of BST with pointers
testBST2Objs := $(OBJECTS)/testBST2.o 

testBST2: $(testBST2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST2 $(testBST2Objs)
	$(EXE)/./testBST2

$(OBJECTS)/testBST2.o: $(PROG)/testBST2.cpp $(CLASSES)/BST2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST2.cpp -o $@


# Command: make testBST3
# Prints Pre-Order with the In-Order
testBST3Objs := $(OBJECTS)/testBST3.o 

testBST3: $(testBST3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST3 $(testBST3Objs)
	$(EXE)/./testBST3

$(OBJECTS)/testBST3.o: $(PROG)/testBST3.cpp $(CLASSES)/BST3.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST3.cpp -o $@	



# Command: make testBST4
# Prints Pre-Order with the In-Order
testBST4Objs := $(OBJECTS)/testBST4.o 

testBST4: $(testBST4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST4 $(testBST4Objs)
	$(EXE)/./testBST4

$(OBJECTS)/testBST4.o: $(PROG)/testBST4.cpp $(CLASSES)/BST4.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST4.cpp -o $@
	
	
# Command: make testBST5
# Prints Pre-Order with the In-Order
testBST5Objs := $(OBJECTS)/testBST5.o 

testBST5: $(testBST5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST5 $(testBST5Objs)
	$(EXE)/./testBST5

$(OBJECTS)/testBST5.o: $(PROG)/testBST5.cpp $(CLASSES)/BST5.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBST5.cpp -o $@
	

# Make all
all: testBSTNode1 testBSTNode2


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*