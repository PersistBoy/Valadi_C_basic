#include <stdio.h>
#define size 8

int main()
{
    int sourceArr[size] = {7,5,6,9,6,7,10,7};
    int countArr[6] = {0};
    int i;
    int maxIndex = 0;

    for (i=0 ; i<size ; i++)
    {
        countArr[sourceArr[i]-5]++;
    } 

    for (i=1 ; i<6 ; i++)
    {
        if (countArr[maxIndex]<countArr[i])
            maxIndex=i;
    }

    printf("The value of %d is most apear with %d total time\n" ,maxIndex+5,countArr[maxIndex]);
    return 0;
}