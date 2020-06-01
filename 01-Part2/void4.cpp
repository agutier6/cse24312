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
	
	void* hello = malloc( numCharacters * sizeof(char) );
	void* reference = hello;
	
	*((char *)(hello + 0)) = 72;
	*((char *)(hello + 1)) = 101;
	*((char *)(hello + 2)) = 108;
	*((char *)(hello + 3)) = 108;
	*((char *)(hello + 4)) = 111;
	*((char *)(hello + 5)) = 44;
	*((char *)(hello + 6)) = 32;
	*((char *)(hello + 7)) = 87;
	*((char *)(hello + 8)) = 111;
	*((char *)(hello + 9)) = 114;
	*((char *)(hello + 10)) = 108;
	*((char *)(hello + 11)) = 100;
	*((char *)(hello + 12)) = 10;
	
	for(long unsigned int iter = 0; iter < numCharacters; iter++){
		
		std::cout << reference << " " << *((char *)(reference)) << std::endl;
		
		reference = reference + sizeof(char);
		
	}
	
	free( hello );

	return 0;
}
