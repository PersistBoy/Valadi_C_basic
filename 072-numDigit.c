#include <stdio.h>

float amountAndAverage(int num,int digit)
{
    int secondNum=0,sum=0;
    float i=0;
    
    if (num%10<digit)
    {
        i=i+1;
        sum=num%10;
    }
    secondNum=num/10;
    while (secondNum>=1)
    {
        if (secondNum%10<digit)
        {
            i=i+1;
            sum=sum+secondNum%10;
        }
        secondNum=secondNum/10;
    }
    printf("%d\n" ,(int)i);
    return sum/i;
}

int main()
{
    int num,digit;

    printf("Enter a number: ");
    scanf("%d" ,&num);
    printf("Enter a digit: ");
    scanf("%d" ,&digit);

    printf("Average %.2f\n" ,amountAndAverage(num,digit));
    return 0;
}