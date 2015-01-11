#include <stdio.h>

int main(void)
{
    int i,j;
    int width,height,tem;
    
    puts("让我们来画一个长方形。");
    printf("一边:");        scanf("%d",&width);
    printf("另一边:");      scanf("%d",&height);
   
    if(width < height ){
         tem = width;
        width = height;
        height = tem;
      }
     
   for( i = 1;i <= height; i++) {
       for (j=1; j <= width;j++)
            putchar('*');
        putchar('\n');
    }
    
    return (0);
}
       
