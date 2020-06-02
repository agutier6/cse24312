/**********************************************
* File: helloArray3.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* An example of "Hello, World" with object-oriented 
* programming of char* and << operator for the
* entire array
*
* Lecture 01 - Part 2 - Slide 68
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
	
	char* hello = "Hello, World";
	
	std::cout << hello << std::endl;

	return 0;
}
