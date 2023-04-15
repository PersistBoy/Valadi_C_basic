#include <stdio.h>

float averageBetween3(int a,int b,int c)
{
    float average;
    average=(a+b+c)/3.0;
    return average;
}

int main()
{
    int num1,num2,num3;
    float averageValue;
   
    printf("Enter 1st number: ");
    scanf("%d" ,&num1);

    printf("Enter 2nd number: ");
    scanf("%d" ,&num2);

    printf("Enter 3rd number: ");
    scanf("%d" ,&num3);

    averageValue=averageBetween3(num1 ,num2 ,num3);
    printf("The average is %f\n" ,averageValue);
    return 0;
}