#include <stdio.h>

int main()
{
    int i,j,k,num;

    printf("Enter a number: ");
    scanf("%d" ,&num);

    for (k=1 ; k<=num ; k++)
    {
        for (j=num-1 ; j>=i ; j--)
        {
            printf(" ");
        }
        for (i=1 ; i<=k ; i++)
        {
            printf("%d" ,i);
        }

        printf("\n");
    }
    return 0;
}