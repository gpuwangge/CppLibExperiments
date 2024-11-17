# 手动编译示例2

输入文件：main.cpp, test.h, test.cpp, func.h, func.cpp  

第一步：编译生成main.o  
> g++ -c main.cpp  


第二步：编译生成test.o和func.o  
> g++ -c test.cpp  
> g++ -c func.cpp  


第三步：打包生成test.a和func.a  
> ar -rc test.a test.o   
> ar -rc func.a func.o  


第四步：链接生成binary.exe  
> g++ -o binary main.c test.a func.a  


