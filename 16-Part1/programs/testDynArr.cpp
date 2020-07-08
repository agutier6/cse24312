#include "../classes/DynArr.h"

#include <iostream>

int main(){

	DynArr<int> testArr;

	testArr.push_back( 5);
	testArr.push_back( 6);
	
	std::cout << testArr[0] << std::endl;
	std::cout << testArr[1] << std::endl;

	testArr.erase( 0 );

	std::cout << testArr[0] << std::endl;

	return 0;

}
