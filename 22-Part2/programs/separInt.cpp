/**********************************************
* File: sgeHash.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Shows a basic example of STL C++ Hash Map
**********************************************/
#include <unordered_map>
#include <iterator>
#include <list>
#include <string>
#include <iostream>

const int numBuckets = 8;

int HashFunc(int value){
	return value % numBuckets;
}


void insertVal(std::unordered_map<int, std::list<int> >& sepChain, int value){
	
	sepChain[ HashFunc(value) ].push_back(value);
	
}


void printHash(std::unordered_map<int, std::list<int> >& sepChain){

	for(int i = 0; i < numBuckets; i++){
	
		std::cout << i << ": ";
	
		/* sepChain[numBuckets] gives the list to iterate through */
		for(int& curr : sepChain[i]){
			std::cout << curr << " ";
		}
		
		std::cout << std::endl;
	}
	
}

/********************************************
* Function Name  : main
* Pre-conditions :
* Post-conditions: int
*
* Main driver function. Solution  
********************************************/
int main(){

	std::unordered_map<int, std::list<int> > sepChain;
	
	/* Initialize List */
	for(int i = 0; i < numBuckets; i++){
		std::list<int> temp;
		sepChain.insert( {i, temp} );
	}
	
	/* Insert 4, 13, 8, 10, 5, 15 */
	insertVal(sepChain, 4);
	insertVal(sepChain, 13);
	insertVal(sepChain, 8);
	insertVal(sepChain, 10);
	insertVal(sepChain, 5);
	insertVal(sepChain, 15);

	/* Print the Hash */
	printHash(sepChain);

	return 0;
}
