#include <stdio.h>

int nthFibonatchiValue(int n)
{
    
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else if (n>1)
        return nthFibonatchiValue(n-2)+nthFibonatchiValue(n-1);
}

int main()
{
    int number=15;

    printf("%d\n" ,nthFibonatchiValue(number));
    return 0;
}