#include <iostream>

#include "../include/Hello.h"


void Hello::print()
{
	std::cout << "Hello Shared Library!" << std::endl;
	getchar();
}
