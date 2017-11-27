#include<stdio.h>
#include<time.h>
int func(int n)
{
    int r;
    if(n==0 || n==1)
        r=1;
    else
        r=n * func(n-1);
    return r;
}
int main1()
{
    int n;
    double ti;
    clock_t start,finish;
    start=clock();
    printf("«Î ‰»În");
    scanf("%d\n",&n);
    int result=func(n);
    finish=clock();
    ti=(double)(finish-start);
    printf("%f\n",ti);
    printf("%d\n",result);
    return 0;
}
