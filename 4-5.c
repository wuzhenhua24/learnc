#include <stdio.h>

int main(void)
{
    int num,dig;

   do{
      printf(" 请输入一个非负整数：");
      scanf("%d",&num);
      if (num < 0)
          puts("\a请不要输入负整数。");
   }while (num < 0);

   
   printf("%d的位数是",num);
   
   dig=0;
   do{
       num /= 10;
       dig ++;
     } while (num > 0);
   printf("%d。\n",dig);
   
   return (0);
}
