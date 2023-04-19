#include <stdio.h>

char toLower(char letter)
{
    int lowerCase;
    if (letter>=65 && letter<91)
    {
        lowerCase=letter+32;
        return lowerCase;
    }
    else 
        return -1;
}

char toUpper(char letter)
{
    if (letter>='a' && letter <='z')
    return letter-'a'+'A';
    else
    return -1;
}

int main()
{
    char letterCharacter;

    printf("Enter a character: ");
    scanf("%c" ,&letterCharacter);
    
    if (letterCharacter>='A' && letterCharacter<='Z')
        printf("%c\n" ,toLower(letterCharacter));
    else if (letterCharacter>='a' && letterCharacter<='z')
        printf("%c\n" ,toUpper(letterCharacter));
    else
        printf("%d\n" ,toLower(letterCharacter));
    return 0;
}