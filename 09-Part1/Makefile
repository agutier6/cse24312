# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 course Lecture 07 - Part 1

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 


CLASSES := classes
PROG := programs
OBJECTS := objects
EXE := executables


# Command: make switch
switchObjs := $(OBJECTS)/switch.o

switch: $(switchObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/switch $(switchObjs)
	$(EXE)/./switch

$(OBJECTS)/switch.o: $(PROG)/switch.cpp
	$(PP) $(CXXFLAGS) -c $(PROG)/switch.cpp -o $@



# Command: make LPTest1
LPTest1Objs := $(OBJECTS)/LPTest1.o

LPTest1: $(LPTest1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest1 $(LPTest1Objs)
	$(EXE)/./LPTest1

$(OBJECTS)/LPTest1.o: $(PROG)/LPTest1.cpp $(CLASSES)/LinearProbe1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest1.cpp -o $@



# Command: make LPTest2
LPTest2Objs := $(OBJECTS)/LPTest2.o

LPTest2: $(LPTest2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest2 $(LPTest2Objs)
	$(EXE)/./LPTest2

$(OBJECTS)/LPTest2.o: $(PROG)/LPTest2.cpp $(CLASSES)/LinearProbe2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest2.cpp -o $@



# Command: make LPTest3
LPTest3Objs := $(OBJECTS)/LPTest3.o

LPTest3: $(LPTest3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest3 $(LPTest3Objs)
	$(EXE)/./LPTest3

$(OBJECTS)/LPTest3.o: $(PROG)/LPTest3.cpp $(CLASSES)/LinearProbe3.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest3.cpp -o $@



# Command: make LPTest4
LPTest4Objs := $(OBJECTS)/LPTest4.o

LPTest4: $(LPTest4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest4 $(LPTest4Objs)
	$(EXE)/./LPTest4

$(OBJECTS)/LPTest4.o: $(PROG)/LPTest4.cpp $(CLASSES)/LinearProbe4.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest4.cpp -o $@


# Command: make LPTest5
LPTest5Objs := $(OBJECTS)/LPTest5.o

LPTest5: $(LPTest5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest5 $(LPTest5Objs)
	$(EXE)/./LPTest5

$(OBJECTS)/LPTest5.o: $(PROG)/LPTest5.cpp $(CLASSES)/LinearProbe5.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest5.cpp -o $@


# Command: make LPTest6
LPTest6Objs := $(OBJECTS)/LPTest6.o

LPTest6: $(LPTest6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest6 $(LPTest6Objs)
	$(EXE)/./LPTest6

$(OBJECTS)/LPTest6.o: $(PROG)/LPTest6.cpp $(CLASSES)/LinearProbe6.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest6.cpp -o $@


# Command: make LPTest7
LPTest7Objs := $(OBJECTS)/LPTest7.o

LPTest7: $(LPTest7Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest7 $(LPTest7Objs)
	$(EXE)/./LPTest7

$(OBJECTS)/LPTest7.o: $(PROG)/LPTest7.cpp $(CLASSES)/LinearProbe7.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest7.cpp -o $@


# Command: make LPTest8
LPTest8Objs := $(OBJECTS)/LPTest8.o

LPTest8: $(LPTest8Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest8 $(LPTest8Objs)
	$(EXE)/./LPTest8

$(OBJECTS)/LPTest8.o: $(PROG)/LPTest8.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest8.cpp -o $@
	


# Command: make LPTest
LPTestObjs := $(OBJECTS)/LPTest.o

LPTest: $(LPTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LPTest $(LPTestObjs)
	$(EXE)/./LPTest

$(OBJECTS)/LPTest.o: $(PROG)/LPTest.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROG)/LPTest.cpp -o $@
	

# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables
	


# Make all
all: sol_1 sol_2 sol_3 sol Product1 Product2

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
