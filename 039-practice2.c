#include <stdio.h>

int main()
{
    int x,x2,x4,x6,x8;
    printf("Give me the number X: ");
    scanf("%d" ,&x);

    x2=x*x;
    x4=x2*x2;
    x6=x4*x2;
    x8=x4*x4;

    printf("x=%d  x2=%d  x4=%d  x6=%d  x8=%d" ,x,x2,x4,x6,x8);
    return 0;

}