#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    int i,j;

    for (i=0 ; i<size ; i++)
    {
        printf("Enter the no.%d: " ,i+1);
        scanf("%d" ,&arr[i]);
    }
    for (j=0 ; j<size ; j++) //j==addadi ke bayad barrasi konim
    {
        i=j+1;
        do // counter e kar
        {
            if (arr[j]==arr[i])
            {
                break;
            }
            else
            {
                printf("the Value of %d is unique on this array\n" ,arr[i]);
                i++;
            }
        }while (i<size);
    }
    return 0;
}