# 手动编译示例1

第一步：编译生成main.o  
> g++ -c main.cpp

第二步：编译生成test.o  
> g++ -c test.cpp

第三步：链接生成binary.exe  
> g++ -o binary main.o test.o
