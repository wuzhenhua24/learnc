#include <stdio.h>

int main(void)
{
    int i,j ,ln;
   
   printf("三角形有几层:");
   scanf("%d",&ln);
   
   for ( i = 1; i <= ln; i++) {
      for (j = ln; j >= i;j--)
           putchar('*');
      putchar('\n');
   }

   for( i = 1;i<=ln;i++) {
       for(j=0;j<i-1;j++)
           putchar(' ');
       for(j=1;j<=ln-i+1;j++)
           putchar('*');
       putchar('\n');
    }
   return (0);
}
