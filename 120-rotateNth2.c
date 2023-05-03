#include <stdio.h>
#define size 14

int main()
{
    int arr[size];
    int i,j;
    int index0;
    int numberOfRotate;

    //initalize Array
    for (i=0 ; i<size ; i++)
    {
        printf("Enter no.%d: " ,i+1);
        scanf ("%d" ,&arr[i]);
    }
    
    //giving numberOfRotate from user
    printf("good now take me the number of rotate you want: ");
    scanf("%d" ,&numberOfRotate);

    //main Progress
    for(j=0 ; j<numberOfRotate ; j++)
    {
        //savind first index of Arr
        index0=arr[0];
        //rotate part
        for (i=0 ; i<size-1 ; i++)
        {
            arr[i]=arr[i+1];
        }
        //initilize last index with index0 variable
        arr[size-1]=index0;
    }
    
    //printing Arr value part
    for (i=0 ; i<size ; i++)
    {
        printf("%d  " ,arr[i]);
    }
    printf("\n");

    return 0;
}