#include "createThread_1.h"
#include <iostream>
#include <thread>

void ThreadFunction()
{
    for (int i = 0; i < 100; i++)
        std::cout << "thread function excuting" << std::endl;
}

/*
ʹ�ú������󴴽��߳�
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
    //�ڴ��뺯��ָ�������ʱ�򣬺�����ǰ������ʾ�����&����
    //�������ӵĻ�����������Ĭ�������
    std::thread threadObj(ThreadFunction);//�Ӵ���ʱ�㿪ʼִ���䴫��ĺ���
    for (int i = 0; i < 10; i++)
        std::cout << "Display from MainThread" << std::endl;
    threadObj.join();//�ȴ����߳�ִ����ϣ��ټ���ִ��
    //threadObj.detach();//���븸�̷߳���
    std::cout << "Exit of Main function" << std::endl;
    return 0;
}