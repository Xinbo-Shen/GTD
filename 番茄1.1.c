#include <stdio.h>
#include <stdlib.h>
int main2()
{system("color 0a");
int i,b;
i=120;
b=2;
while(i>=0)
  {printf("%d",b);
  printf(":");
  printf("%d",(i-b*60)/10);
  printf("%d",i-b*60-((i-b*60)/10)*10);
  _sleep(1000);
  system("cls");
  i--;
  b=i/60;}
system("pause");
return 0;
}
