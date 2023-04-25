#include <stdio.h>

int main()
{
    int num,power,resault;
    int PrintPower;

    printf("tell me a num:");
    scanf("%d" ,&num);

    printf("tell me the power:");
    scanf("%d" ,&power);

    PrintPower=power;
    resault=num;

    while (power>1)
    {
        
        resault=num*resault;
        power=power-1;

    }

    printf("%d^%d=%d\n" ,num,PrintPower,resault);
    return 0;
}