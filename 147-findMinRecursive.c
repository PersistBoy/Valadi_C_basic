#include <stdio.h>

int findMinRecursive(int num)
{
    int useNum;
    int min;

    printf("Enter a value: ");
    scanf("%d" ,&useNum);

    if (num>1)
    {
        min=findMinRecursive(num-1);
        if (min>useNum)
            return useNum;
        else 
            return min;
    }
    return useNum;
}

int main()
{
    int iteration=4;

    printf("%d\n" ,findMinRecursive(iteration));
    return 0;
}