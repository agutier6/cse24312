#include "../classes/Treap4.h"
#include <cstdlib> 
#include <ctime>
#include <vector>

#define COUT std::cout
#define ENDL std::endl

template< class T >
void insertAndPrint( Treap<T>& theTreap, T value ){
	
	COUT << "Inserting value " << value << "...\n";
	theTreap.Insert( value );
	COUT << theTreap << ENDL;
	COUT << "-----------------------------------------" << ENDL;
}

int main(){
	
	// Call srand exactly once
	srand( (unsigned)time(0) ); 
	
	/* The Hash Table for the Counting Sort */
	std::vector< unsigned int > distribution( 100, 0 );
	
	// Run the test 1000 times 
	for( unsigned int iter = 0; iter < 10000; iter++ ){
		
		Treap< int > tempTreap;
		
		// Insert 100 random elements
		for( unsigned int jter = 0; jter < 100; jter++ ){
			tempTreap.Insert( rand() % 100 );
		}
		
		// Get the max height of the tree
		unsigned int tempMaxHeight = tempTreap.maxHeight();
		
		// Increment the distribution by 1
		distribution[tempMaxHeight]++;
		
	}
	
	for( unsigned int iter = 0; iter < 100; iter++ ){
		
		if( distribution.at(iter) != 0 ){

			COUT << iter << " " << distribution.at(iter) << ENDL;
		}			
	}
	
	return 0;
}