#include <stdio.h>

void strcpy2(char firstStr[5] , char secondStr[5])
{
    int i=0;
    
    for (i=0 ; firstStr[i]!='\0' ; i++)
    {
        secondStr[i]=firstStr[i];
    }
    secondStr[i+1]='\0';
}

int main()
{
    char str1[6];
    char str2[6];
    fgets(str1 , 6 , stdin);

    printf("Str1 before\n");
    puts(str1);
    printf("Str2 before\n");
    puts(str2);

    printf("\n");

    strcpy2(str1,str2);

    printf("Str1 after\n");
    puts(str1);
    printf("Str2 after\n");
    puts(str2);

    return 0;
}