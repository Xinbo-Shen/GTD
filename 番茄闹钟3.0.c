#include<stdio.h>
#include<stdlib.h>
#include<windows.h> //ò�Ʋ���Ҫ
#include<time.h>
#include "PlayMusic.c"
/*
��������3.0��Ϊ�����������˽�
��û��ʵ����ʾ������ Ҳû��ʵ��ÿ�ο��Ʒ���ʱ��
�������Ƿ�����ʷ�ϵ�һ���ش�ĸ�  ������Զ
Ϊ����3.0��׿Խ����  �ؽ��´θ���Ϊ����δ�˽�3.4
*/
 //��������3.0�Դ�����ʷ��
/*
�Ż�scanf���û����� ɾ��\n�Է����������֣�enter�������Զ����µ���
  ��2������ �����ܻ���ˤ���ԣ�����������ߵл����
��һ�γ�����ʾ������
��һ�γ����Զ���ʱ��
����ū���ƣ�����main�������ı���ȱ��
�״�����ʽ��ʹ��time.h�� �÷������ӿ�������������
  (����Զ���ĵ��·��գ�
�״γɹ���PlayMusic.c��main�ļ�����
���û����루̫��վ���뷬�Ѵ��ڽӴ�������ռ䣩 ����3.4ʵ����main�ļ��ķ���
����
*/
int main()
{
    int a;
    int b;
    clock_t start,finish;
    start=clock();
    printf("�����빤��ʱ�����֣�:\n");
    a=scanf("%d",&a);           //���scanf��\n��Ҫ����2�� ��Ϊ�س�������
    finish=clock();
    printf("%d\n",finish-start);
    int j=1;
    printf("��%d��\n",j);
    j++;
    if((int)(finish-start)>15000 || a>=61)
    {
        a=25;
        b=5;
    }
    else
    {
        printf("��������Ϣʱ��:\n");
        b=scanf("%d\n",&b);
    }
    sleep(a*60);
    system("start cmd");
    sleep(2);
    mu();
    sleep(b*60);
    system("taskkill /F /IM wmplayer.exe");
    system("taskkill /F /IM cmd.exe");
    for(int i=1;i<=20;i++)  //��ô֪���ǵڼ��ε���main����
    {
        main();
    }
    return 0;
}
