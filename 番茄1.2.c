#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//sleep与_sleep的测试
int main3()
{   clock_t start,finish;
    start=clock();
    _sleep(1000);        //sleep是秒，_sleep是毫秒
    finish=clock();
    double ti;
    ti=(double)(finish-start);
    printf("%f\n",ti);
    printf("%s\n","over");
    system("pause");
    return 0;
}
