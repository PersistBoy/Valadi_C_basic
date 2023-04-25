#include <stdio.h>

int main()
{
    int num1,num2;

    printf("tell me the first num:");
    scanf("%d" ,&num1);

    printf("tell me the second num:");
    scanf("%d" ,&num2);

    if (num1==num2)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}