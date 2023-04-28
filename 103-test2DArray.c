#include <stdio.h>

int main()
{
    int arr[4][4] = {{1,2},{3,4,5,6},{7}};
    int i,j;

    for (i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<4 ;j++)
        {
            printf("%lu " ,&arr[i][j]);
        }
        printf("\n");
    }
    printf("Flag\n");
    return 0;
}