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
    int arr[size];
    int i;

    for (i=0 ;i<size ;i++) //initialize arr
    {
        printf("Enter NO.%d: " ,i+1);
        scanf("%d" ,&arr[i]);
    }


}