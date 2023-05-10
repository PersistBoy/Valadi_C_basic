#include <stdio.h>
#include <string.h>

int stringWords(char *str)
{
    int i=0;
    int counter=1;
    int lenght=strlen(str);

    for (i=0 ; i<strlen(str) ; i++)
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