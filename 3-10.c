#include <stdio.h>

int main(void)
{
    int n1,n2,n3;
    
    puts("请输入两个整数。");
    printf("整数A:");             scanf("%d",&n1);
    printf("整数B:");             scanf("%d",&n2);
  
    if( n1< n2 )
        n3 = n2 -n1;
    else
        n3 = n1 - n2;

   if ( n3 < 10 || n3 == 10) 
        puts("它们的差小于等于10");
   else
        puts("它们的差大于等于11");

   return (0);
}
