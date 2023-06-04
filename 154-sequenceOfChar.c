#include <stdio.h>

void sequenceOfChar(int total,char char1,char char2)
{
    if (total>0)
    {
        printf("%c" ,char1);
        sequenceOfChar(total-1,char1,char2);
        printf("%c%c" ,char2,char2);
    }
}

int main()
{
    int totalValue;
    char char1Value,char2Value;

    printf("Enter a total value: ");
    scanf("%d" ,&totalValue);

    printf("Enter char 1: ");
    scanf(" %c" ,&char1Value);

    printf("Enter char 2: ");
    scanf(" %c" ,&char2Value);

    sequenceOfChar(totalValue,char1Value,char2Value);

    return 0;
}