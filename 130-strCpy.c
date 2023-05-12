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
    char str1[6]="hello";
    char str2[6];

    int n=0;
    while ((str1[n++]=getchar())!='\n');
    
    printf("str1 before is: %s\n" ,str1);
    printf("str2 before is: %s\n" ,str2);

    strcpy2(str1,str2);
    printf("\n");

    printf("str1 after is: %s\n" ,str1);
    printf("str2 after is: %s\n" ,str2);
    

    return 0;
}