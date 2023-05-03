#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    int i,j;
    int n;
    int temp;
    char rightOrLeft;

    //initialize arr section
    for (i=0 ; i<size ; i++)
    {
        printf("Enter NO.%d: " ,i+1);
        scanf("%d" ,&arr[i]);
    }

    //value of "n" section
    printf("good now tell me the rotation number: ");
    scanf("%d" ,&n);

    //letf or right section
    printf("\nif you wanna rotate to right type\"R\"\nif you wanna rotate to left type \"L\"\n:");
    scanf(" %c" ,&rightOrLeft);

    //main progress section (left)
    if (rightOrLeft=='L')
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

    //main progress section (right)
    else if (rightOrLeft=='R')
    {
        for(j=0 ; j<n ; j++)
        {
            temp=arr[size-1];
                for(i=size-2 ; i>=0 ; i--)
                {
                    arr[i+1]=arr[i];
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