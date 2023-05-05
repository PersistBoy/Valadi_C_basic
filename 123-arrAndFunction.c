#include <stdio.h>

int sumArray(int array[5])
{
    int i;
    int sum=0;

    for(i=0 ; i<5 ; i++)
    {
        sum=sum+array[i];
    }

    return sum;
}

int main()
{
    int arr[5]={1,5,3,12,2};
    int sumArr;
    sumArr=sumArray(arr);
    printf("%d\n" ,sumArr);

    return 0;
}