#include <stdio.h>

int sqr(int x)
{
    return (x * x);
}

int pow4(int x)
{
    return (sqr(x)*sqr(x));
}

int main(void)
{
   int na;
   puts("请输入一个整数。");
   printf("整数：");        scanf("%d",&na);

   printf("它的四次幂是%d。\n",pow4(na));
  
   return (0);
}
