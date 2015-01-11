#include <stdio.h>

int main(void)
{

    int i,no;
    printf("请输入一个正整数：");
    scanf("%d",&no);
   
   for( i = 1;i <= no; i++){
       printf("%d",i%10);
   }
   putchar('\n'); 
   return (0);
}
