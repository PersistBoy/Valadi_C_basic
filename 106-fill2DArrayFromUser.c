#include <stdio.h>

#define rowSize 3
#define columnSize 5
int main()
{
    int userArr[rowSize][columnSize];
    int i,j;

    for(i=0 ; i<rowSize ; i++)
    {
        for (j=0 ; j<columnSize ; j++)
        {
            printf("Enter the num of row %d and comumn %d : " ,i+1,j+1);
            scanf("%d" ,&userArr[i][j]);
        }
    }

    for (i=0 ; i<rowSize ; i++)
    {
        for (j=0 ; j<columnSize ; j++)
        {
            printf("%d " ,userArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}