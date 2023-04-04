#include <stdio.h>

int main()
{
    int year;

    printf("Type a Year: ");
    scanf("%d" ,&year);

    if (year%4==0 && (year%100==0 || year%400==0))
        printf("%d is NOT leap year\n" ,year);
    else if (year%4==0 && year%100==0 && year%400==0)
        printf("the %d leap year\n" ,year);
    return 0;
}