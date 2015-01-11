#include <stdio.h>

int main(void)
{
   int month;
   
   printf("请输入月份：");       scanf("%d",&month);
  
   switch (month){
     case 1: puts("是冬季。");       break;
     case 2: puts("是冬季。");       break;
     case 3: puts("是春季。");         break;
     case 4: puts("是春季。");         break;       
     case 5: puts("是春季。");         break;
     case 6: puts("是夏季。");         break;
     case 7: puts("是夏季。");         break;
     case 8: puts("是夏季。");         break;
     case 9: puts("是秋季。");         break;
     case 10: puts("是秋季。");         break;
     case 11: puts("是秋季。");         break;
     case 12: puts("是冬季。");         break;
     default : puts("输入月份不存在！！\a"); 
   }
  
    return (0);
} 
