#include <stdio.h>

#include <stdlib.h>
int main()
{
    int Num1 , Num2;
    printf("Enter the first number: ");
        scanf("%d" ,&Num1);
    printf("Enter the second number:");
        scanf("%d" ,&Num2);

    if (Num1>Num2)
        printf("The bigger number is: \"%d\" \n" ,Num1);
    else if (Num1==Num2)
        printf("The numbers %d and they are same value\n" ,Num1);
    else
        printf("The bigger number is: \"%d\" \n" ,Num2);
        return 0;
}