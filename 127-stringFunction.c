#include <stdio.h>
#include <stdlib.h>

int lengthOfString(char *str)
{
    int i;
    int length=0;

    for (i=0 ; str[i]!='\0' ; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char strword[1];

    printf("Enter some words . not too much , im a little noob :D: ");
    gets(strword);

    printf("the lenght of your word with Spaces is %d\n" ,lengthOfString(strword));

    return 0;
}