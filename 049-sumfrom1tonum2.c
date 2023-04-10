#include <stdio.h>

int main()
{
    int i=1,num,sum=0;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    printf("Sum of ");

    while (i<=num)
    {
        printf("%d " ,i);
        sum=sum+i;
        i++;
    }
    printf("= %d" ,sum);
    return 0;
}