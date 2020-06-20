/**********************************************
* File: countSort3.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Shows a basic example of Counting Sort
**********************************************/
#include <string>
#include <iostream>

#include "../classes/DynArr.h"
#include "../classes/LinearProbe.h"

int main(){
	
	/* The Hash Table for the Counting Sort */
	HashTable<int, int> countSort;
	
	/* A vector of values to sort */
	DynArr<int> theVals;
	
	theVals.push_back( 7 ); 	theVals.push_back( 1 );
	theVals.push_back( 5 ); 	theVals.push_back( 7 );
	theVals.push_back( 1 ); 	theVals.push_back( 4 );
	theVals.push_back( 100 ); 	theVals.push_back( 44 );
	theVals.push_back( 9 );
	
	/* Get the largest number, which is the number of buckets */
	int largestNum = 0;
	for(unsigned int iter = 0; iter < theVals.length(); iter++){
		
		if(theVals[iter] > largestNum){
			largestNum = theVals[iter];
		}
		
	}
	
	/* Initialize List */
	for(int i = 0; i <= largestNum; i++){
		
		countSort.insert( {i, 0} );
		
	}
	
	/* Implement the counting sort */
	/* Increment each bucket when it is hashed */
	for(unsigned int iter = 0; iter < theVals.length(); iter++){
		
		countSort[ theVals[iter] ]++;
		
	}
	
	/* Print Hash Table */
	std::cout << countSort << std::endl;

	return 0;
}
