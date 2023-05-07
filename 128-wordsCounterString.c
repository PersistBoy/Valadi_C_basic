#include <stdio.h>
#include <string.h>

int stringWords(char *str)
{
    int i;
    int counter=1;

    for (i=0 ; str[i]!='\0' ; i++)
    {
        if (str[i]==' ')
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    char str[20];
    gets(str);

    printf("This text have %d word\n" ,stringWords(str));
    return 0;
}