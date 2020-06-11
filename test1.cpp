#include <iostream>
#include <cstdlib>

#define COUT std::cout
#define ENDL std::endl

void setNodeValues( void* reference, int theInt, double theDbl, char* theWord, long unsigned int length ){
	
	COUT << reference << ENDL;
	
	*((int *)(reference)) = theInt;
	
	reference += sizeof(int);
	*((double *)(reference)) = theDbl;
	
	reference += sizeof(double);
	*((long unsigned int *)(reference)) = length;
	
	void* startArray = reference;
	reference += sizeof(long unsigned int);
	
	for(long unsigned int iter = 0; iter < *((long unsigned int *)(startArray)); iter++){
	
		*((char *)reference) = theWord[iter];
		
		reference += sizeof(char);
	
	}
	
}


void printNodeValues( void* reference ){
	
	COUT << "-----------------------------" << ENDL;
	COUT << "Initial address of reference: " << reference << ENDL << ENDL;	
	
	COUT << *((int *)(reference)) << ENDL;
	
	reference += sizeof(int);
	COUT << *((double *)(reference)) << ENDL;
	
	reference += sizeof(double);
	
	void* startArray = reference;
	
	reference += sizeof(long unsigned int);
	
	for(long unsigned int iter = 0; iter < *((long unsigned int *)(startArray)); iter++){
	
		COUT << *((char *)reference);
		
		reference += sizeof(char);
	
	}	
	COUT << ENDL;
	
}

int main(void){

	char* char1 = "Hello, World";
	long unsigned int length1 = 12;
	char* char2 = "Notre Dame";
	long unsigned int length2 = 10;
	
	long unsigned int nodeSize = sizeof(double) + sizeof(float) + sizeof( long unsigned int );
	
	void* node1 = malloc( nodeSize + 12*sizeof(char) );
	void* node2 = malloc( nodeSize + 12*sizeof(char));
	
	// Set the node Values for node1 
	setNodeValues( node1, -0.625, 1.5625, char1, length1 );
	
	// Set the node Values for node2 
	setNodeValues( node2, -34.77, 44.96, char2, length2 );
	
	// Printing the values. Set the reference back to numbers
	printNodeValues( node1 );
	printNodeValues( node2 );
	
	// Free void* with allocated memory
	free( node1 );
	free( node2 );

	return 0;
}