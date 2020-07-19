/**********************************************
* File: GoogleBas.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a solution to the Google License Interview question 
* using std::list to store the dictionary words
* 
* Compilation command: g++ -g -std=c++11 -Wpedantic GoogleBad.cpp -o GoogleBad
* Run: ./GoogleList [DictionaryFile] [License]
* Example: ./GoogleForwList words.txt RT011OS
* License Plate Characters: RT011OS
* S 1
* O 1
* T 1
* R 1
* Shortest Word in Dictionary with characters in words.txt is TROS
*
**********************************************/
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>
#include <iterator>
#include <cstdlib>

/********************************************
* Function Name  : getAndCheckFile
* Pre-conditions : std::ifstream& fileStream, std::string fileName
* Post-conditions: none
* 
* Verifies a valid file and returns an input stream
********************************************/
void getAndCheckFile(std::ifstream& fileStream, std::string fileName){
	
	fileStream.open(fileName);
	
	if(!fileStream.is_open()){
		
		std::cout << "The file " << fileName << " does not exist. Exiting Program..." << std::endl;
		exit(-1);
		
	}
	
}

/********************************************
* Function Name  : getDictionaryWords
* Pre-conditions : std::ifstream& dictionaryFile, std::list< std::string >& dictionaryList
* Post-conditions: none
*  
* This function reads all the dictionary words, and stores them in a STL Doubly Linked List 
********************************************/
void getDictionaryWords(std::ifstream& dictionaryFile, std::list< std::string >& dictionaryList){
	// Get the strings and put in the List
	std::string wordIn;
	while (dictionaryFile >> wordIn)
	{
		dictionaryList.push_back(wordIn);
	}
}

/********************************************
* Function Name  : VecLicense
* Pre-conditions : std::vector< int >& VecPlate, char* plate
* Post-conditions: none
* 
* Stores the value of the hash values in the HashMap  
********************************************/
void VecLicense(std::vector< int >& VecPlate, char* plate){
	
	/*for(int i = 0; i < 26; i++){
		VecPlate.at(i) = 0; 
	}*/
	
	for(int i = 0; plate[i] != '\0'; i++){
		
		// Assume ASCII and all uppercase letters -> 65-90
		if((int)plate[i] >= 65 && (int)plate[i] <= 90){
		
			VecPlate.at((int)plate[i] - 65)++;
			
		}
	}
}

/********************************************
* Function Name  : VecWord
* Pre-conditions : std::vector< char >& VecPlate, std::string currWord, std::string& finalWord
* Post-conditions: none 
*  
********************************************/
void VecWord(std::vector< int >& VecPlate, std::string currWord, std::string& finalWord){
	
	std::vector< int > VecWord(26);
	
	for(int iter = 0; iter < currWord.size(); iter++){
			
		// words.txt contains all uppercase, but some words may contain numbers 
		if((int)currWord[iter] >= 65 && (int)currWord[iter] <= 90){
				
			VecWord.at((int)currWord[iter] - 65)++;
				
		}
	}
	
	for(int iter = 0; iter < 26; iter++){
		
		if( VecPlate.at(iter) > VecWord.at(iter) )
			return;
	}
	
	finalWord = currWord;
}

/********************************************
* Function Name  : main
* Pre-conditions : int argc, char** argv
* Post-conditions: int
*
* Main driver function for the program  
********************************************/
int main(int argc, char** argv){
	
	// Create a Doubly Linked list of dictionary words 
	std::list< std::string > dictionaryList;
	
	// Get the inputstream
	std::ifstream dictionaryFile;
	if(argc == 3){
		getAndCheckFile(dictionaryFile, argv[1]);
	}
	else{
		std::cout << "Number of inputs are wrong" << std::endl;
		std::cout << "./GoogleForwList [DictionaryFile] [License]" << std::endl;
		exit(-1);
	}

	// Get the strings and put in the List
	getDictionaryWords(dictionaryFile, dictionaryList);

	// Close the ifstream
	dictionaryFile.close();
	
	// License Plate
	std::vector< int > VecPlate(26);
	
	// Hash the values of the characters in the license plate  
	VecLicense(VecPlate, argv[2]);

	// Set the string where the final word (solution) will be stored
	std::string finalWord;
	
	// Iterate through each word in the dictionary 
	for(auto &currWord : dictionaryList){
		
		// Check the word, and update final word if it qualifies
		// Do not hash currWord if final Word is the same length - Save run time 
		// Must also account for if no word is found yet (finalWord.length() > 0)
		if(currWord.length() < finalWord.length() || finalWord.length() == 0)
			VecWord(VecPlate, currWord, finalWord);
	}
	
	// Print the result to the user 
	std::cout << "Shortest Word in Dictionary with characters in " 
		<< argv[1] << " is " << finalWord << std::endl;

	return 0;

}