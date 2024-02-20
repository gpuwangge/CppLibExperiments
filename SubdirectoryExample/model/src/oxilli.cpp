#include <iostream>

#include "../include/oxilli.h"


void COxilli::print()
{
	std::cout << "Oxilli Shared Library!" << std::endl;
	
	//getchar();
}
void COxilli::funcA(){
	std::cout << "Call function A!" << std::endl;
}

void COxilli::funcB(){
 	std::cout << "Call function B!" << std::endl;
}