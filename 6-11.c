#include <stdio.h>

#define NUMBER1  5

#define NUMBER2  3


int max_of(const int *vc ,int no)
{
     int i;
     int max = vc[0]; 
     for(i=1;i<no;i++)
        if (vc[i] > max)
           max = vc[i];
     return (max);
}

double avg (const int *vb,int no)
{   
     int i,sum=0;
     double aver;
     for (i=0;i < no;i++)
         sum += vb[i];
     aver = (double)sum / no;
     return aver;
}
int main(void)
{
    int i;
    int eng[NUMBER1];
    int mat[NUMBER1];
    int chi[NUMBER1];
    int max_e,max_m,max_c;
    int a1[NUMBER2];
    int a2[NUMBER2];
    int a3[NUMBER2];
    int a4[NUMBER2];
    int a5[NUMBER2];
    double b1,b2,b3,b4,b5;
    printf("请输入 %d 名学生的分数。\n",NUMBER1);
    for (i=0; i <NUMBER1;i++){
       
          printf("[%d]英语：",i + 1);     scanf("%d",&eng[i]);     
          printf("   数学：");           scanf("%d",&mat[i]);
          printf("   语文：");           scanf("%d",&chi[i]);
     }
      a1[0] = eng[0];a1[1] = mat[0];a1[2] = chi[0];
      a2[0] = eng[1];a2[1] = mat[1];a2[2] = chi[1];
      a3[0] = eng[2];a3[1] = mat[2];a3[2] = chi[2];
      a4[0] = eng[3];a4[1] = mat[3];a4[2] = chi[3];
      a5[0] = eng[4];a5[1] = mat[4];a5[2] = chi[4];

    max_e = max_of(eng,NUMBER1);
    max_m = max_of(mat,NUMBER1);
    max_c = max_of(chi,NUMBER1);
    b1 = avg(a1,NUMBER2);
    b2 = avg(a2,NUMBER2);
    b3 = avg(a3,NUMBER2);
    b4 = avg(a4,NUMBER2);
    b5 = avg(a5,NUMBER2);

   printf("英语的最高分 = %d\n", max_e);
   printf("数学的最高分 = %d\n", max_m);
   printf("语文的最高分 = %d\n", max_c);
   printf("学生%d的平均分是%.1f\n",1,b1);
   printf("学生%d的平均分是%.1f\n",2,b2);
   printf("学生%d的平均分是%.1f\n",3,b3);
   printf("学生%d的平均分是%.1f\n",4,b4);
   printf("学生%d的平均分是%.1f\n",5,b5);
   return (0);
}
