/**********************************************
* File: voidFunc.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Example of allocating multiple version of data 
* with different types of elements
*
* Shows void pointers as "Pass by reference"
*
* Lecture 02 - Part 2 - Slide 29
**********************************************/

#include <iostream>
#include <cstdlib>

#define COUT std::cout
#define ENDL std::endl

void hashFunc( int* reference, int input, int arraySize ){
	
	int bucket = input % arraySize;
	
	reference[bucket] = input;
	
}


void printHashValues( int* reference, long unsigned int arraySize ){
	
	for(long unsigned int iter = 0; iter < arraySize; iter++ ){
		
		COUT << "Bucket " << iter << " contains " << reference[iter] << ENDL;
		
	}
	
}

int main(void){
	
	int numValues = 8;
	
	int origOrder[numVales] = {22, 7, 8, 9, 44, 109, 33, 68};
	
	long unsigned int arraySize = 11;
	
	int* hashPtr = new int[arraySize];
	
	// Hash seven values 
	hashFunc( hashPtr, 2, arraySize );
	hashFunc( hashPtr, 22, arraySize );
	hashFunc( hashPtr, 18, arraySize );
	hashFunc( hashPtr, 81, arraySize );
	hashFunc( hashPtr, 69, arraySize );
	hashFunc( hashPtr, 53, arraySize );
	hashFunc( hashPtr, 109, arraySize );
	
	// Printing the values. Set the reference back to numbers
	printHashValues( hashPtr, arraySize );
	
	// Free void* with allocated memory
	delete hashPtr;

	return 0;
}
