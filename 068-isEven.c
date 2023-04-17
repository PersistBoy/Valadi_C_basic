#include <stdio.h>

int isEven(int num)
{
    if (num%2==0)
        return 1;
    else 
        return 0;
}

int main()
{
    int number;

    printf("Enter a valid and positive number: ");
    scanf("%d" ,&number);

    printf("the function return %d\n" ,isEven(number));

    return 0;
}