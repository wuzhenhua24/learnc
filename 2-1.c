#include <stdio.h>

int main(void)
{
    int n1,n2;
    double wa;

    puts("请输入两个整数。");
    printf("整数A:");    scanf("%d",&n1);
    printf("整数B:");    scanf("%d",&n2);
    wa=(double)n1/n2;
    printf("A的值是B的%0.0f%%。\n",wa*100);
   
    return (0);
}
