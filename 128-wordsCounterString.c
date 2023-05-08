#include <stdio.h>
#include <string.h>

int stringWords(char *str)
{
    int i=0;
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
    fgets(str, 20, stdin);

    printf("This text have %d word\n" ,stringWords(str));
    return 0;
}