
# Build Instruction
Go to the project dir  
> mkdir build  
> cd build  
> cmake -G "MinGW Makefiles" ..  
> make -j 
  
# Project Introduction
## SimpleExample
A simple test to verify the compiler works as intended

## HeaderExample
Demonstrate c++ struction: cpp and h files  


## StaticLibraryExample
Static Library example
会在build/生成hello_binary.exe和libhello_library.dll  
exe需要跟dll放在同一个folder才能运行，否则会出错：  
"The code execution can not proceed because libhello_library.dll was not found. Reinstalling the program may fix this problem."  
如果把target_link_libraries()去掉，hi.print()这一行会在make的时候报错，错误信息如下：  
undefined reference to '__imp__ZN5Hello5printEv'  
collect2.exe: error: ld returned 1 exit status  

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

### Clean Function Name
> nm xxx.dll

will get the list of function names  
to make the function name clean, use this to include all functions:  
```
extern "C"{
}
```

# MISC
can use readelf to get information of a binary file  
https://www.geeksforgeeks.org/readelf-command-in-linux-with-examples/  


