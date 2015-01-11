#include <stdio.h>

#define NUMBER  5

int min_of(const int *vc ,int no)
{
     int i;
     int min = vc[0]; 
     for(i=1;i<no;i++)
        if (vc[i] < min)
           min = vc[i];
     return (min);
}

int main(void)
{
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int min_e,min_m;
  
    printf("请输入 %d 名学生的分数。\n",NUMBER);
    for (i=0; i <NUMBER;i++){
       
          printf("[%d]英语：",i + 1);     scanf("%d",&eng[i]);
          printf("   数学：");           scanf("%d",&mat[i]);
     }
   
    min_e = min_of(eng,NUMBER);
    min_m = min_of(mat,NUMBER);

   printf("英语的最低分 = %d\n", min_e);
   printf("数学的最低分 = %d\n", min_m);
  
   return (0);
}
