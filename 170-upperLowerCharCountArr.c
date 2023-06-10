#include <stdio.h>
#define size 12

int main()
{
    char sourceArr[size] = "Wel O zW  dW" ;
    int countArr[52] = {0};
    int i;
    int maxIndex = 0;

    for (i=0 ; i<size ; i++)
    {
        if (sourceArr[i]>='A' && sourceArr[i]<='Z')
            countArr[sourceArr[i]-'A']++;
        else if (sourceArr[i]>='a' && sourceArr[i]<='z')
            countArr[sourceArr[i]-71]++;
    }

    for (i=1 ; i<52 ; i++)
    {
        if (countArr[maxIndex]<countArr[i])
            maxIndex=i;
    }

    if (maxIndex<26)
        printf("the char is uppercase %c and apear %d time\n" ,maxIndex+'A' ,countArr[maxIndex]);
    else
        printf("the char is lowercase %c and apear %d time\n" ,maxIndex+71 ,countArr[maxIndex]);
    return 0;
}