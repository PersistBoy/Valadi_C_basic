#include <stdio.h>

int main()
{
    int number,power,resault;

    printf("Enter a number: ");
    scanf("%d" ,&number);

    printf("Enter power:");
    scanf("%d" ,&power);

    for (resault=1; power>0; power-- )
    {
        resault=resault*number;
    }

    printf("%d\n" ,resault);
    return 0;
}