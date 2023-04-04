#include <stdio.h>

int main()
{
    float a1,d;
    int n;
    printf("Enter the initial term (a1): ");
    scanf("%f" ,&a1);
    printf("Enter the total term (n): ");
    scanf("%d" ,&n);
    printf("Enter the diffrences number (d): ");
    scanf("%f" ,&d);
    printf("the n-th term based on your value is: %.2f \n" ,a1+(n-1)*d);
    return 0;
}