#include <stdio.h>

int main()
{
    int num,ValidNum,oddSum=0,i;

    do{
    printf("Enter a valid and positive number: ");
    scanf("%d" ,&num);
    }while (num<=0);

    for (i=1 ; i<=num ; i++)
        {
            printf("Enter integer number: ");
            scanf("%d" ,&ValidNum);
            if (ValidNum%2!=0)
                oddSum=oddSum+ValidNum;
        }
        printf("%d\n" ,oddSum);
        return 0;
}