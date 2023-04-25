#include <stdio.h>

int main()
{
    int x,y;

    printf("give me the X:");
    scanf("%d" ,&x);
    
    printf("give me the Y:");
    scanf("%d" ,&y);

    if (x>0 && y>0)
        printf("the point is on 1 quadrant(top right)\n");
    else if (x<0 && y>0)
        printf("the point is on 2 quadrant(top left)\n");
    else if (x<0 && y<0)
        printf("the point is on 3 quadrant(button left)\n");
    else if (x>0 && y<0)
        printf("the point is on 4 quadrant(button right)\n");
    else if (x==0)
        printf("the point is on x-axis line\n");
    else if (y==0)
        printf("the point is on y-axis line\n");
    return 0;
    

}