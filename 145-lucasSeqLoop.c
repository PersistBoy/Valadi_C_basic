#include <stdio.h>

int lucasLoop(int num)
{
    int previous = 2;
    int current = 1;
    int i;
    int resault;

    if (num==0)
        return previous;
    if (num==1)
        return current;
    else
    {
        for (i=2 ; i<=num ; i++)
        {
            resault=previous+current;
            previous=current;
            current=resault;
        }
    }
        return resault;
}

int main()
{
    int number;
    printf("Enter a num: ");
    scanf("%d" ,&number);

    printf("%d\n" ,lucasLoop(number));
    return 0;
}