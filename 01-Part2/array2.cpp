#include <iostream>
#include <cstdlib>

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	long unsigned int numCharacters = 13;
	
	char* hello = new char[numCharacters];
	
	for(long unsigned int iter = 0; iter < numCharacters; iter++){
	
		std::cout << (void *)(hello + iter) << std::endl;
	
	}
	
	delete hello;

	return 0;
}
