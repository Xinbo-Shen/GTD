#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//符号等虚拟码没有''
//_sleep(time/ms)  Sleep(time/ms) sleep(time/s)
void mu(){

    keybd_event(16,0,0,0);
    keybd_event(16,0,2,0);
    Sleep(100);
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
    Sleep(100);
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
int main2()
{
    sleep(1500);
    system("start cmd");
    sleep(2);
    mu();
    sleep(300);
    system("taskkill /F /IM wmplayer.exe");
    system("taskkill /F /IM cmd.exe");
    for(int i=1;i<=20;i++)
    {
        main();
    }
    return 0;
}
