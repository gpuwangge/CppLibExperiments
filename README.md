
# Build Instruction
Goes to the project dir  
> mkdir build  
> cd build  
> cmake -G "MinGW Makefiles" ..  
> make  
  
# Project Introduction
## SimpleExample
A simple test to verify the compiler works as intended

## HeaderExample
Demonstrate c++ struction: cpp and h files  


## StaticLibraryExample
Static Library example


## SharedLibraryExample
Dynamic Library example


## SubdirectoryExample
Create sub directory from the main directory.  
The sub directory works as a separate shared library.  

## HackLibExample  
An example that build a shared library that can replace the model-library for SubdirectoryExample.  
Runing SubdirectoryExample with the hacked lib will print hack information.  




