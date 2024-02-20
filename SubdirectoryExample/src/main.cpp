//#include "shared/Hello.h"
#include "../model/include/oxilli.h"
#include "../include/main.h"
#include <iostream>

int main(int argc, char *argv[])
{
    COxilli oxilli;
    oxilli.print();
    oxilli.funcA();
    oxilli.funcB();
    std::cout<<"done"<<std::endl;
    return 0;
}