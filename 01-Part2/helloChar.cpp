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
	
	char* hello = (char *)malloc( numCharacters * sizeof(char) );
	char* reference = hello;
	
	*(hello + 0) = 72;
	*(hello + 1) = 101;
	*(hello + 2) = 108;
	*(hello + 3) = 108;
	*(hello + 4) = 111;
	*(hello + 5) = 44;
	*(hello + 6) = 32;
	*(hello + 7) = 87;
	*(hello + 8) = 111;
	*(hello + 9) = 114;
	*(hello + 10) = 108;
	*(hello + 11) = 100;
	*(hello + 12) = 10;
	
	for(long unsigned int iter = 0; iter < numCharacters; iter++){
		
		std::cout << *(reference);
		
		reference = reference + 1;
	}
	
	free( hello );

	return 0;
}
