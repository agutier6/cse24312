#include "../classes/TrieNode.h"

#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

void addString( TrieNode* theNode, const std::string& word, unsigned int value ){
	
	if( value < word.size() ){
		
		theNode->addChild( word[value] );
		
		TrieNode* nextLevel = theNode->getChildPtr( word[value] );
		
		addString( nextLevel, word, value + 1);
	}
	
	else if( value == word.size() ){
		
		theNode->addChild( '*' );
		
		return;
	}
	
}


void printTriePreOrder( TrieNode* theNode, unsigned int level ){
	
	if( theNode == NULL ){
		
		return;
		
	}
	
	// Root Node 
	if( theNode->getLetter() == 0 ){
		
		COUT << "root: " << level << ENDL;
		
	}
	
	else{
		
		COUT << theNode->getLetter() << " " << level << ENDL;
		
	}
	
	if( theNode->getLetter() == '*' ){
		
		return;
		
	}
	
	// If we get here, there are children 
	for(unsigned int iter = 0; iter < theNode->numChildren(); iter++){
	
		printTriePreOrder(theNode->getChildPtrOrder(iter), level + 1);
		
	}
	
}

int main(){
	
	STRING CAN("CAN");
	STRING CANDY("CANDY");
	STRING COUNT("COUNT");
	STRING COULD("COULD");
	STRING FIT("FIT");
	STRING FAST("FAST");
	STRING FASTER("FASTER");
	STRING FAT("FAT");
	STRING FOX("FOX");
	STRING FOUND("FOUND");
	
	// Create a root TrieNode
	TrieNode* root = new TrieNode();

	// Add the strings 
	addString(root, FOUND, 0);
	addString(root, COUNT, 0);
	addString(root, FIT, 0);	
	addString(root, CAN, 0);
	addString(root, FASTER, 0);
	addString(root, CANDY, 0);
	addString(root, FAST, 0);
	addString(root, COULD, 0);
	addString(root, FOX, 0);
	addString(root, FAT, 0);
		
	printTriePreOrder(root, 1);
	
	COUT << ENDL; 
	
	return 0;
}