#include <stdio.h>

void alert (int no)
{
   while (no-- > 0)
       putchar('\a');
}


int main(void)
{
  int i;
  printf("警报有几次：");     scanf("%d",&i);
  
  alert(i);
  return (0);
}
