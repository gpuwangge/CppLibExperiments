
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
Call three functions:  
```
oxilli.print();
oxilli.funcA();
oxilli.funcB();
```


## HackLibExample  
An example that build a shared library that can replace the model-library for SubdirectoryExample.  
Runing SubdirectoryExample with the hacked lib will print hack information.  
Implement four functions(Hacked version):  
```
oxilli.print();
oxilli.funcA();
oxilli.funcB();
oxilli.funcC();
```
It doesn't matter hacked lib has extra function (funcC)  
But hacked lib must implement all original functions (print, funcA, funcB)



