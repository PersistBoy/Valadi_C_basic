#include <stdio.h>

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
    char strword[20];

    printf("Enter some words . not too much , im a little noob :D: ");
    fgets(strword, 20 ,stdin);

    printf("the lenght of your word with Spaces is %d\n" ,lengthOfString(strword));

    return 0;
}