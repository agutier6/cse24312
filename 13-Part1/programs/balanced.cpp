#include <iostream>
#include <stack>
#include <cstdlib>
#include <fstream>

void getFileStream(int argc, char** argv, std::ifstream& ifs){
	
	// Must be exactly two characters
	if(argc != 2){
		std::cout << "Incorrect number of inputs" << std::endl;
		exit(-1);
	}
	
	// Attempt to open the file
	ifs.open (argv[1], std::ifstream::in);
	
	if(!ifs.is_open()){
		std::cout << "Input File Name " << argv[1] << " does not exist\n";
		exit(-1);
	}
	
}

int main(int argc, char** argv){
	
	// Check the input 
	std::ifstream codeFile;
	getFileStream(argc, argv, codeFile);
	
	// Student Code Goes Here
	
	// Read in the code information information 
	while( !codeFile.eof() ){
		
		char currChar;		
		codeFile >> currChar;
		
		// Student Code Goes Here
		
	}
	

	std::cout << "Finding Imbalances..." << std::endl;
	if(braceBegin.size() != braceEnd.size()){
		
		std::cout << "Unbalanced Braces {}" << std::endl;
		std::cout << braceBegin.size() << " " << braceEnd.size() << std::endl;
	}

	if(bracketBegin.size() != bracketEnd.size()){
		
		std::cout << "Unbalanced Brackets []" << std::endl;
		std::cout << bracketBegin.size() << " " << bracketEnd.size() << std::endl;
	}
	
	if(parenBegin.size() != parenEnd.size()){
		
		std::cout << "Unbalanced Parenthesis ()" << std::endl;
		
	}

	// Close the codefile
	codeFile.close();
	
}