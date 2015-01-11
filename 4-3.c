#include <stdio.h>

int main(void)
{
   int n1,n2,tem;
   int sum = 0;
  
  puts("请输入两个整数。");
  printf("整数1：");           scanf("%d",&n1);
  printf("整数2：");           scanf("%d",&n2);
  
  
  if ( n1 > n2 )
    { tem = n1;
     n1 = n2;
     n2 = tem;
    };
  printf("大于等于%d小于等于%d的所有整数的和是",n1,n2);
  do{
       sum = sum + n1;
       n1  = n1 +1;
   } while ( n1<=n2);

  printf("%d。\n",sum);

  return (0);
}




  

