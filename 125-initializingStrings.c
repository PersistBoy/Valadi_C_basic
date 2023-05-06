#include <stdio.h>

int main()
{
    char str[]="Hello";
    int k;
    /*
    while (str[k]!='\0')
    {
        printf("%c" ,str[k]);
        k++;
    }
    printf("\n");
    */
    for (k=0 ; str[k]!='\0' ; k++)
    {
        printf("%c" ,str[k]);
    }
    printf("\n");
    return 0;
}