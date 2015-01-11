#include <stdio.h>

int minof(int x,int y,int z)
{
    int min;
    min = x;    
    if (min > y)
        min=y;
    if (min > z)
        min=z;

     return (min);

}

int main(void)
{
    int na,nb,nz;

    puts("请输入三个整数。");
    printf("整数1:");     scanf("%d",&na);
    printf("整数2:");     scanf("%d",&nb);
    printf("整数3:");     scanf("%d",&nz);

    printf("较小整数的值是%d。\n",minof(na,nb,nz));
   
    return (0);
}
    
