#include <stdio.h>

int main(void)
{
    int num;

   do{
      printf(" 请输入一个非负整数：");
      scanf("%d",&num);
      if (num < 0)
          puts("请不要输入负整数。");
   }while (num < 0);

   
   printf("%d逆向显示的结果是",num);

   do{
       printf("%d",num%10);
       num /= 10;
     } while (num > 0);
   puts("。");
   
   return (0);
}
