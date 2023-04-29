#include <stdio.h>

int main()
{
    int num=8;
    int *ptr;

    ptr=&num; // or *ptr=num;

    printf("the value of num before change is %d and his address is %p\n" ,*ptr,ptr);

    *ptr=*ptr+(2);

    printf("the value of num after change is %d and his address is %p\n" ,*ptr,ptr);
    return 0;
}