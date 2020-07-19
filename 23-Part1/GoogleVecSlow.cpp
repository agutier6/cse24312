/**********************************************
* File: GoogleVecSlow.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a solution to the Google License Interview question 
* using std::vector to store the dictionary words
* 
* Compilation command: g++ -g -std=c++11 -Wpedantic GoogleVecSlow.cpp -o GoogleVecSlow
* Run: ./GoogleVecSlow [DictionaryFile] [License]
* Example: ./GoogleVecSlow words.txt RT011OS
* License Plate Characters: RT011OS
* S 1
* O 1
* T 1
* R 1
* Shortest Word in Dictionary with characters in words.txt is ORTS
**********************************************/
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <string>
#include <iterator>

struct CharVal{
	
	char compChar;
	int numVals;
	
	CharVal(char compChar, int numVals) : compChar(compChar), numVals(numVals){}
	
};

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
* Pre-conditions : std::ifstream& dictionaryFile, std::vector< std::string >& dictionaryVec
* Post-conditions: none
*  
* This function reads all the dictionary words, and stores them in a STL Vec 
********************************************/
void getDictionaryWords(std::ifstream& dictionaryFile, std::vector< std::string >& dictionaryVec){
	// Get the strings and put in the Forward List
	std::string wordIn;
	while (dictionaryFile >> wordIn)
	{
		dictionaryVec.push_back(wordIn);
	}
}

/********************************************
* Function Name  : VecLicense
* Pre-conditions : std::vector< int >& VecPlate, char* plate
* Post-conditions: none
* 
* Stores the value of the hash values in the HashMap  
********************************************/
void VecLicense(std::vector< CharVal >& VecPlate, char* plate){

	for(int i = 0; plate[i] != '\0'; i++){
		
		// Assume ASCII and all uppercase letters -> 65-90
		if((int)plate[i] >= 65 && (int)plate[i] <= 90){
		
			int vter = 0;	int boolFound = false;

			for(vter; vter < VecPlate.size(); vter++){
						
				if(VecPlate.at(vter).compChar == plate[i] ){
					boolFound = true;
					VecPlate.at(vter).numVals++;
				}
			
			}
			
			if(!boolFound){
				CharVal tempChar(plate[i], 1);
				VecPlate.push_back(tempChar);
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
void VecWord(std::vector< CharVal >& VecPlate, std::string currWord, std::string& finalWord){
	
	// Create a temporary Hash for the current work 
	std::vector< CharVal > VecWord;
	
	for(int i = 0; currWord[i] != '\0'; i++){
		
		// Assume ASCII and all uppercase letters -> 65-90
		if((int)currWord[i] >= 65 && (int)currWord[i] <= 90){
		
			int vter = 0;	int boolFound = false;

			for(vter; vter < VecWord.size(); vter++){
						
				if(VecWord.at(vter).compChar == currWord[i] ){
					boolFound = true;
					VecWord.at(vter).numVals++;
				}
			
			}
			
			if(!boolFound){
				CharVal tempChar(currWord[i], 1);
				VecWord.push_back(tempChar);
			}
		}
	}
		
	// Now, go through each character in VecPlate 
	for(int iter = 0; iter < VecPlate.size(); iter++){

		bool currChar = false;

		// Now, go through each character in VecWord 
		for(int jter = 0; jter < VecWord.size(); jter++){
						
			// If they are the same, perform the comparison
			if(VecPlate.at(iter).compChar == VecWord.at(jter).compChar){
				
				if(VecWord.at(jter).numVals < VecPlate.at(iter).numVals){
					
					return;
				}
				
				currChar = true;
			}
		}
		
		if(!currChar)
			return;
	}
	
	// Went through all the characters in VecPlate and they were found in 
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
	
	// Create a Vec of dictionary words 
	std::vector< std::string > dictionaryVec;
	
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

	// Get the strings and put in the Vec
	getDictionaryWords(dictionaryFile, dictionaryVec); 

	// Close the ifstream
	dictionaryFile.close();
	
	// Get the values for the License Plate
	std::vector< CharVal > VecPlate;
	
	// Vector the values of the characters in the license plate  
	VecLicense(VecPlate, argv[2]);

	// Set the string where the final word (solution) will be stored
	std::string finalWord;
	
	// Iterate through each word in the dictionary 	
	for(auto &currWord : dictionaryVec){
		
		// Do not hash currWord if final Word is the same length - Save run time 
		// Must also account for if no word is found yet (finalWord.length() > 0)
		if(currWord.length() < finalWord.length() || finalWord.length() == 0){
			
			// Check the word, and update final word if it qualifies
			VecWord(VecPlate, currWord, finalWord);
		}
	}
	
	// Print the result to the user 
	std::cout << "Shortest Word in Dictionary with characters in " 
		<< argv[1] << " is " << finalWord << std::endl;

	return 0;

}

