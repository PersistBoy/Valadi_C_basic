#include <stdio.h>

int sumOfDivisors(int num)
{
    int i,sum=1;
    
    if (num==1)
        return 1;
    
    for(i=2;i*i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i+(num/i);
        }
    }
    if (i*i==num)
        sum=sum+i;
    return sum;
}

int perfectOrNot(int num)
{
    if (num==sumOfDivisors(num))
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d" ,&number);

    if (perfectOrNot(number)==1)
        printf("The %d is PERFECT\n" ,number);
    else if (perfectOrNot(number)==0)
        printf("The %d is NOT PERFECT\n" ,number);
    return 0;
}