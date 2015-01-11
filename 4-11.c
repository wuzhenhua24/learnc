#include <stdio.h>

int main(void)
{
   int no;
   
   do{   
       printf("请输入一个整数："); 
       scanf("%d",&no);
       if ( no <0 )
          puts("请输入正整数。");
     } while ( no < 0);
  
    while( no-- > 0)
       { 
         putchar('*');
         putchar('\n');
       }
    return(0);
}
