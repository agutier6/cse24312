// Modification - Cannot insert in a non-leaf. Must traverse down

#ifndef BTREE6_H
#define BTREE6_H 

#include <cstdlib>
#include <iostream>
#include "BTreeNode2.h"

#define COUT std::cout
#define ENDL std::endl

template< class T >
class BTree{
	
	private:
	
		unsigned int maxDegree;
		BTreeNode<T> *root;
		
		// Merge the mergeIn with the node toMerge
		void mergeNodes( BTreeNode<T>*& toMerge, BTreeNode<T>* mergeIn, unsigned int iter, bool& didSplit ){
			
			// Simplest merge - At the end and not full
			if( iter == toMerge->count && toMerge->count != maxDegree - 1 ){
				
				toMerge->values[iter] = mergeIn->values[0];
				toMerge->count++;
				toMerge->childPtrs[iter] = mergeIn->childPtrs[0];
				toMerge->childPtrs[iter+1] = mergeIn->childPtrs[1];
				
				didSplit = false;
			}

			// First, let's consider the case where the node is not full and not at the end			
			// In this case, we need to move the values and pointers in toMerge over by 1
			else if( iter != toMerge->count && toMerge->count != maxDegree - 1 ){
				
				for( unsigned int jter = toMerge->maxDegree - 1; jter > iter; jter--){
					
					toMerge->values[jter] = toMerge->values[jter - 1];
					toMerge->childPtrs[jter] = toMerge->childPtrs[jter - 1];
				}
				
				toMerge->values[iter] = mergeIn->values[0];
				toMerge->childPtrs[iter] = mergeIn->childPtrs[0];
				toMerge->childPtrs[iter+1] = mergeIn->childPtrs[1];
				toMerge->count++;

				didSplit = false;
			}
			else{
				


			}

		}
		
		// Splits the node, and currPtr->values[0] will contain the 
		// median value of all the values and the element
		void splitNode( BTreeNode<T>*& currPtr, const T& element ){
			
			std::cout << "Help!" << std::endl;
						
			// Create the split left node, split right node, and node to rise up
			BTreeNode<T>* left = new BTreeNode<T>( currPtr->maxDegree );
			BTreeNode<T>* right = new BTreeNode<T>( currPtr->maxDegree );
			BTreeNode<T>* riseUp = new BTreeNode<T>( currPtr->maxDegree );
			
			// Make left and right the children of riseUp 
			riseUp->childPtrs[0] = left;
			riseUp->childPtrs[1] = right;
			
			// If the currPtr is a leaf, then left and right will be leaves 
			if( currPtr->isLeaf ){
				left->isLeaf = true;
				right->isLeaf = true;
			}
			
			// Otherwise, they will not be leaves 
			else{
				left->isLeaf = false;
				right->isLeaf = false;					
			}
			
			// The node to be risen is not a leaf
			riseUp->isLeaf = false;
			
			// Put in the left elements 
			unsigned int origIter = 0;
			unsigned int destIter = 0;
			
			// Fill in the left node
			while( destIter < currPtr->minDegree ){
				
				if( element > currPtr->values[ origIter ] || origIter != destIter ){
		
					left->values[destIter] = currPtr->values[ origIter ];
					left->childPtrs[destIter++] = currPtr->childPtrs[ origIter++ ];
					
				}
				
				else if( element <= currPtr->values[ origIter ] && origIter == destIter ){
					left->values[destIter++] = element;
				}
				
				left->count++;
			}
			
			// Determine the middle element 
			if( origIter == destIter && currPtr->values[ origIter ] <= element ){
				
				riseUp->values[0] = currPtr->values[ origIter++ ];
			}
			else if( origIter < destIter ){
				
				riseUp->values[0] = currPtr->values[ origIter++ ];
			}
			else{
				
				riseUp->values[0] = element;
			}
			
			riseUp->count++;

			
			// Fill in the right node
			// One of two cases
			// Case 1 - We already inserted the element, which means origIter == destIter
			if( origIter == destIter ){
			
				// We only want to insert the remainder
				destIter = 0;
				while( origIter < currPtr->maxDegree - 1 ){
					
					right->values[destIter] = currPtr->values[ origIter ];	
					right->childPtrs[destIter++] = currPtr->childPtrs[ origIter++ ];						
					right->count++;
				}
				
			}
			
			// Case 2 - We have not inserted the element
			else{
				destIter = 0;
				bool found = false;
				while( origIter < currPtr->maxDegree - 1 ){	

					if( currPtr->values[ origIter ] < element || found ){
						
						right->values[destIter] = currPtr->values[ origIter ];	
						right->childPtrs[destIter++] = currPtr->childPtrs[ origIter++ ];						
					}
					else if( currPtr->values[ origIter ] >= element && !found ){
						
						right->values[destIter++] = element;
						found = true;
					}
					
					right->count++;	
				}
				
				// If destIter is not equal to min degree, then the element is the last value
				
				if( !found ){
					right->values[destIter] = element;					
					right->count++;	
				}
			}
			
			// Set the currPtr called by reference equal to riseUp
			currPtr = riseUp;			
			
		}
		
