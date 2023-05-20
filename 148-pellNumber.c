#include <stdio.h>

int pellNumber(int index)
{
    if (index==0)
        return 0;
    if (index==1)
        return 1;
    else if (index>1)
        return 2*pellNumber(index-1)+pellNumber(index-2);
}

int main()
{
    int number;

    printf("Enter a value: ");
    scanf("%d" ,&number);

    printf("%d\n" ,pellNumber(number));
    return 0;
}