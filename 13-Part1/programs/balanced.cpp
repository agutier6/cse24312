#include <iostream>
#include <cstdlib>
#include <fstream>

#include "../classes/stack.h"

#define COUT std::cout
#define ENDL std::endl

void getFileStream(int argc, char** argv, std::ifstream& ifs){
	
	// Must be exactly two characters
	if(argc != 2){
		COUT << "Incorrect number of inputs" << ENDL;
		exit(-1);
	}
	
	// Attempt to open the file
	ifs.open (argv[1], std::ifstream::in);
	
	if(!ifs.is_open()){
		COUT << "Input File Name " << argv[1] << " does not exist\n";
		exit(-1);
	}
	
}

int main(int argc, char** argv){
	
	// Check the input 
	std::ifstream codeFile;
	getFileStream(argc, argv, codeFile);
	
	// Create stacks for the {, }, (, ), [, and ]
	stack< char > braceBegin;
	stack< char > braceEnd;
	stack< char > bracketBegin;
	stack< char > bracketEnd;
	stack< char > parenBegin;
	stack< char > parenEnd;
	
	// Read in the code information information 
	while( !codeFile.eof() ){
		
		char currChar;		
		codeFile >> currChar;
		
		// Use a switch statement
		// chars are unsigned ints -> deterministic 
		// switches can be implemented using 
		
	}
	

	COUT << "Finding Imbalances..." << ENDL;
	if(braceBegin.size() != braceEnd.size()){
		
		COUT << "Unbalanced Braces {}" << ENDL;
		COUT << braceBegin.size() << " " << braceEnd.size() << ENDL;
	}

	if(bracketBegin.size() != bracketEnd.size()){
		
		COUT << "Unbalanced Brackets []" << ENDL;
		COUT << bracketBegin.size() << " " << bracketEnd.size() << ENDL;
	}
	
	if(parenBegin.size() != parenEnd.size()){
		
		COUT << "Unbalanced Parenthesis ()" << ENDL;
		
	}

	// Close the codefile
	codeFile.close();
	
}