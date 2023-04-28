#include <stdio.h>

int main()
{
    int multiplicationTable[9][9];
    int i,j;

    for (i=0 ; i<9 ; i++)
    {
        for (j=0 ; j<9 ; j++)
        {
            multiplicationTable[i][j]=(i+1)*(j+1);
        }
    }

    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 9 ; j++)
       {
            printf("%3d " ,multiplicationTable[i][j]);
       }
        printf("\n");
    }
    return 0;
}