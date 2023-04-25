#include <stdio.h>

int sumOfdivisors(int num)
{
    int i,sum=0;

    if (num==1)
    return num;

    for (i=1 ; i*i<num ; i++)
    {
        if (num%i==0)
        {
            sum=sum+i+(num/i);
        }
    }
    if (i*i==num)
        sum=sum+i;
    return sum;
}

int main()
{
    int number;

    printf("Enter a num: ");
    scanf ("%d" ,&number);

    printf("%d\n" ,sumOfdivisors(number));
    return 0;
}