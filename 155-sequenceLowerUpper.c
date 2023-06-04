#include <stdio.h>

void sequenceLowerUpper(int total,char lowerChar)
{
    if (total>0)
    {
        printf("%c" ,lowerChar);
        sequenceLowerUpper(total-1,lowerChar);
        printf("%c" ,lowerChar-32);
    }
}

int main()
{
    int totalValue;
    char lowerCharValue;

    printf("yek adad be man bede: ");
    scanf(" %d" ,&totalValue);

    printf("yek harf koochak be man bede ey mard bi sho oor: ");
    scanf(" %c" ,&lowerCharValue);

    sequenceLowerUpper(totalValue,lowerCharValue);

    return 0;
}