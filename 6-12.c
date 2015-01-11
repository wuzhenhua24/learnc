#include <stdio.h>

int main(void)
{
/*   int va[5];*/
   static int va[5];
   int i;
   for(i = 0;i <5; i++)
      printf("%d\n",va[i]);

  return (0);
}
