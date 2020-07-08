# This is the Makefile for the CSE 24312 course - Lecture 15 - Part 2

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


	
# Command: make TrieNodeTest
# Initial Examples of Trie Node
TrieNodeTestObjs := $(OBJECTS)/TrieNodeTest.o 

TrieNodeTest: $(TrieNodeTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/TrieNodeTest $(TrieNodeTestObjs)
	$(EXE)/./TrieNodeTest

$(OBJECTS)/TrieNodeTest.o: $(PROG)/TrieNodeTest.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/TrieNodeTest.cpp -o $@



# Command: make TrieTest
# Initial Examples of Trie Node
TrieTestObjs := $(OBJECTS)/TrieTest.o 

TrieTest: $(TrieTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/TrieTest $(TrieTestObjs)
	$(EXE)/./TrieTest

$(OBJECTS)/TrieTest.o: $(PROG)/TrieTest.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/TrieTest.cpp -o $@



# Command: make WordBreak
WordBreakObjs := $(OBJECTS)/WordBreak.o 

WordBreak: $(WordBreakObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/WordBreak $(WordBreakObjs)
	$(EXE)/./WordBreak $(PROG)/Dictionary.txt

$(OBJECTS)/WordBreak.o: $(PROG)/WordBreak.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/WordBreak.cpp -o $@


# Command: make testDynArr
testDynArrObjs := $(OBJECTS)/testDynArr.o 

testDynArr: $(testDynArrObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testDynArr $(testDynArrObjs)
	$(EXE)/./testDynArr

$(OBJECTS)/testDynArr.o: $(PROG)/testDynArr.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/testDynArr.cpp -o $@


# Make all
all: TrieNodeTest TrieTest WordBreak


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
	
	
# Make gitPre
gitPre:
	make clean
	git add Makefile $(PROG)/*
	git commit -m "Lecture 37 Preview Assignment"
	git push

	
# Make gitIn
gitIn:
	make clean
	git add Makefile $(PROG)/*
	git commit -m "Lecture 37 In Class"
	git push
	
	
# Make gitIn
gitFix:
	make clean
	git add --all
	git commit -m "Lecture 37 In Class - Fix"
	git push
