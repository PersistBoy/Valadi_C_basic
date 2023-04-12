#include <stdio.h>

int main()
{
    int num,sum=0,i,j,k;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    for (i=3 ; i<=num ; i+=3)
    {
        sum=sum+i;
    }
    for(j=5 ; j<=num ; j+=5)
    {
        sum=sum+j;
    }
    for (k=15;k<=num;k+=15)
    {
        sum=sum-k;
    }
    printf("%d\n" ,sum);
    return 0;
}