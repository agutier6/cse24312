# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 02 - Part 2

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)



# namespace Example
# Command: make namespace
namespaceObjs :=  namespace.o

namespace: namespace.o
	$(PP) $(CXXFLAGS) -o namespace $(namespaceObjs)
	./namespace

namespace.o: namespace.cpp
	$(PP) $(CXXFLAGS) -c namespace.cpp
	
	
	
# nameGood Example
# Command: make nameGood
nameGoodObjs :=  nameGood.o

nameGood: nameGood.o
	$(PP) $(CXXFLAGS) -o nameGood $(nameGoodObjs)
	./nameGood

nameGood.o: nameGood.cpp
	$(PP) $(CXXFLAGS) -c nameGood.cpp


# nameGood2 Example
# Command: make nameGood2
nameGood2Objs :=  nameGood2.o

nameGood2: nameGood2.o
	$(PP) $(CXXFLAGS) -o nameGood2 $(nameGood2Objs)
	./nameGood2

nameGood2.o: nameGood2.cpp
	$(PP) $(CXXFLAGS) -c nameGood2.cpp





# Make all
all: namespace nameGood

# Make clean
clean :
	rm -rf *.o namespace nameGood nameGood2
