#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    int i;
    int index0;

    //initalize Array
    for (i=0 ; i<size ; i++)
    {
        printf("Enter no.%d: " ,i+1);
        scanf ("%d" ,&arr[i]);
    }

    //savind first index of Arr
    index0=arr[0];

    //rotate part
    for (i=0 ; i<size-1 ; i++)
    {
        arr[i]=arr[i+1];
    }

    //initilize last index with index0 variable
    arr[size-1]=index0;

    //printing Arr value part
    for (i=0 ; i<size ; i++)
    {
        printf("%d  " ,arr[i]);
    }
    printf("\n");

    return 0;
}