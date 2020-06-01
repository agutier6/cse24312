/**********************************************
* File: void1.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a void pointer and print its address
*
* Lecture 01 - Part 2 - Slide 47
**********************************************/

#include <iostream>
#include <cstdlib>

int main(void){
	
	long unsigned int numCharacters = 13;
	
	void* hello = malloc( numCharacters * sizeof(char) );
	
	std::cout << hello << std::endl;
	
	free( hello );

	return 0;
}

