#include <stdio.h>
#define size 5
//example1: {1,5,6,9,15} ---> realy sorted
//example2: {1,2,2,5,10} ---> sorted
//example3: {1,5,3,8,10} ---> Not sorted

int main()
{
    int arr[size];
    int i;
    int flag=2;

    for(i=0 ; i<size ; i++)
    {
        printf("Enter no.%d: " ,i+1);
        scanf("%d" ,&arr[i]);
    }

    for (i=0 ; i<size-1 ; i++)
    {
        if (arr[i]>arr[i+1])
        {
            flag=0; //NOT stored
            break;
        }
        if (arr[i]==arr[i+1])
        {
            flag=1; //Stored
        }
    }
    switch(flag)
    {
        case 0:
        printf("The sequence is NOT stored\n");
        break;

        case 1:
        printf("The Sequence is Stored\n");
        break;

        case 2:
        printf("The Sequence is Realy Stored\n");
        break;
    }
    return 0;
}