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


# Command: make sol_1
sol_1Objs := $(OBJECTS)/sol_1.o

sol_1: $(sol_1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol_1 $(sol_1Objs)
	$(EXE)/./sol_1

$(OBJECTS)/sol_1.o: $(PROG)/sol_1.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol1.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol_1.cpp -o $@



# Command: make sol_2
sol_2Objs := $(OBJECTS)/sol_2.o

sol_2: $(sol_2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol_2 $(sol_2Objs)
	$(EXE)/./sol_2

$(OBJECTS)/sol_2.o: $(PROG)/sol_2.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol2.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol_2.cpp -o $@
	
	
# Command: make sol_3
sol_3Objs := $(OBJECTS)/sol_3.o

sol_3: $(sol_3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol_3 $(sol_3Objs)
	$(EXE)/./sol_3

$(OBJECTS)/sol_3.o: $(PROG)/sol_3.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol3.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol_3.cpp -o $@


# Command: make sol
solObjs := $(OBJECTS)/sol.o

sol: $(solObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/sol $(solObjs)
	$(EXE)/./sol

$(OBJECTS)/sol.o: $(PROG)/sol.cpp $(CLASSES)/DynArr.h $(CLASSES)/sol.h
	$(PP) $(CXXFLAGS) -c $(PROG)/sol.cpp -o $@


# Command: make Product
ProductObjs := $(OBJECTS)/Product.o

Product: $(ProductObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Product $(ProductObjs)
	$(EXE)/./Product

$(OBJECTS)/Product.o: $(PROG)/Product.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Product.cpp -o $@



# Command: make Product1
Product1Objs := $(OBJECTS)/Product1.o

Product1: $(Product1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Product1 $(Product1Objs)
	$(EXE)/./Product1

$(OBJECTS)/Product1.o: $(PROG)/Product1.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Product1.cpp -o $@


# Command: make Product2
Product2Objs := $(OBJECTS)/Product2.o

Product2: $(Product2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Product2 $(Product2Objs)
	$(EXE)/./Product2

$(OBJECTS)/Product2.o: $(PROG)/Product2.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Product2.cpp -o $@



# Command: make Product3
Product3Objs := $(OBJECTS)/Product3.o

Product3: $(Product3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Product3 $(Product3Objs)
	$(EXE)/./Product3

$(OBJECTS)/Product3.o: $(PROG)/Product3.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/Product3.cpp -o $@
	


# Command: make maxSub1
maxSub1Objs := $(OBJECTS)/maxSub1.o

maxSub1: $(maxSub1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxSub1 $(maxSub1Objs)
	$(EXE)/./maxSub1

$(OBJECTS)/maxSub1.o: $(PROG)/maxSub1.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxSub1.cpp -o $@



# Command: make maxSub2
maxSub2Objs := $(OBJECTS)/maxSub2.o

maxSub2: $(maxSub2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxSub2 $(maxSub2Objs)
	$(EXE)/./maxSub2

$(OBJECTS)/maxSub2.o: $(PROG)/maxSub2.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxSub2.cpp -o $@



# Command: make maxSub3
maxSub3Objs := $(OBJECTS)/maxSub3.o

maxSub3: $(maxSub3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxSub3 $(maxSub3Objs)
	$(EXE)/./maxSub3

$(OBJECTS)/maxSub3.o: $(PROG)/maxSub3.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxSub3.cpp -o $@



# Command: make maxSub4
maxSub4Objs := $(OBJECTS)/maxSub4.o

maxSub4: $(maxSub4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxSub4 $(maxSub4Objs)
	$(EXE)/./maxSub4

$(OBJECTS)/maxSub4.o: $(PROG)/maxSub4.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxSub4.cpp -o $@



# Command: make maxSub
maxSubObjs := $(OBJECTS)/maxSub.o

maxSub: $(maxSubObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxSub $(maxSubObjs)
	$(EXE)/./maxSub

$(OBJECTS)/maxSub.o: $(PROG)/maxSub.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxSub.cpp -o $@



# Command: make maxProd1
maxProd1Objs := $(OBJECTS)/maxProd1.o

maxProd1: $(maxProd1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxProd1 $(maxProd1Objs)
	$(EXE)/./maxProd1

$(OBJECTS)/maxProd1.o: $(PROG)/maxProd1.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxProd1.cpp -o $@



# Command: make maxProd
maxProdObjs := $(OBJECTS)/maxProd.o

maxProd: $(maxProdObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/maxProd $(maxProdObjs)
	$(EXE)/./maxProd

$(OBJECTS)/maxProd.o: $(PROG)/maxProd.cpp $(CLASSES)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(PROG)/maxProd.cpp -o $@
	

# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables
	


# Make all
all: sol_1 sol_2 sol_3 sol Product1 Product2

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
