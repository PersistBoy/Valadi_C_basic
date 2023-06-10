#include <stdio.h> 
#define size 20

int main()
{
    int sourceArr[size] = {8,5,5,4,6,3,9,8,5,2,5,1,8,5,4,5,8,6,3,8};
    int countArr[10] = {0};
    int i;
    int maxNumber;
    int max;

    for (i=0 ; i<size ; i++)
    {
        countArr[sourceArr[i]]++;
    }

    max=countArr[0];

    for (i=1 ; i<10 ; i++)
    {
        if (max<countArr[i])
        {
            max=countArr[i];
            maxNumber=i;
        }
    }
    printf("%d apear %d time\n" ,maxNumber,max);
    return 0;
}