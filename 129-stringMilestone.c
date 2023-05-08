#include <stdio.h>
#include <string.h>
#define strsize 5

int main()
{
    char str[strsize];
    int i;
    int flag=1;

    printf("enter a word: ");
    fgets(str,strsize,stdin);

    for (i=0 ; i<strsize/2 ; i++)
    {
        if (str[strsize-2]!=str[i])
        {
            flag=0;
            break;
        }
        else if (str[strsize-2]==str[i])
        {
            continue;
        }
    }
    if (flag==1)
    {
        printf("yeki hast\n");
    }
    else if (flag==0)
    {
        printf("yeki niiiiiiist\n");
    }
    return 0;

}