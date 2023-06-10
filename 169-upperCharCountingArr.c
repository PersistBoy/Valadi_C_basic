#include <stdio.h>
#define size 8

int main()
{
    char sourceArr[size] = "KIBRCKZM" ;
    int countArr[26] = {0} ;
    int i;
    int maxIndex = 0;

    for (i=0 ; i<size ; i++)
    {
        countArr[sourceArr[i]-'A']++;
    }

    for (i=1 ; i<26 ; i++)
    {
        if (countArr[maxIndex]<countArr[i])
            maxIndex=i;
    }

    printf("The letter %c apeared most of the times. total of %d apearances\n" ,maxIndex+'A' ,countArr[maxIndex]);
    return 0;
}