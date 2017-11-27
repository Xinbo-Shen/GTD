#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//符号等虚拟码没有''
//_sleep(time/ms)  Sleep(time/ms) sleep(time/s)
void search()
{//shift 改变输入法模式
    keybd_event(16,0,0,0);
    keybd_event(16,0,2,0);
//start d:/CloudeMusic/test.mp3
    keybd_event('S', 0, 0, 0);
    keybd_event('S', 0, 2, 0);
    Sleep(50);
    keybd_event('T', 0, 0, 0);
    keybd_event('T', 0, 2, 0);
    Sleep(50);
    keybd_event('A', 0, 0, 0);
    keybd_event('A', 0, 2, 0);
    Sleep(50);
    keybd_event('R', 0, 0, 0);
    keybd_event('R', 0, 2, 0);
    Sleep(50);
    keybd_event('T', 0, 0, 0);
    keybd_event('T', 0, 2, 0);
    Sleep(50);
    keybd_event(32, 0, 0, 0);
    keybd_event(32, 0, 2, 0);
    Sleep(50);
    keybd_event('D', 0, 0, 0);
    keybd_event('D', 0, 2, 0);
    Sleep(50);
    keybd_event(16,0,0,0);    //输入:
    keybd_event(186, 0, 0, 0);
    keybd_event(186, 0, 2, 0);
    keybd_event(16,0,2,0);
    Sleep(50);
    keybd_event(191, 0, 0, 0);
    keybd_event(191, 0, 2, 0);
    Sleep(50);
    keybd_event(16, 0, 0, 0);
    keybd_event('C', 0, 0, 0);
    keybd_event('C', 0, 2, 0);
    keybd_event(16, 0, 2, 0);
    Sleep(50);
    keybd_event('L', 0, 0, 0);
    keybd_event('L', 0, 2, 0);
    Sleep(50);
    keybd_event('O', 0, 0, 0);
    keybd_event('O', 0, 2, 0);
    Sleep(50);
    keybd_event('U', 0, 0, 0);
    keybd_event('U', 0, 2, 0);
    Sleep(50);
    keybd_event('D', 0, 0, 0);
    keybd_event('D', 0, 2, 0);
    Sleep(50);
    keybd_event(16, 0, 0, 0);
    keybd_event('M', 0, 0, 0);
    keybd_event('M', 0, 2, 0);
    keybd_event(16, 0, 2, 0);
    Sleep(50);
    keybd_event('U', 0, 0, 0);
    keybd_event('U', 0, 2, 0);
    Sleep(50);
    keybd_event('S', 0, 0, 0);
    keybd_event('S', 0, 2, 0);
    Sleep(50);
    keybd_event('I', 0, 0, 0);
    keybd_event('I', 0, 2, 0);
    Sleep(50);
    keybd_event('C', 0, 0, 0);
    keybd_event('C', 0, 2, 0);
    Sleep(50);
     keybd_event(191, 0, 0, 0);
    keybd_event(191, 0, 2, 0);
    Sleep(50);
    keybd_event('T', 0, 0, 0);
    keybd_event('T', 0, 2, 0);
    Sleep(50);
    keybd_event('E', 0, 0, 0);
    keybd_event('E', 0, 2, 0);
    Sleep(50);
    keybd_event('S', 0, 0, 0);
    keybd_event('S', 0, 2, 0);
    Sleep(50);
    keybd_event('T', 0, 0, 0);
    keybd_event('T', 0, 2, 0);
    Sleep(50);
    keybd_event(190, 0, 0, 0);
    keybd_event(190, 0, 2, 0);
    Sleep(50);
    keybd_event('M', 0, 0, 0);
    keybd_event('M', 0, 2, 0);
    Sleep(50);
    keybd_event('P', 0, 0, 0);
    keybd_event('P', 0, 2, 0);
    Sleep(50);
    keybd_event('33',0,0,0);
    keybd_event('33',0,2,0);
    Sleep(50);
    keybd_event(0x0d, 0, 0, 0);//回车
    keybd_event(0x0d, 0, 2, 0);
}
int main1()
{
    sleep(10);
//定时器
//system("start d:\CloudMusic\test.mp3")
    system("start cmd");
    sleep(1);
    search();
    return 0;
}
