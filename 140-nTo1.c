#include <stdio.h>

int printNto1(int num)
{
    if (num>=1)
    {
        printf("%d " ,num);
        printNto1(num-1);
    }
        
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d" ,&number);

    printNto1(number);
    return 0;
}