		void insert( BTreeNode<T>*& currPtr, const T& element, bool& didSplit ){
			
			// Step 1 - Allocate a BTreeNode if the node is empty
			if( currPtr == NULL ){
				
				// Allocate the node
				currPtr = new BTreeNode<T>( maxDegree );
				
				// Set the node as a leaf 
				currPtr->isLeaf = true;
				
				// Set the first value to the element
				currPtr->values[0] = element;	
				
				// Increment the count
				currPtr->count++;
				
				// Set did split to false 
				didSplit = false;
				
				return;
			}
			
			// Modification 1 - Surround this statement with if currPtr is a leaf
			if( currPtr->isLeaf ){
				
				// Step 2 - If the node is not empty, but is not full, insert in order 
				if( currPtr->count < maxDegree - 1){
					
					// First, find the location
					unsigned int iter = 0;
					while( element > currPtr->values[iter] && iter < currPtr->count ){
						iter++;
					}
					
					// Every value after iter should move to the right to the right 
					for(unsigned int jter = currPtr->count; jter > iter; jter--){
						currPtr->values[ jter ] = currPtr->values[ jter - 1 ];
					}
					
					// Set the iter value equal to element 
					currPtr->values[ iter ] = element;
					
					// Increment the count
					currPtr->count++;
				
				}
				
				// Step 3 - If full, we must split the nodes 
				else{
					
					// Split the Node 
					splitNode( currPtr, element );
					
					// Set did split to true 
					didSplit = true;
					
					// We have to merge at the next level, so we return
					return;
				}
			}
			// Modification 2 - Find the correct node to traverse if not a leaf
			else{
				
					// First, find the location
					unsigned int iter = 0;
					while( element > currPtr->values[iter] && iter < currPtr->count ){
						iter++;
					}

					// Iter now gives the correct child pointer
					insert( currPtr->childPtrs[iter], element, didSplit );
					
					// Now we need to check if the node was split 
					if( didSplit ){
											
						didSplit = false;
						mergeNodes( currPtr, currPtr->childPtrs[iter], iter, didSplit );
						
					}
				
			}
			
		}
		
		// Traverse the Tree
		void traversal(BTreeNode<T>* printNode, unsigned int level) {

			if (printNode != NULL) {
				
				unsigned int iter;
				
				for (iter = 0; iter < printNode->count; iter++) {
					
					traversal(printNode->childPtrs[iter], level + 1);
					
					std::cout<< "{Level " << level << ", " << printNode->values[iter] << "} ";
					
				}
				
				// Traverse the last pointer
				traversal(printNode->childPtrs[iter], level + 1);
			}
		}
		
	
	public:
	
		BTree( unsigned int maxDegreeIn ) : maxDegree( maxDegreeIn ), root( NULL ) {}
		
		void insert( const T& element ){

			bool didSplit = false;
			insert( root, element, didSplit );
			
		}
		
		void traversal(){
			
			traversal( root, 1 );
			
			COUT << ENDL;
		}
};

#endif