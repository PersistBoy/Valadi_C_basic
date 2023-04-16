#include <stdio.h>

float rectangleArea(float height, float weight)
{
    float area;
    area=height*weight;
    return area;
}

int main()
{
    float heightValue,weightValue;
    
    printf("Enter the height then weight of rectangle: \n");
    scanf("%f%f" ,&heightValue ,&weightValue);

    printf("the area is %.2f\n" ,rectangleArea(heightValue,weightValue));

    return 0;
}