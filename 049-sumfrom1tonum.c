#include <stdio.h>

int main()
{
    int i,num,sum=0;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    printf("Sum of ");

    for (i=1 ; i<=num ; i++)
    {
        printf("%d " ,i);
        sum=sum+i;
    }
    printf("= %d" ,sum);
    return 0;
}