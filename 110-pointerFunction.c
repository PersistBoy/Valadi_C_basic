#include <stdio.h>

void findMaxMin(int num1 , int num2 ,int *ptrMax , int *ptrMin)
{
    if(num1>num2)
    {
        *ptrMax=num1;
        *ptrMin=num2;
    }
    else
    {
        *ptrMax=num2;
        *ptrMin=num1;
    }
}

int main()
{
    int num1=15,num2=10;
    int max,min;
    
    findMaxMin(num1,num2,&max,&min);
    printf("the max between %d and %d is %d and min is %d" ,num1,num2,max,min);
    return 0;
}