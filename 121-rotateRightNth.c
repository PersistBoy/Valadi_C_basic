#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    int i,j;
    int n;
    int temp;
    int rightOrLeft;

    //initialize arr section
    for (i=0 ; i<size ; i++)
    {
        printf("Enter NO.%d: " ,i+1);
        scanf("%d" ,&arr[i]);
    }

    //value of "n" section
    printf("good now tell me the rotation number: ");
    scanf("%d" ,&n);

    rightOrLeft=1; //'0' == Left        '1' == Right;

    //main progress section (left)
    if (rightOrLeft==0)
    {
        for(j=0 ; j<n ; j++)
        {
            temp=arr[0];
                for(i=0 ; i<size-1 ; i++)
                {
                    arr[i]=arr[i+1];
                }
            arr[size-1]=temp;
        }
    }

    //main progress section (left)
    else if (rightOrLeft==1);
    {
        for(j=0 ; j<n ; j++)
        {
            temp=arr[size-1];
            for(i=size-2 ; i>=0 ; i--)
            {
                arr[i-1]=arr[i];
            }
            arr[0]=temp;
        }
    }
    //print section
    for (i=0 ; i<size ; i++)
    {
        printf("%d  " ,arr[i]);
    }
    printf("\n");

    return 0;
}