#include <stdio.h>

int main(void)
{
   int i ,j ,ln;
   puts("让我们来描绘一个金字塔。");
   printf("金字塔有几层：");            scanf("%d",&ln);
   
   for(i=1;i <= ln; i++) {
      for(j=1;j<=ln-i;j++)
           putchar(' ');
      for(j=1;j<=2*i-1;j++)
           putchar('*');
      for(j=1;j<=ln-i;j++)
          putchar(' ');
      putchar('\n');
   }
    return (0);
}
