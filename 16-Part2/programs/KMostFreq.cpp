#include <string>
#include <iostream>

#include "../classes/DynArr.h"
#include "../classes/LinearProbe.h"
#include "../classes/Priority.h"
#include "../classes/MaxHeap.h"

#define COUT std::cout
#define ENDL std::endl

void findKthLargest( DynArr< Priority<int> >& results, unsigned int kTh ){
	
	// Create a Maximum Heap
	MaxHeap< Priority<int> > heap;
	
	// Protect the array from kth larger or smaller than elements
	if( kTh > results.length() || kTh == 0){
		COUT << kTh << " exceeds the array length of " << results.length() << ENDL;
		return;
	}
	
	// Push the first k elements onto the heap 
	for( unsigned int iter = 0; iter < kTh; iter++ ){
		heap.push( results[ iter ] );
	}
	
	// Iterate through the rest of the pairs
	for( unsigned int iter = kTh; iter < results.length(); iter++ ){
		
		// If the element is greater than the top of the Max Heap
		if( results[ iter ] > heap.top() ){
			heap.pop();
			heap.push( results[ iter ] );
		}
	}
	
	// Print all the elements in the array
	COUT << "K = " << kTh << ": ";
	while( !heap.empty() ){
	
		COUT << heap.top() << " ";
		heap.pop();
	}
	COUT << ENDL;
	
}

DynArr< Priority<int> > getCount(HashTable< int, int >& countSort, unsigned int largestNum){
	
	// Create the Dynamic Array for the set of results
	DynArr< Priority<int> > theResults;

	for(unsigned int i = 0; i <= largestNum; i++){
		
		try{
			// If countSort[i] is not 0, then the count exists
			if( countSort[i] > 0 ){
				
				// Create the priority pair
				Priority<int> tempPriority( i, countSort[i] );
				
				// Push the element onto the Array 
				theResults.push_back( tempPriority );
			}
			
		}
		catch( const std::exception& theException ){ /* Do Nothing */ }
	}
	
	return theResults;
}

/********************************************
* Function Name  : main
* Pre-conditions :
* Post-conditions: int
*
* Main driver function. Solution  
********************************************/
int main(){

	/* The Hash Table for the Counting Sort */
	HashTable<int, int> countSort;
	
	/* A vector of values to sort */
	DynArr<int> theVals;
	
	theVals.push_back( 1 ); 	theVals.push_back( 2 );
	theVals.push_back( 3 ); 	theVals.push_back( 1 );
	theVals.push_back( 2 ); 	theVals.push_back( 1 );
	theVals.push_back( 100 );	theVals.push_back( 3 );
	theVals.push_back( 1 );		theVals.push_back( 55 );
	theVals.push_back( 2 );	
	
	/* Get the largest number, which is the number of buckets */
	int largestNum = 0;
	for(unsigned int iter = 0; iter < theVals.length(); iter++){
		
		if( countSort.contains( theVals[iter] )  ){
			
			// Increment the value
			countSort[ theVals[iter] ]++;
			
		}
		else{
			// Initialize the count at 1
			countSort.insert( {theVals[iter], 1} );
		}
		
		// Keep track of the largest value
		if(theVals[iter] > largestNum){
			largestNum = theVals[iter];
		}
		
	}

	/* Print the Sorted Results */
	DynArr< Priority<int> > distribution = getCount( countSort, largestNum );
	
	COUT << "Initial Array: " << theVals << ENDL;
	COUT << "Distribution : " << distribution << ENDL;
	
	findKthLargest( distribution, 1);
	findKthLargest( distribution, 2);
	findKthLargest( distribution, 3);
	findKthLargest( distribution, 4);
	findKthLargest( distribution, 5);
	findKthLargest( distribution, 6);
	findKthLargest( distribution, 0);
	return 0;
}
