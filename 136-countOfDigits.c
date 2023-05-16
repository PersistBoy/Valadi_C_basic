#include <stdio.h>

int countOfDigits(int num)
{
    if (num<=9)
        return 1;
    else
        return countOfDigits(num/10)+1;
}


int main()
{
    int number;

    printf("Enter a number: ");
    scanf ("%d" ,&number);

    printf("Resault is %d\n" ,countOfDigits(number));
    return 0;
}