#include <stdio.h>

int main()
{
    int i,num;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    for (i=2 ; i<=num ; i=i+2)
    {
        printf("%d\n" ,i);
    }
    return 0;
}