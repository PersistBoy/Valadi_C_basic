#include <stdio.h>

int evenOrOddRecursive(int num)
{
    int sum;
    if (num<=9)
    {
        if (num%2 == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        if (evenOrOddRecursive(num/2) == 1 && )
            return 0;
        else 
            return 1;
    }
}

int main()
{
    int number;
    printf("Enter a value: ");
    scanf("%d" ,&number);

    printf("%d\n" ,evenOrOddRecursive(number));
    return 0;
}