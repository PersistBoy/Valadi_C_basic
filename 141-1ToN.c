#include <stdio.h>

int print1toN(int num)
{
    if (num>=1)
    {
        print1toN(num-1);
        printf("%d " ,num);
    }
        
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d" ,&number);

    print1toN(number);
    return 0;
}