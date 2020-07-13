#ifndef BTREE1_H
#define BTREE1_H 

#include <cstdlib>
#include <iostream>
#include "BTreeNode2.h"

template< class T >
class BTree{
	
	private:
	
		unsigned int maxDegree;
		BTreeNode<T> *root;
		
	
	public:
	
		BTree( unsigned int maxDegreeIn ) : maxDegree( maxDegreeIn ), root( NULL ) {}
		
		
};

#endif