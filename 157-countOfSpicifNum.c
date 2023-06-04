#include <stdio.h>

int digitCountOnANumber(int num , int digit)
{
    if (num<10)
        return num==digit ? 1 : 0;
    return digitCountOnANumber(num/10 , digit)==0 && num%10==digit || digitCountOnANumber(num/10 , digit)==1 && num%10!=digit ? 1 : 0;
}

int main()
{
    int number,digit;

    printf("Enter a number: ");
    scanf ("%d" ,&number);
    printf("Enter a digit: ");
    scanf("%d" ,&digit);

    printf("%d\n" ,digitCountOnANumber(number,digit));
    return 0;
}