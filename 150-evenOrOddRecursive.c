#include <stdio.h>

int evenOrOddRecursive(int num)
{
    int sum;
    if (num<=9)
    {
        return num;
    }
    else
    {
        if (((num%10)+evenOrOddRecursive(num/10)) % 2 ==0)
            return 1;
        else 
            return 0;
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