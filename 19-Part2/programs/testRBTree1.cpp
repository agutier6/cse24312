// Test the Copy, Assignment Operator, and Delete 

#include "../classes/RBTree1.h"

int main(){
	
	// Create a 
	RBTree<int> tree1;
	
	// Test the Assignment Operator 
	RBTree<int> tree2 = tree1;
	
	// Test the Copy Constructor
	RBTree<int> tree3(tree1);	
	
	return 0;
}