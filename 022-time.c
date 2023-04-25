#include <stdio.h>

int main()
{
    int s; //s=speed(km/h)
    float d,t1; //d=distanse(km)      t1=time in 100 format
    int t2; //t2=time in 60 format
    printf("Enter the distanse between your city to targeted city: ");
    scanf("%f" ,&d);
    printf("Enter the average speed you try to run: ");
    scanf("%d" ,&s);
    t1=d/s;
    t2=t1*60;
    printf("the time spend between your location and target location is: %d:%d \n" ,(t2/60),t2%60);
    return 0;
}   