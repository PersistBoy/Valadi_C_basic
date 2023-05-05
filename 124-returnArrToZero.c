#include <stdio.h>

void changetoZero(int *pArr, int size)
{
    int i;
    for(i=0 ; i<size ; i++)
    {
        pArr[i]=0;
    }
}

int main()
{
    int arr[5]={5,9,3,12,1};
    int i;

    changetoZero(arr,5);

    for(i=0 ; i<5 ; i++)
    {
        printf("%d " ,arr[i]);
    }
    printf("\n");
    return 0;
}