#include "../classes/BTreeNode1.h"

#include <string>

int main(){
	
	// Establish a B-Tree Node with Order 3 
	BTreeNode< int > bTree1( 3 );
	
	// Test Copy Constructor
	BTreeNode< int > bTree2( bTree1 );
	
	// Establish a B-Tree Node with Order 5
	BTreeNode< std::string > bTree3( 5 );
	
	// Test Assignment Operator 
	BTreeNode< std::string > bTree4 = bTree3;
	
	return 0;
}