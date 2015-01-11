#include <stdio.h>

int cube(int x)
{
   return ( x * x * x);
}


int main(void)
{
   int na;

   puts("请输入一个整数。");
   printf("整数：");     scanf("%d",&na);

   printf("它的立方是%d。\n",cube(na));

   return (0);
}
