#include <stdio.h>

int main()
{
    float a1,d,an;
    int n;
    printf("Enter the initial term(a1): ");
    scanf("%f" ,&a1);
    printf("Enter the diffrensec number(d): ");
    scanf("%f" ,&d);
    printf("Enter the total term you have in this sequenses(n): ");
    scanf("%d" ,&n);
    an=a1+(n-1)*d;;
    printf("this is the n-th term you ask: %.2f \n" ,an);
    return 0;
}