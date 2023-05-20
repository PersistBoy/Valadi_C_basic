#include <stdio.h>

int findLucasNth(int num)
{
    if (num==0)
        return 2;
    else if (num==1)
        return 1;
    else if (num>1)
    {
        return findLucasNth(num-2)+findLucasNth(num-1);
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d" ,&number);

    printf("%d is the n-th number of this seq\n" ,findLucasNth(number));
    return 0;
}