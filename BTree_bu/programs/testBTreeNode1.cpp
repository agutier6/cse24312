#include "../classes/BTreeNode1.h"

#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl


int main(){
	
	// Establish a B-Tree Node with Order 3 
	BTreeNode< int > bTree1( 3 );
	
	// Test Copy Constructor
	BTreeNode< int > bTree2( bTree1 );
	
	// Establish a B-Tree Node with Order 5
	BTreeNode< std::string > bTree3( 5 );
	
	// Test Assignment Operator 
	BTreeNode< std::string > bTree4 = bTree3;
	
	// Test Pointer Assignment Operator 
	BTreeNode< std::string >* nodePtr = &bTree3;
	
	// Test print out results 
	COUT << "bTree1 maxDegree = " << bTree1.maxDegree << ENDL;
	COUT << "bTree2 maxDegree = " << bTree2.maxDegree << ENDL;
	COUT << "bTree3 maxDegree = " << bTree3.maxDegree << ENDL;
	COUT << "bTree4 maxDegree = " << bTree4.maxDegree << ENDL;
	COUT << "nodePtr maxDegree = " << nodePtr->maxDegree << ENDL << ENDL;
	
	// Update bTree4 
	bTree3.maxDegree = 6;
	
	// Both should now print 6
	COUT << "Updated bTree3 maxDegree = " << bTree3.maxDegree << ENDL;
	COUT << "Updated nodePtr maxDegree = " << nodePtr->maxDegree << ENDL << ENDL;
	
	// Create a new BTreeNode and set bTree3's first pointer to bTree6
	BTreeNode< std::string > bTree6( 7 );
	bTree3.childPtrs[0] = &bTree6;
	
	// Print both the bTree3's child pointer...
	COUT << "bTree3 childPtrs[0] maxDegree = " << bTree3.childPtrs[0]->maxDegree << ENDL;
	
	// ... as well as the nodePtr's child pointer. Should both print 7
	COUT << "nodePtr childPtrs[0] maxDegree = " << nodePtr->childPtrs[0]->maxDegree << ENDL << ENDL;
	
	// Update bTree6 maxDegree to 8
	bTree6.maxDegree = 8;	
	
	// Print bTree3's child pointer and nodePtr's child ptr. Should not both print 8
	COUT << "Updated bTree3 childPtrs[0] maxDegree = " << bTree3.childPtrs[0]->maxDegree << ENDL;
	COUT << "Updated nodePtr childPtrs[0] maxDegree = " << nodePtr->childPtrs[0]->maxDegree << ENDL << ENDL;
	
	// Now print the minimum degrees
	COUT << "bTree1 minDegree = " << bTree1.minDegree << ENDL;	// Should print 1
	COUT << "bTree2 minDegree = " << bTree2.minDegree << ENDL;	// Should print 1
	COUT << "bTree3 minDegree = " << bTree3.minDegree << ENDL;	// Should print 2
	COUT << "bTree4 minDegree = " << bTree4.minDegree << ENDL;	// Should print 2
	COUT << "nodePtr minDegree = " << nodePtr->minDegree << ENDL;	// Should print 2
	COUT << "bTree6 minDegree = " << bTree6.minDegree << ENDL;	// Should print 3
	COUT << "bTree3 childPtrs[0] minDegree = " << bTree3.childPtrs[0]->minDegree << ENDL;	// Should print 3
	COUT << "nodePtr childPtrs[0] minDegree = " << nodePtr->childPtrs[0]->minDegree << ENDL;	// Should print 3
	
	return 0;
}