#include <stdio.h>

int evenOrOddRecursive(int num)
{
    if (num<10)
        return num%2 == 0 ? 1 : 0;
    return evenOrOddRecursive(num/10)? !(num%10%2) : (num%10%2) ;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf ("%d" ,&number);

    printf("%d\n" ,evenOrOddRecursive(number));
    return 0;
}