#include <stdio.h>

int main(void)
{
   int i,no;
  
  do{
     printf("请输入一个正整数：");
     scanf("%d",&no);
     if ( no < 0)
        printf("请输入正整数。");
     } while (no < 0);
  
  i = 1;
  while ( i <= no)
     printf("%d  ",i++);
  putchar('\n');
 
  return (0);
}
