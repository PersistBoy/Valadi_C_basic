#include <stdio.h>

int sumRecursion(int num)
{
    if (num==1)
        return 1;
    return num+sumRecursion(num-1);
}


int main()
{
    int number;

    printf("Enter the num: ");
    scanf("%d" ,&number);

    printf("the resault is %d\n" ,sumRecursion(number));
    return 0;
}