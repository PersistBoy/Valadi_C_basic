#include <stdio.h>
#define size 4

int abs(int num)
{
    if (num<0)
        num=num*-1;
    return num;
}

int main()
{
    int arr[size]={-4,8,2,1};
    int i,j;
    int sum=arr[0]+arr[1];

    for (i=0 ; i<size ; i++)
    {
        for (j=i+1 ; j<size ; j++)
        {
            if(abs(arr[i]+arr[j])<abs(sum))
            {
                sum=arr[i]+arr[j];
            }
        }
    }

    printf("%d\n" ,sum);
    return 0;
}