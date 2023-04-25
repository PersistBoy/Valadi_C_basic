#include <stdio.h>

int main()
{
    int num,i,j;

    printf("Enter a number: ");
    scanf("%d" ,&num);

    for (i=1 ; i<=num ; i++)
    {
        printf("%d " ,i);
    }
    printf("\n");
    for (j=num ; j>=1 ; j--)
    {
        printf("%d " ,j);
    }
    printf("\n");
    return 0;
}