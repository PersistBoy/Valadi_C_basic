#include <stdio.h>

int sumOfDigits(int num)
{
    if (num/10<1)
        return num;
    else
        return sumOfDigits(num/10)+(num%10);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d" ,&number);

    printf("%d\n" ,sumOfDigits(number));
    return 0;
}