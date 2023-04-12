#include <stdio.h>

int main()
{
    int num,i,sum=0;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    for (i=15 ; i<=num ; i+=15)
    {
        sum=sum+i;
    }
    printf("%d\n" ,sum);
    return 0;
}