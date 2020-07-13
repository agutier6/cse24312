#ifndef BTREENODE1_H
#define BTREENODE1_H

#include <cstdlib>
#include <iostream>

template< class T>
struct BTreeNode {
	
	// Members
	unsigned int maxDegree;		// The maximum degree of the BTree
	T *values;					// The data itself
	BTreeNode<T> **childPtrs;	// Pointers to the children
	bool isLeaf;				// Indicates if the node is a leaf
	unsigned int count;			// Current number of values
	unsigned int minDegree;		// Minimum Degree

	// Constructor
	BTreeNode( unsigned int maxDegreeIn ) : maxDegree( maxDegreeIn ), values( new T[maxDegree] ), 
		childPtrs( new BTreeNode<T>*[maxDegree + 1] ), isLeaf(true), count( 0 ), 
		minDegree( (maxDegree % 2 == 1 ) ? maxDegree/2 : maxDegree/2 - 1 ){
			
			setAllChildNull();
			
		}
	
	// Destructor
	~BTreeNode(){ }
	
	// Copy Constructor
	BTreeNode( const BTreeNode<T>& copy ) : maxDegree( copy.maxDegree ), values( new T[maxDegree] ), 
		childPtrs( new BTreeNode<T>*[maxDegree + 1] ), isLeaf( copy.isLeaf ), count( copy.count ),
		minDegree( copy.minDegree ){
		
		for( unsigned int iter = 0; iter < count; iter++ ){
			
			values[iter] = copy.values[iter];
			
		}
		
		// Initialize all the children to NULL
		setAllChildNull();
	}
	
	// Assignment Operator
	BTreeNode<T>& operator=( const BTreeNode<T>& rhs ){
		
		if( this != &rhs ){
			
			// Set the maxDegree to the rhs
			this->maxDegree = rhs.maxDegree;
			
			// Create the array for values
			this->values = new T[ this->maxDegree ];
			
			// Create new child Pointers
			this->childPtrs = new BTreeNode<T>*[ this->maxDegree + 1 ];
			
			// Set the boolean for if the node is a leaf
			this->isLeaf = rhs.isLeaf;
			
			// Set the current number of elements in the array
			this->count = rhs.count;
			
			// Copy the values in the rhs array
			for( unsigned int iter = 0; iter < this->count; iter++ ){
				
				this->values[iter] = rhs.values[iter];
				
			}
			
			// Initialize all the children to NULL
			this->setAllChildNull();
		}
		
		return *this;
	}
	

	// Assignment Operator
	BTreeNode<T>* operator=( const BTreeNode<T>* rhs ){
		
		this = (void *)&rhs;

		return *this;
	}
	
	// Set all the child pointers to NULL 
	void setAllChildNull(){
		
		for (unsigned int iter = 0; iter < maxDegree + 1; iter++) {
			
			childPtrs[iter] = NULL;
		}
	}
  
};


#endif