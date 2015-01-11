#include <stdio.h>

#define NUMBER  5

void rev_intary( int *vc ,int no)
{
     int i ;
     int vt[no];
     for(i=0;i<no;i++)
           vt[i] = vc[no-1-i];
}

void intary_rcpy (const int v1[ ], int v2[ ],int no)
{
     int i;
     for (i=0;i < no;i++)
          v2[i] = v1[no-1-i];
}

int main(void)
{
    int i;
    int old[NUMBER];
    int new[NUMBER];
  
    printf("请输入 %d 个元素的数组。\n",NUMBER);
    for (i=0; i <NUMBER;i++){
       
          printf("vx[%d]：",i);     scanf("%d",&old[i]);
     }
   
    intary_rcpy(old,new,NUMBER);

    printf("倒序后得到的新数组元素为：\n");
  
   for (i=0;i < NUMBER;i++) {
       printf("%d\n",new[i]);
    }
   
   return (0);
}
