#include <stdio.h>

int main()
{
    int NumA=0;
    int NumB=0;
    char MathCharacter;

    printf("Give me the character:");
    scanf("%c" ,&MathCharacter);

    printf("plz give me the first number:");
    scanf("%d" ,&NumA);

    printf("Plz give me the second number:");
    scanf("%d" ,&NumB);

    switch (MathCharacter)
    {
        case '*':
            printf("%d" ,NumA*NumB);
            break;
        case '/':
            if (NumB==0)
                printf("you cant divide with 0\n");
            else
            printf("%d" ,NumA/NumB);
            break;
        case '-':
            printf("%d" ,NumA-NumB);
            break;
        case '+':
            printf("%d" ,NumA+NumB);
            break;
        case '%':
            if (NumB==0)
                printf("you cant divide with 0\n");
            else
            printf("%d" ,NumA%NumB);
            break;
        default:
            printf("Error....try again\n");
            break;
    }
    return 0;
}