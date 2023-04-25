#include <stdio.h>

int sumOfDivisors(int num)
{
    int divisor=1,sum=0,lastNum;

        if (num%2==0)
        {
            lastNum=num/2;
        }
        else if (num%3==0)
        {
            lastNum=num/3;
        }
        else if (num%5==0)
        {
            lastNum=num/5;
        }
        else
            lastNum=num/2;
            
        while (lastNum>0)
        {
            if (num%lastNum==0)
            {
                sum=sum+lastNum;
            }
            lastNum--;
        }
        return sum+num;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf ("%d" ,&number);

    if (sumOfDivisors(number)==-1)
    printf("the number is a aval . then the sum of all divisors is just 1\n");
    else
    printf("the sum of all divisors is %d\n" ,sumOfDivisors(number));

    return 0;
}