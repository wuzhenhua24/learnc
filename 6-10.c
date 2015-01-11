#include <stdio.h>

void mul(const int ma[2][3],const int mb[3][2],int mc[2][2])
{
   int i,j;
   for (i = 0;i < 2; i++)
      for(j=0; j < 2;j++)
         mc[i][j]=ma[i][0]*mb[0][j]+ma[i][1]*mb[1][j]+ma[i][2]*mb[2][j];
}
     
int main(void)
{

   int i,j ;
   int a[2][3] = { {1,2,3},  {4,5,6}};
   int b[3][2] = { {1,5}, {5,3}, {8,1}};
   int c[2][2] = { 0 };
   mul(a,b,c);

  for (i =0 ; i < 2; i++)  {
      for (j =0 ; j < 2; j++)
          printf("%3d",c[i][j]);
      putchar('\n');
   }
  
   return (0);
}
