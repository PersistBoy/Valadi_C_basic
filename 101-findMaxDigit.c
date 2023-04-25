#include<stdio.h>

int findMaxDigit(int phoneNumber[])
{
    int i;
    int max=0;

    max=phoneNumber[0];

    for (i=1 ; i<7 ; i++)
    {
        if(phoneNumber[i]>max)
            max=phoneNumber[i];
    }
    return max;
}

int main()
{
    int phoneNum[7];

    int i;

    for (i=0 ; i<7 ; i++)
    {
        printf("Enter the no.%d: " ,i+1);
        scanf("%d" ,&phoneNum[i]);
    }

    printf("The max digit on your phonenumber is %d\n" ,findMaxDigit(phoneNum));
    return 0;
}