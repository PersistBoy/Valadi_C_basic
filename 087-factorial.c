#include <stdio.h>

int factorialOfDigit()
{
    int num,reasault=1,i;

    printf("Enter a number: ");
    scanf("%d" ,&num);

    if (num>0)
    {
        for (i=1 ; i<=num ; i++)
        {
            reasault=reasault*i;
        }
        return reasault;
    }
    else
       return -1;
}

int main()
{
    printf("The factorial is %d\n" ,factorialOfDigit());
    return 0;
}