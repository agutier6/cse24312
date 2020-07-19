# This is the Makefile for the CSE 24312 course - Lecture 21 Part 2

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


	
# Command: make testBH
# Tests the Treap Insert Results
testBHObjs := $(OBJECTS)/testBH.o 

testBH: $(testBHObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBH $(testBHObjs)
	$(EXE)/./testBH

$(OBJECTS)/testBH.o: $(PROG)/testBH.cpp $(CLASSES)/BinomialHeap.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testBH.cpp -o $@



# Command: make testPQ
# Tests the Treap Insert Results
testPQObjs := $(OBJECTS)/testPQ.o 

testPQ: $(testPQObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testPQ $(testPQObjs)
	$(EXE)/./testPQ

$(OBJECTS)/testPQ.o: $(PROG)/testPQ.cpp $(CLASSES)/PriorityQueue.h
	$(PP) $(CXXFLAGS) -c $(PROG)/testPQ.cpp -o $@


# Command: make PriorityTest
# Tests the Treap Insert Results
PriorityTestObjs := $(OBJECTS)/PriorityTest.o 

PriorityTest: $(PriorityTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PriorityTest $(PriorityTestObjs)
	$(EXE)/./PriorityTest

$(OBJECTS)/PriorityTest.o: $(PROG)/PriorityTest.cpp $(CLASSES)/PriorityQueue.h
	$(PP) $(CXXFLAGS) -c $(PROG)/PriorityTest.cpp -o $@

# Initialize 
initialize:
	mkdir $(OBJECTS) $(EXE)

# Make all
all: testPQ testBH

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
