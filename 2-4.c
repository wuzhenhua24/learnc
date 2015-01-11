#include <stdio.h>

int main (void)
{
    int       n1,n2,n3,n4,n5,n6,n7,n8;
    double   d1,d2,d3,d4,d5,d6,d7,d8;

    n1 = 5 / 2;
    n2 = 5.0 /2;
    n3 = 5.0/2.0;
    n4 = 5 /2.0;
    n5 = 5*2;
    n6 = 5.0*2;
    n7 =5.0*2.0;
    n8 =5*2.0;
    
    d1 = 5/2;
    d2 = 5.0/2;
    d3 = 5.0/2.0;
    d4 = 5/2.0;
    d5 = 5*2;
    d6=5.0*2;
    d7=5.0*2.0;
    d8=5*2.0;

    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);
    printf("n4 = %d\n\n",n4);

    printf("n5 = %d\n",n5);
    printf("n6 = %d\n",n6);
    printf("n7 =%d\n",n7);
    printf("n8 = %d\n\n",n8);

    printf("d1 = %f\n",d1);
    printf("d2 = %f\n",d2);
    printf("d3 = %f\n",d3);
    printf("d4 = %f\n\n",d4);

    printf("d4 = %f\n",d5);
    printf("d4 = %f\n",d6);
    printf("d4 = %f\n",d7);
    printf("d4 = %f\n",d8);

    return (0);
}
