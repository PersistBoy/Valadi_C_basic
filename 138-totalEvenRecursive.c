#include <stdio.h>

int totalEven()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d" ,&num);

    if (num==-1)
        return 0;
    else if (num%2==0)
        return 1+totalEven();
    return totalEven();
}

int main()
{
    printf("%d\n" ,totalEven());
    return 0;
}