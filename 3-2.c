#include <stdio.h>

int main(void)
{

    int x1,x2;

   puts("请输入一个整数。");
   scanf("%d",&x1);
   
   if(x1 % 10 == 2)
       puts("该整数的个位数是2。");
   else
       puts("该整数的个位数不是2。");
   puts("请再输入一个整数。");
   scanf("%d",&x2);

   if (x1<x2)
       puts("第一个数小于第二个数");
   else if (x1>x2)
       puts("第一个数大于第二个数");
   else
       puts("两个数相等。");

  return (0);
}
   
   

   

