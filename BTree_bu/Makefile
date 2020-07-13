# This is the Makefile for the CSE 24312 course - Lecture 19 - Part 1

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


# Command: make testBTreeNode
testBTreeNode1Objs := $(OBJECTS)/testBTreeNode1.o

testBTreeNode1: $(testBTreeNode1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTreeNode1 $(testBTreeNode1Objs)
	$(EXE)/./testBTreeNode1

$(OBJECTS)/testBTreeNode1.o: $(PROG)/testBTreeNode1.cpp $(CLASSES)/BTreeNode1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTreeNode1.cpp -o $@


# Command: make testBTree
testBTree1Objs := $(OBJECTS)/testBTree1.o

testBTree1: $(testBTree1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree1 $(testBTree1Objs)
	$(EXE)/./testBTree1

$(OBJECTS)/testBTree1.o: $(PROG)/testBTree1.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree1.cpp -o $@


# Command: make testBTree2
testBTree2Objs := $(OBJECTS)/testBTree2.o

testBTree2: $(testBTree2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree2 $(testBTree2Objs)
	$(EXE)/./testBTree2

$(OBJECTS)/testBTree2.o: $(PROG)/testBTree2.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree2.cpp -o $@



# Command: make testBTree3
testBTree3Objs := $(OBJECTS)/testBTree3.o

testBTree3: $(testBTree3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree3 $(testBTree3Objs)
	$(EXE)/./testBTree3

$(OBJECTS)/testBTree3.o: $(PROG)/testBTree3.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree3.cpp -o $@



# Command: make testBTree4
testBTree4Objs := $(OBJECTS)/testBTree4.o

testBTree4: $(testBTree4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree4 $(testBTree4Objs)
	$(EXE)/./testBTree4

$(OBJECTS)/testBTree4.o: $(PROG)/testBTree4.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree4.cpp -o $@



# Command: make testBTree5
testBTree5Objs := $(OBJECTS)/testBTree5.o

testBTree5: $(testBTree5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree5 $(testBTree5Objs)
	$(EXE)/./testBTree5

$(OBJECTS)/testBTree5.o: $(PROG)/testBTree5.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree5.cpp -o $@
	
	
	
# Command: make testBTree6
testBTree6Objs := $(OBJECTS)/testBTree6.o

testBTree6: $(testBTree6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree6 $(testBTree6Objs)
	$(EXE)/./testBTree6

$(OBJECTS)/testBTree6.o: $(PROG)/testBTree6.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree6.cpp -o $@
	
	
	
# Command: make testBTree7
testBTree7Objs := $(OBJECTS)/testBTree7.o

testBTree7: $(testBTree7Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree7 $(testBTree7Objs)
	$(EXE)/./testBTree7

$(OBJECTS)/testBTree7.o: $(PROG)/testBTree7.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree7.cpp -o $@


# Command: make testBTree
testBTreeObjs := $(OBJECTS)/testBTree.o

testBTree: $(testBTreeObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree $(testBTreeObjs)
	$(EXE)/./testBTree

$(OBJECTS)/testBTree.o: $(PROG)/testBTree.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree.cpp -o $@


# Command: make testBTree7Str
testBTree7StrObjs := $(OBJECTS)/testBTree7Str.o

testBTree7Str: $(testBTree7StrObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBTree7Str $(testBTree7StrObjs)
	$(EXE)/./testBTree7Str

$(OBJECTS)/testBTree7Str.o: $(PROG)/testBTree7Str.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testBTree7Str.cpp -o $@
	
# Make all
all: testBSTNode1 testBSTNode2


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*