#include <stdio.h>

int main()
{
    int phoneNumber[7];
    int i;
    int max,maxLocation;

    for(i=0 ; i<7 ; i++) //input section
    {
        printf("Enter no.%d and press enter: " ,i+1);
        scanf("%d" ,&phoneNumber[i]);
    }
    
    max=phoneNumber[0];
    
    for (i=1 ; i<7 ; i++) // finding max num section
    {
        if (phoneNumber[i]>max)
            max=phoneNumber[i];
    }

    for (i=0 ; i<7 ; i++) //find max location
    {
        if (phoneNumber[i]==max)
            break;
    }
    maxLocation=i;

    
    printf("the max between ");  // printing resault section
    for(i=0 ; i<7 ;i++)
        printf("%d," ,phoneNumber[i]);
    printf("is %d\n" ,max);
    printf("and this max is located at index %d(no.%d)\n\n" ,maxLocation,maxLocation+1);
    
    return 0;
}