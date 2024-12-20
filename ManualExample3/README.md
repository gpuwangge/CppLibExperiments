# 手动编译示例3
输入文件：main.cpp, test.h, test.cpp  

## Windows版本
第一步：编译生成test.dll  
> g++ -c -o test.obj test.cpp  
> g++ -shared -o test.dll test.obj  


第二步：链接生成binary.exe  
> g++ -o binary main.cpp test.dll  

(binary运行的时候，需要test.dll存在同一个文件夹下)  

换句话说，如果已经有提供.o文件的情况下，编译binary的main.cpp里面需要test.h  
这里的test.h必须是用来生成.dll的那一份  
如果不匹配，在第二步的时候会出现undefined reference to 'add(int,int)' 错误  

## Linux版本
第一步：编译生成libTest.so  
> g++ -fPIC -shared -o libTest.so test.cpp  

-fPIC: it generates machine code that is not dependent on being located at a specific address in memory.   
This is particularly useful for creating shared libraries  
Position Independent Code is necessary for shared libraries because the same library code can be loaded at different memory addresses in different programs   
By using -fPIC, the code can be relocated without modification, which improves efficiency and security  

第二步：链接生成binary  
> g++ -o binary main.cpp libTest.so

运行./binary的时候，即使libTest.so在当前目录下，也会出现找不到lib的情况。这是因为当前目录并没有在Linux默认寻找目录下。  
如果要把当前目录添加到默认lib寻找目录，则要改变LD_LIBRARY_PATH这个环境变量(把当前目录./添加到这个变量中)。  
> export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

更改完成后，可以通过env命令检查结果  

# 关于C和CPP的混用
使用C编译的dinamic library不能被main.cpp链接，会出现underfined reference错误。  
最好统一语言。如果不行的话，需要在cpp里面用extern "C"把C的头文件括起来。  

extern "C"的作用是指示编译器这部分代码按照C语言编译，而不是C++编译。  
这里有一个重要区别，C++支持函数重载，所以编译器会将函数参数添加入lib代码中。  
C不支持函数重载，因此编译的lib只包含函数名字，不包含参数。  
这是两者链接会失败的根本原因。  

