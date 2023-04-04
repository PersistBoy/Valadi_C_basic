#include <stdio.h>

int main()
{
    float d,an,a1;
    int n;
    printf("give me first initial number(a1): ");
    scanf("%f" ,&a1);

    printf("give me difrenses number(d):");
    scanf("%f" ,&d);

    printf("give me your targe initial (for example number 9): ");
    scanf("%d" ,&n);
    an=a1+(n-1)*d;
    printf("the %d-th number is %.2f\n" ,n,an);
    return 0;
}