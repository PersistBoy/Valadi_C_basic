#include <stdio.h>

int sumOfDivisors(int num)
{
    int sum=0,divisor=1;

    while (num>=divisor)
    {
        if (num%divisor==0)
        {
            sum=divisor+sum;
            
        }
        divisor++;
    }
    return sum;
}
int main()
{
    int number;

    printf("Enter a num: ");
    scanf ("%d" ,&number);

    printf("%d\n" ,sumOfDivisors(number));
    return 0;
}