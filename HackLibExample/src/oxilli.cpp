#include <iostream>

#include "../include/oxilli.h"


void COxilli::print()
{
	std::cout << "Call print: Oxilli Shared Library!(Hacked)" << std::endl;
	//getchar();
}

void COxilli::funcA(){
	std::cout << "Call function A!(Hacked)" << std::endl;
}

void COxilli::funcB(){
 	std::cout << "Call function B!(Hacked)" << std::endl;
}

void COxilli::funcC(){
 	std::cout << "Call function B!(Extra)" << std::endl;
}