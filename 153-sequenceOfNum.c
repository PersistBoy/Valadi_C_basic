#include <stdio.h>

int sequenceOf2Num(int total , int num1 , int num2)
{
    if (total>0)
    {
        printf("%d" ,num1);
        sequenceOf2Num (total-1,num1,num2);
        printf("%d" ,num2);
    }
}

int main()
{
    int totalValue,num1Value,num2Value;

    printf("Enter Sequence length: ");
    scanf("%d" ,&totalValue);
    
    printf("Enter num1: ");
    scanf("%d" ,&num1Value);

    printf("Enter num2: ");
    scanf("%d" ,&num2Value);

    sequenceOf2Num(totalValue,num1Value,num2Value);
    return 0;
}