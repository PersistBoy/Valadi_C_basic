#include <stdio.h>

int isEven(int num1)
{
    if (num1%2==0)
        return 1;
    else 
        return 0;
}

int isEven(int num2)
{
    if (num2%2==0)
        return 0;
    else
        return 1;
}

int main()
{
    int number;

    printf("Enter a valid and positive number: ");
    scanf("%d" ,&number);

    printf("the function return %d\n" ,isEven(number));

    return 0;
}