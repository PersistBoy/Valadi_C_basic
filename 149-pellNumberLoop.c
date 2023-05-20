#include <stdio.h>

int pellNumber(int index)
{
    int i;
    int previus=0;
    int current=1;
    int resault;

    if (index==0)
        return previus;
    if (index==1)
        return current;
    else
    {
        for (i=2 ; i<=index ; i++)
        {
            resault=2*current+previus;
            previus=current;
            current=resault;
        }
    }
    return resault;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d" ,&number);

    printf("%d\n" ,pellNumber(number));
    return 0;
}