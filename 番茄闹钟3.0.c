#include<stdio.h>
#include<stdlib.h>
#include<windows.h> //貌似不需要
#include<time.h>
#include "PlayMusic.c"
/*
番茄闹钟3.0因为调用主函数扑街
既没有实现显示番茄数 也没能实现每次控制番茄时长
但是它是番茄历史上的一次重大改革  意义深远
为纪念3.0的卓越贡献  特将下次更新为番茄未扑街3.4
*/
 //番茄闹钟3.0自传功绩史：
/*
优化scanf的用户体验 删除\n以防外星人入侵（enter键被忽略而导致的用
  户2次输入 气急败坏的摔电脑）（历代番茄叩谢！）
第一次尝试显示番茄数
第一次尝试自定义时长
发现奴隶制（调用main函数）的本质缺陷
首次在正式版使用time.h库 让番茄闹钟看起来更像闹钟
  (规避自定义的道德风险）
首次成功将PlayMusic.c与main文件分离
→用户输入（太空站）与番茄传宗接代（交配空间） 将在3.4实现与main文件的分离
如上
*/
int main()
{
    int a;
    int b;
    clock_t start,finish;
    start=clock();
    printf("请输入工作时长（分）:\n");
    a=scanf("%d",&a);           //如果scanf有\n会要输入2次 因为回车被忽略
    finish=clock();
    printf("%d\n",finish-start);
    int j=1;
    printf("第%d次\n",j);
    j++;
    if((int)(finish-start)>15000 || a>=61)
    {
        a=25;
        b=5;
    }
    else
    {
        printf("请输入休息时长:\n");
        b=scanf("%d\n",&b);
    }
    sleep(a*60);
    system("start cmd");
    sleep(2);
    mu();
    sleep(b*60);
    system("taskkill /F /IM wmplayer.exe");
    system("taskkill /F /IM cmd.exe");
    for(int i=1;i<=20;i++)  //怎么知道是第几次调用main函数
    {
        main();
    }
    return 0;
}
