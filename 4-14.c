#include <stdio.h>

int main(void)
{
    int i,height1,height2,n;
    printf("开始数值 (cm)：");        scanf("%d",&i);
    printf("结束数值 (cm)：");        scanf("%d",&height2);
    printf("间隔数值 (cm)：");        scanf("%d",&n);
   
   for(height1 = i;height1<=height2;height1 += n) {
       printf("%dcm   %.2fkg\n",height1,(double)(height1-100)*0.9);

   }

   return (0);
}
    
   
