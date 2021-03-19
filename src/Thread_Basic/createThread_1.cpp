#include "createThread_1.h"
#include <iostream>
#include <thread>

void ThreadFunction()
{
    for (int i = 0; i < 100; i++)
        std::cout << "thread function excuting" << std::endl;
}

/*
使用函数对象创建线程
class DisplayThread {
public:
    void operator ()() {
        for (int i = 0; i < 100; i++)
            std::cout << "Display Thread Excecuting" << std::endl;
    }
};
std::thread threadObj((DisplayThread()));*/

int CreateThreadByFun() 
{
    //在传入函数指针参数的时候，函数名前可以显示添加上&符号
    //如果不添加的话，编译器会默认添加上
    std::thread threadObj(ThreadFunction);//从创建时便开始执行其传入的函数
    for (int i = 0; i < 10; i++)
        std::cout << "Display from MainThread" << std::endl;
    threadObj.join();//等待子线程执行完毕，再继续执行
    //threadObj.detach();//将与父线程分离
    std::cout << "Exit of Main function" << std::endl;
    return 0;
}