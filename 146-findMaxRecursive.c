#include <stdio.h>

int findMaxRecursive(int num)
{
    int n;
    int max;
    printf("Enter a num: ");
    scanf("%d" ,&n);

    if (num>1)
    {
        max=findMaxRecursive(num-1);
        if (n>max)
            return n;
        else if (n<=max)
            return max;
    }
    return n;
}

int main()
{
    int number=4;

    printf("%d\n" ,findMaxRecursive(number));
    return 0;
}