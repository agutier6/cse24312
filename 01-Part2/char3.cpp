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
	
	*(reference) = 'H';
	reference = reference + 1;
	*((char *)(reference)) = 'e';
	
	std::cout << &hello << " " << (void *)hello << " " << *(hello) << std::endl;
	std::cout << &reference << " " << (void *)reference << " " << *(reference) << std::endl;
	
	free( hello );

	return 0;
}
