#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//sleep��_sleep�Ĳ���
int main3()
{   clock_t start,finish;
    start=clock();
    _sleep(1000);        //sleep���룬_sleep�Ǻ���
    finish=clock();
    double ti;
    ti=(double)(finish-start);
    printf("%f\n",ti);
    printf("%s\n","over");
    system("pause");
    return 0;
}
