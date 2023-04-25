#include <stdio.h>

void findMaxBetween2(int num1)
{
    int units,tens;
    
    if (num1>=100 || num1<10)
        printf("Error try again\n");
    else
    {
        tens=num1/10;
        units=num1%10;
        if (tens>units)
            printf("The max is %d\n" ,tens);
        else
            printf("The max is %d\n",units);
    }
}

int main()
{
    int num,max;
    
    printf("Enter a number: ");
    scanf("%d" ,&num);

    findMaxBetween2(num);

    return 0;
}