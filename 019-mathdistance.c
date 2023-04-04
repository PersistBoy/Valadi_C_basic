#include <stdio.h>
#include <math.h>

int main()
{
    float distance;
    float x1,x2,y1,y2;

    printf("Enter the X1 number: ");
    scanf("%f" ,&x1);
    printf("Enter the Y1 number: ");
    scanf("%f" ,&y1);
    printf("Enter the X2 number: ");
    scanf("%f" ,&x2);
    printf("Enter the Y2 number: ");
    scanf("%f" ,&y2);
    distance=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("Distance is: %.2f \n",distance);
    return 0;

}