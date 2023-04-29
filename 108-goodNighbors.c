#include <stdio.h>

#define X 5

int main()
{
    int elements[X];
    int i;

    for (i=0 ; i<X ; i++)
    {
        printf("Enter the no.%d : " ,i+1);
        scanf("%d" ,&elements[i]);
    }

        for (i=1 ; i<X-1 ; i++)
        {
            if (elements[i]==elements[i-1]*elements[i+1])
            {
                i=-1;
                printf("Good neighbor\n");
                break;
            }
        }
        if (i!=-1)
            printf("NOT a good neighbor\n");
    return 0;
}   