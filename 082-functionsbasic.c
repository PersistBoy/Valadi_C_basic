#include <stdio.h>

int printMaxMin(int num1, int num2)
{
    if (num1>num2)
        printf("the max is %d and the min is %d\n" ,num1,num2);
    else if (num1<num2)
        printf("the max is %d and the min is %d\n" ,num2,num1);
    else
        printf("Error\n");
}

int main()
{
    printMaxMin(5,20);
    return 0;
}