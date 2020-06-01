/**********************************************
* File: array1.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a char array and print its address
*
* Lecture 01 - Part 2 - Slides 54
**********************************************/

#include <iostream>
#include <cstdlib>

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	long unsigned int numCharacters = 13;
	
	char* hello = new char[numCharacters];
	
	std::cout << (void *)hello << std::endl;
	
	delete hello;

	return 0;
}
