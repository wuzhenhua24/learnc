#include <stdio.h>

int main(void)
{
    int no,sum,i ;
    sum = 0;
   
    for(i = 1; i< 6; i++)  {
        sum += i;
     }
    
    printf("1到5的合计值是%d。\n",sum);
 
    return (0);
}
