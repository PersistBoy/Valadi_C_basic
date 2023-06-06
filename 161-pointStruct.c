#include <stdio.h>

typedef struct point{
    int x;
    int y;
}point;

void printPoint(point a) //output function (print the output)
{
    printf("\nThe point is: \n");
    printf("%d,%d\n" ,a.x,a.y);
}

point inputPoint() //input function (initializing the point)
{
    point targetPoint;
    printf("Enter 'x' : ");
    scanf("%d" ,&targetPoint.x);
    printf("Enter 'y' : ");
    scanf("%d" ,&targetPoint.y);
    return targetPoint;
}

int main()
{
    printPoint(inputPoint());
    return 0;
}