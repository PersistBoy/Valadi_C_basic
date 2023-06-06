#include <stdio.h>

typedef struct point{
    int x;
    int y;
} point;

typedef struct date{
    int day;
    int month;
    int year;
} date ;

int main()
{
    point point1;
    date d1;

    printf("tell me the date of urself (day/month/year): \n");
    scanf("%d%d%d" ,&d1.day,&d1.month,&d1.year);

    printf("Enter \"x\" and \"y\" Value: \n");
    scanf("%d%d" ,&point1.x,&point1.y);

    printf("The point is (%d,%d)\n" ,point1.x,point1.y);
    printf("you born on %d/%d/%d\n" ,d1.day,d1.month,d1.year);

    return 0;
}