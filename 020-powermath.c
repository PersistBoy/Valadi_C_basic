#include <stdio.h>
#include <math.h>

int main()
{
    int x,x2,x4,x6,x8;
    printf("Enter the \"X\" : ");
    scanf("%d" ,&x);

    x2=x*x;
    x4=x2*x2;
    x6=x4*x2;
    x8=x4*x4;
    printf("the %d on x2 format is %d\nin x4 format is %d\nin x6 format is %d\nand in x8 format is %d\n" ,x,x2,x4,x6,x8);
    return 0;

}