/**********************************************
* File: factHeaderEx.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* using header files to simplify and re-use code 
**********************************************/

#include "factorial.h"

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	/* Declare variables */
	int resultInt;
	float resultFloat;
	double resultDouble;
	
	resultInt = factInt(MAX_INT_FACT);
	if(resultInt != -1){
		std::cout << MAX_INT_FACT << "! = " << resultInt << "\n";
	}
	
	resultInt = factInt(MAX_INT_FACT + 1);
	
	resultFloat = factFloat(MAX_FLOAT_FACT);
	if(resultFloat != -1){
		std::cout << MAX_FLOAT_FACT << "! = " << resultFloat << "\n";
	}
	
	resultFloat = factFloat(MAX_FLOAT_FACT + 1);
	
	resultDouble = factDouble(MAX_DOUBLE_FACT);
	if(resultDouble != -1){
		std::cout << MAX_DOUBLE_FACT << "! = " << resultDouble << "\n";
	}
	
	resultDouble = factDouble(MAX_DOUBLE_FACT + 1);
	

	return 0;
}
