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


	
# Command: make TreapInsert
# Tests the Treap Insert Results
TreapInsertObjs := $(OBJECTS)/TreapInsert.o 

TreapInsert: $(TreapInsertObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/TreapInsert $(TreapInsertObjs)
	$(EXE)/./TreapInsert

$(OBJECTS)/TreapInsert.o: $(PROG)/TreapInsert.cpp $(CLASSES)/Treap2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/TreapInsert.cpp -o $@


# Command: make InsertRandom
# Tests the Treap Insert Results
InsertRandomObjs := $(OBJECTS)/InsertRandom.o 

InsertRandom: $(InsertRandomObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/InsertRandom $(InsertRandomObjs)
	$(EXE)/./InsertRandom

$(OBJECTS)/InsertRandom.o: $(PROG)/InsertRandom.cpp $(CLASSES)/Treap3.h
	$(PP) $(CXXFLAGS) -c $(PROG)/InsertRandom.cpp -o $@
	
	
# Command: make InsertRandom2
# Tests height for 100 versions of 100 inserts
InsertRandom2Objs := $(OBJECTS)/InsertRandom2.o 

InsertRandom2: $(InsertRandom2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/InsertRandom2 $(InsertRandom2Objs)
	$(EXE)/./InsertRandom2

$(OBJECTS)/InsertRandom2.o: $(PROG)/InsertRandom2.cpp $(CLASSES)/Treap4.h
	$(PP) $(CXXFLAGS) -c $(PROG)/InsertRandom2.cpp -o $@
	
	
# Command: make TreapTest
# Tests the Treap Insert Results
TreapTestObjs := $(OBJECTS)/TreapTest.o 

TreapTest: $(TreapTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/TreapTest $(TreapTestObjs)
	$(EXE)/./TreapTest

$(OBJECTS)/TreapTest.o: $(PROG)/TreapTest.cpp $(CLASSES)/Treap.h
	$(PP) $(CXXFLAGS) -c $(PROG)/TreapTest.cpp -o $@


# Initialize 
initialize:
	mkdir $(OBJECTS) $(EXE)

# Make all
all: SubsetSums BloomURL

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
