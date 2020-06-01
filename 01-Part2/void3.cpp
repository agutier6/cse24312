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
	
	*((char *)(reference)) = 72;
	reference = reference + sizeof(char);
	*((char *)(reference)) = 101;
	
	std::cout << &hello << " " << hello << " " << *((char *)(hello)) <<std::endl;
	std::cout << &reference << " " << reference << " " << *((char *)(reference)) << std::endl;
	
	free( hello );

	return 0;
}
