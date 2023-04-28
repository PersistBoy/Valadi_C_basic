#include <stdio.h>

int main()
{
    int array2D[3][4] = {{2,5,7,11} , {81,22,20,0} , {5,12,11,3}};
    int i,j;

    for(i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<4 ; j++)
        {
            printf("%d " ,array2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}