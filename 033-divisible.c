#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter number 1: ");
    scanf("%d" ,&a);

    printf("Enter number 2: ");
    scanf("%d" ,&b);

    printf("Enter number 3: ");
    scanf("%d" ,&c);

    if (a==0 || b==0 || c==0)
        printf("one of numbers is 0 and you cant divide 0\n");
    else if ((a%b==0 || b%a==0) && (a%c==0 || c%a==0) && (b%c==0 || c%b==0))
        printf("divisible\n");
    else
        printf("not divisible\n");
        return 0;
}