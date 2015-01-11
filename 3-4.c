#include <stdio.h>

int main(void)
{

    int x1,x2;

   puts("请输入两个整数。");
   printf("整数A:");          scanf("%d",&x1);
   printf("整数B:");          scanf("%d",&x2);

   if (x1<x2)
       puts("A小于B。");
   else if (x1>x2)
       puts("A大于B。");
   else
       puts("A和B相等。");

  return (0);
}
   
   

   

