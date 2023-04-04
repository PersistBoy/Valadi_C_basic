#include <stdio.h>

int main()
{
    int NUM1,NUM2,NUM3;
    double average;
    printf("Enter NUM1:");
    scanf("%d" ,&NUM1);
    printf("Enter NUM2:");
    scanf("%d" ,&NUM2);
    printf("Enter NUM3:");
    scanf("%d" ,&NUM3);
    average=(NUM1+NUM2+NUM3)/3.0;
    printf("Average is %.2lf\n" ,average);
    return 0;
}