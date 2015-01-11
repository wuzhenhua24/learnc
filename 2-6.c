#include <stdio.h>

int main(void)
{
    int height;
    double tizhong;

    printf("请输入您的身高：");
    scanf("%d",&height);
    tizhong=(height-100)*0.9;

    printf("您的标准体重是%.1f公斤\n",tizhong);
  
    return (0);
}
