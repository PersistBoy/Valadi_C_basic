#include <stdio.h>

int charCount(char spicificChar)
{
    char usrChar;

    printf("Enter a character: ");
    scanf(" %c" ,&usrChar);           //bayad dastan in 'spcae' ghabl az %c ro befahmam....

    if (usrChar=='$')
        return 0;
    else if (usrChar==spicificChar)
        return 1+charCount(spicificChar);
    else if (usrChar!=spicificChar)
        return charCount(spicificChar);
}

int main()
{
    char mainChar='c';

    printf("%d\n" ,charCount(mainChar));
    return 0;
}