#include <stdio.h>

int evenOrOddSum(int num)
{
    if (num<10)
        return num%2 ? 1 : 0;
    return num%10%2 ? !evenOrOddSum(num/10) : evenOrOddSum(num/10);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf ("%d" ,&number);

    printf("%d\n" ,evenOrOddSum(number));
    return 0;
}