/*************************************
 * File name: maxMinStack.cpp 
 * Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * 
 * Given a set of inputs from the user, demonstrates
 * min, max, and stack operations 
 * ***********************************/

#include <iostream>
#include <cstdlib>
#include "../classes/maxMinStack.h"

#define COUT std::cout
#define CERR std::cerr
#define CIN std::cin
#define ENDL std::endl

/******************************
 * Function Name: getInputs
 * Preconditions: none 
 * Postconditions: none
 * 
 * Clears the std::cin buffer in the event 
 * that the user wishes to after an error.
 * ****************************/
void getInputs(unsigned int& stack_size, unsigned int& val_max){

    COUT << "Enter the values as [size] [range]: ";

    if(!(CIN >> stack_size)){
		CERR << "Input " << stack_size << " is incorrect. Must be an integer." << ENDL;
		exit(-1);
	}
    
    if(!(CIN >> val_max)){
		CERR << "Input " << val_max << " is incorrect. Must be an integer." << ENDL;
		exit(-1);
	}
	
 }

int main()
{  
	// Initialize variables
	unsigned int stack_size, val_max;
	maxMinStack<int> the_stack;
	
	// Get the yser inputs
	getInputs(stack_size, val_max);
	
	// Seed the random number generator
	srand( (unsigned int)time(NULL) );
	
	// Push random elements onto the stack for testing the solution
	COUT << "Elements pushed on the stack: ";
	for(unsigned int i = 0; i < stack_size; i++){
		the_stack.push(rand() % val_max);
	}
	COUT << ENDL;
	
	// Print the size of the data, max, and min stacks
	COUT	<< "size = " << the_stack.data_size 
			<< ", max_size = " << the_stack.max_size
			<< ", min_size = " << the_stack.min_size << ENDL;
	
	// Iterate until done
	COUT << "\nTop\tMax\tMin\t" << ENDL;
	for(unsigned int i = 0; i < stack_size; i++){
		
		// Print the top, max, and min
		COUT << the_stack.top() << '\t';
		COUT << the_stack.max() << '\t';
		COUT << the_stack.min() << ENDL;
		
		// Remove the top of the appropriate stacks
		the_stack.pop();
	}

    return 0;
}
