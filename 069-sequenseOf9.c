#include <stdio.h>

int sequenceOf9(int num)
{
    int factorOfTen=1,i,sum=0;

    for (i=1 ; i<=num ; i++)
    {
        sum=sum+(9*factorOfTen);
        factorOfTen=factorOfTen*10;
    }
    return sum;
}

int main()
{
    int num;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    printf("the sequence is %d \n" ,sequenceOf9(num));
    return 0;
}