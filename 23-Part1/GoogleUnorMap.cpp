/**********************************************
* File: GoogleUnorMap.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a solution to the Google License Interview question 
* using std::unordered_map to store the dictionary words 
* 
* Compilation command: g++ -g -std=c++11 -Wpedantic GoogleUnorMap.cpp -o GoogleUnorMap
* Run: ./GoogleUnorMap [DictionaryFile] [License]
* Example: ./GoogleUnorMap words.txt RT011OS
* License Plate Characters: RT011OS
* S 1
* O 1
* T 1
* R 1
* Shortest Word in Dictionary with characters in words.txt is TROS
**********************************************/
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <iterator>

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
* Pre-conditions : std::ifstream& dictionaryFile, std::unordered_map< std::string, bool >& dictionaryMap
* Post-conditions: none
*  
* This function reads all the dictionary words, and stores them in a STL Singly Linked Hash Table 
********************************************/
void getDictionaryWords(std::ifstream& dictionaryFile, std::unordered_map< std::string, bool >& dictionaryMap){
	// Get the strings and put in the Forward Hash Table
	std::string wordIn;
	while (dictionaryFile >> wordIn)
	{
		dictionaryMap.insert( {wordIn, true} );
	}
}

/********************************************
* Function Name  : HashLicense
* Pre-conditions : std::unordered_map< char, int >& HashPlate, char* plate
* Post-conditions: none
* 
* Stores the value of the hash values in the HashMap  
********************************************/
void HashLicense(std::unordered_map< char, int >& HashPlate, char* plate){
	
	for(int i = 0; plate[i] != '\0'; i++){
		
		// Assume ASCII and all uppercase letters -> 65-90
		if((int)plate[i] >= 65 && (int)plate[i] <= 90){
		
			if(HashPlate.count(plate[i]) == 0){
				
				// Put the word in, and set the count to 1
				HashPlate.insert( {plate[i], 1} );
			}
			else{
				// Increment the count 
				HashPlate[plate[i]]++;
			}
		}
	}
}

/********************************************
* Function Name  : HashWord
* Pre-conditions : std::unordered_map< char, int >& HashPlate, std::string currWord, std::string& finalWord
* Post-conditions: none
*  
********************************************/
void HashWord(std::unordered_map< char, int >& HashPlate, std::string currWord, std::string& finalWord){
	
	// Create a temporary Hash for the current work 
	std::unordered_map< char, int > HashWord;
	
	for(int iter = 0; iter < currWord.length(); iter++){
		
		// words.txt contains all uppercase, but some words may contain numbers 
		if((int)currWord[iter] >= 65 && (int)currWord[iter] <= 90){
			
			if(HashWord.count(currWord[iter]) == 0){
				
				// Put the word in, and set the count to 1
				HashWord.insert( {currWord[iter], 1} );
			}
			else{
				// Increment the count 
				HashWord[currWord[iter]]++;
			} 
			
		}
	}
	
	// Now, go through each character in HashPlate 
	for(std::unordered_map<char, int>::iterator iter = HashPlate.begin(); iter != HashPlate.end(); iter++){
		// if the value in the HashWord is less than HashPlate, 
		// then the # of that character in the word is less than the license plate
		// which means it cannot be a valid choice. Return.
		if(HashWord[iter->first] < iter->second){
			return;
		}
	}
	
	// Went through all the characters in HashPlate and they were found in 
	// the current word. Therefore, currWord is the current solution 
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
	
	// Create a Hash Table of dictionary words 
	std::unordered_map< std::string, bool > dictionaryMap;
	
	// Get the inputstream
	std::ifstream dictionaryFile;
	if(argc == 3){
		getAndCheckFile(dictionaryFile, argv[1]);
	}
	else{
		std::cout << "Number of inputs are wrong" << std::endl;
		std::cout << "./GoogleForwHash Table [DictionaryFile] [License]" << std::endl;
		exit(-1);
	}

	// Get the strings and put in the Forward Hash Table
	getDictionaryWords(dictionaryFile, dictionaryMap);

	// Close the ifstream
	dictionaryFile.close();
	
	// Get and Hash License Plate
	std::unordered_map< char, int > HashPlate;
	
	// Hash the values of the characters in the license plate  
	HashLicense(HashPlate, argv[2]);

	// Set the string where the final word (solution) will be stored
	std::string finalWord;
	
	// Iterate through each word in the dictionary in the unordered_map  
	for(std::unordered_map<std::string, bool>::iterator iter = dictionaryMap.begin(); iter != dictionaryMap.end(); iter++){
		// Check the word, and update final word if it qualifies
		// Do not hash currWord if final Word is the same length - Save run time 
		// Must also account for if no word is found yet (finalWord.length() > 0)
		if(iter->first.length() < finalWord.length() || finalWord.length() == 0)
			HashWord(HashPlate, iter->first, finalWord);
	}
	
	// Print the result to the user 
	std::cout << "Shortest Word in Dictionary with characters in " 
		<< argv[1] << " is " << finalWord << std::endl;

	return 0;

}

