#include <stdio.h>

int main()
{
    int i,number1,number2,resault;

    printf("Enter a num: ");
    scanf("%d" ,&number1);

    printf("Enter second num: ");
    scanf("%d" ,&number2);

    for (i=1 ; i<=number2 ; i++)
    {
        resault=number1*i;
        printf("%d * %d = %d\n" ,number1 ,i ,resault);
    }
    return 0;
}