#include <stdio.h>
#define size 10

int main()
{
    int arr[size];
    int i,j;
    int counter=0;

    for (i=0 ; i<size ; i++)
    {
        printf("Enter the value of no.%d: " ,i+1);
        scanf("%d" ,&arr[i]);
    }

    for (i=0 ; i<size ; i++)
    {
        for(j=0 ; j<size ; j++)
        {
            if (i==j)
                continue;
            else if (arr[i]==arr[j])
            {
                if (j>i)
                {
                    printf("%d is a non unique\n" ,arr[i]);
                    counter++;
                    break;
                }
            }  
        }
    }
    printf("the %d non unique number on this array\n" ,counter);
    return 0;
}