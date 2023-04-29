#include <stdio.h>

int main()
{
    int cValadiBasics[7];
    int i;

    for (i=0 ; i<7 ; i++)
    {
        printf("Enter value %d : " ,i+1);
        scanf("%d" ,&cValadiBasics[i]);
    }

    for (i=6 ; i>=0 ; i--)
    {
        printf("%d  " ,cValadiBasics[i]);
    }
    return 0;
}