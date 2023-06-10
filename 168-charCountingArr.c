#include <stdio.h>
#define size 15
int main()
{
    char sourceArr[size] = "hojjatteimourii" ;
    int countArr[26]={0};
    int i;
    int maxIndex = 0 ;

    for (i=0 ; i<size ; i++)
    {
        countArr[sourceArr[i]-97]++;
    }

    for (i=1 ; i<26 ; i++)
    {
        if (countArr[maxIndex]<countArr[i])
            maxIndex=i;
    }

    printf("the '%c' is most apear on this char array . its apear %d time\n" ,maxIndex+97 ,countArr[maxIndex]);
    return 0;
}   