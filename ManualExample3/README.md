# 手动编译示例3

输入文件：main.cpp, test.h, test.cpp  

第一步：编译生成test.dll  
> g++ -c -o test.obj test.cpp  
> g++ -shared -o test.dll test.obj  


第二步：链接生成binary.exe  
> g++ -o binary main.cpp test.dll  

(binary运行的时候，需要test.dll存在同一个文件夹下)  

换句话说，如果已经有提供.o文件的情况下，编译binary的main.cpp里面需要test.h  
这里的test.h必须是用来生成.dll的那一份  
如果不匹配，在第二步的时候会出现undefined reference to 'add(int,int)' 错误  

