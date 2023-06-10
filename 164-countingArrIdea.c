#include <stdio.h>
#define size 8

int main()
{
    int arr[size] = {0,2,0,1,0,0,2,0};
    int countArr[3] = {0};
    int i,j;

    for (i=0 ; i<size ; i++)
    {
        for (j=0 ; j<size ; j++)
        {
            if (arr[i]==j)
                countArr[j]++;
        }
    }

    for (i=0 ; i<3 ; i++)
    {
        printf("the coiunt number %d = %d\n" ,i+1,countArr[i]);
    }
    return 0;
}