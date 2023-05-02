#include <stdio.h>
#define size 10

int main()
{
    int arr[size];
    int i,j=0;
    int counter=0;

    //initalize the array
    for (i=0 ; i<size ; i++)
    {
        printf("Enter the no.%d: " ,i+1);
        scanf("%d" ,&arr[i]);
    }


    for (i=0 ; i<size ; i++)
    {
        for(j=0 ; j<size ; j++)
        {
            if (i==j)
            {
                continue;
            }
            else if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(j==10)
        {
            printf("%d\n" ,arr[i]);
            counter++;
        }
    }
    printf("%d number are unique on this arr\n" ,counter);
    return 0;
}