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
	char* reference = hello;
	
	*(reference) = 'H';
	reference = reference + 1;
	*((char *)(reference)) = 'e';
	
	std::cout << &hello << " " << (void *)hello << " " << hello[0] << std::endl;
	std::cout << &reference << " " << (void *)reference << " " << *(reference) << std::endl;
	
	delete hello;

	return 0;
}
