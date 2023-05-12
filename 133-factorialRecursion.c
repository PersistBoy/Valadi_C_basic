#include <stdio.h>

int factorialRecursion(int num)
{
    if (num==1)
        return 1;
    return num*factorialRecursion(num-1);
}

int main()
{
    int number;

    printf("Enrter num: ");
    scanf("%d" ,&number);

    printf("R is %d\n" ,factorialRecursion(number));
    return 0;
}