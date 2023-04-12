#include <stdio.h>

int main()
{
    int num,i;
    int sum=0;

    printf("Enter a num: ");
    scanf("%d" ,&num);

    for (i=1 ; i<=num ; i++)
    {
        if(i%3==0 || i%5==0)
        {
            printf("%d\n" ,i);
            sum=sum+i;
        }
    }
    printf("answer is %d\n" ,sum);
    return 0;
}