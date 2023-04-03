#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    float Distance;

    printf("plz gave me the\nX1\nX2\nY1\nY2\nexact on this order");
    scanf("%d\n%d\n%d\n%d\n" ,&x1,&x2,&y1,&y2);
    Distance= sqrt ((x1-x2)^2)+((y1-y2)^2);
    printf("the distance is %.2f" ,Distance);
    return 0;
}