#include <stdio.h>

int main()
{
    double height;
    double width;
    double area;
    printf("Enter Height: ");
    scanf("%lf" ,&height);
    printf("Enter width:  ");
    scanf("%lf" ,&width);
    area = height*width;
    printf("The Area: %.2lf \n" ,area);
    return 0;

}