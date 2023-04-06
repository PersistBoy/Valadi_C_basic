#include <stdio.h>

int main()
{
    int year,month,day;

    printf("tell me a date with this format (year month day): ");
    scanf("%d%d%d" ,&day ,&month ,&year);

    printf("day = 0x%X\n" ,day);
    printf("month = 0x%X\n" ,month);
    printf("year = 0x%X\n" ,year);
    return 0;
}