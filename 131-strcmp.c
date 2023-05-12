#include <stdio.h>
#define size 4

int strcmp(char *firstStr , char *secondStr)
{
    int i;

    for (i=0 ; firstStr[i]!='\0' ; i++)
    {
        if (firstStr[i]==secondStr[i])
        {
            continue;
        }
        else if (firstStr[i]!=secondStr[i])
        {
            if (firstStr[i]>secondStr[i])
                return +1;
            else if (firstStr[i]<secondStr[i])
                return -1;
        }
        return 0;
    }
}

int main()
{
    char firstStr[size]="Aba";
    char secondStr[size]="Aba";
    int strcmpReturn;
    
    strcmpReturn=strcmp(firstStr,secondStr);

    printf("%d\n" ,strcmpReturn);

    return 0;
}