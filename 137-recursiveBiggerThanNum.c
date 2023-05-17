#include <stdio.h>

int findBiggerThanNum(int num)
{
    int x;
    printf("Enter the x: ");
    scanf("%d" ,&x);

    if (x==-1)
        return 0;
    else if (x>=num)
        return 1+findBiggerThanNum(num);
    else if (x<num)
        return findBiggerThanNum(num);
}

int main()
{
    int number=5;

    printf("%d\n" ,findBiggerThanNum(number));
    return 0;
}