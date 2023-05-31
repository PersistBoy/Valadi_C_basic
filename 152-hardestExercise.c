#include <stdio.h>

int oddOrEvenDigits(int num)
{
    if (num<10)
        if (num%2==0) //zog
            return 1;
        else
            return 0;
    else if (num<100)
        if (num/10%2==1 && num%10%2==0)
            return 1;
        else
            return 0;

    if ((num%10%2 == 0) && (num/10%10%2 == 1))
        return oddOrEvenDigits(num/100);
    else
        return 0;
}

int main()
{
    int number;
    int Resault;
    printf("Enter a number: ");
    scanf("%d" ,&number);

    Resault=oddOrEvenDigits(number);
    if (Resault == 1)
        printf("The number is OK\n");
    else
        printf("The number is NOT ok\n");
    return 0;
}