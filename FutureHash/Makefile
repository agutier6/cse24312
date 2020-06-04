# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 03 - Part 1

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)



# voidHash Example
# Command: make voidHash
voidHashObjs :=  voidHash.o

voidHash: voidHash.o
	$(PP) $(CXXFLAGS) -o voidHash $(voidHashObjs)
	./voidHash

voidHash.o: voidHash.cpp
	$(PP) $(CXXFLAGS) -c voidHash.cpp



# charHash Example
# Command: make charHash
charHashObjs :=  charHash.o

charHash: charHash.o
	$(PP) $(CXXFLAGS) -o charHash $(charHashObjs)
	./charHash

charHash.o: charHash.cpp
	$(PP) $(CXXFLAGS) -c charHash.cpp	



# arrayHash Example
# Command: make arrayHash
arrayHashObjs :=  arrayHash.o

arrayHash: arrayHash.o
	$(PP) $(CXXFLAGS) -o arrayHash $(arrayHashObjs)
	./arrayHash

arrayHash.o: arrayHash.cpp
	$(PP) $(CXXFLAGS) -c arrayHash.cpp	

	

# Make all
all: voidHash charHash arrayHash

# Make clean
clean :
	rm -rf *.o voidHash charHash arrayHash
