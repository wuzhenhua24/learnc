#include <stdio.h>

int minof(int x,int y)
{
    if (x > y)
        return (y);
    else
        return (x);

}

int main(void)
{
    int na,nb;

    puts("请输入两个整数。");
    printf("整数1:");     scanf("%d",&na);
    printf("整数2:");     scanf("%d",&nb);

    printf("较小整数的值是%d。\n",minof(na,nb));
   
    return (0);
}
    
