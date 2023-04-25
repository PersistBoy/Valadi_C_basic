#include <stdio.h>

int main()
{
    char character;

    printf("Enter a Character: ");
    scanf("%c" ,&character);

    if (character>=48 && 58>character)
        printf("The %c is a digit 0-9\n" ,character);
    else if (character>=65 && 91>character)
        printf("The %c is a capital character A-Z\n" ,character);
    else if (character>=97 && 123>character)
        printf("The %c is a lowercase character a-z\n" ,character);
    else
        printf("The %c is a symbol\n" ,character);
return 0;
}