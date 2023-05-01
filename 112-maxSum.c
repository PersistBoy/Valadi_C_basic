#include <stdio.h>
#define size 10
// 1,7,4,3,2
int main()
{
    int arr[size]={1,7,4,3,2,11,1,5,9,4};
    int i;
    int firstSum=arr[0]+arr[1];
    int sum=0;
    int num1,num2;

    for (i=1 ; i<(size-1) ; i++)
    {
        sum=arr[i]+(arr[i+1]);

        if (sum>firstSum)
        {
            firstSum=sum;
            num1=arr[i];
            num2=arr[i+1];
        }
    }
    printf("the bigest sum is %d between %d and %d\n" , firstSum,num1,num2);
    return 0;
}