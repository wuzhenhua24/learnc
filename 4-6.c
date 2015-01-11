#include <stdio.h>

int main(void)
{
    int no;
    
   do{
      printf("请输入一个整数：");
      scanf("%d",&no);
      if( no < 0)
         puts("请不要输入负整数。");
     }while (no<0);


   while (no>=0) {
        printf("%d  ",no);
        no--;
   }
  
   putchar('\n');
  
   return (0);
}
   
