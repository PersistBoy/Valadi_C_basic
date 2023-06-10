#include <stdio.h>
#define size 10

int main()
{
    int sourceArr[size];
    int countArr[6] = {0};
    int i;
    
    for (i=0 ; i<size ; i++)
    {
        printf("Enter no.%d of sourceArr (betweem 0 - 5): " ,i+1);
        scanf("%d" ,&sourceArr[i]);
    }

    for (i=0 ; i<size ; i++)
    {
        countArr[sourceArr[i]]++;
    }
    
    for (i=0 ; i<6 ; i++)
    {
        printf("the number of %d apearances %d time in the sequence\n" ,i,countArr[i]);
    }
    return 0;
}