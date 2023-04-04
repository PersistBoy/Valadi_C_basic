#include <stdio.h>

int main()
{
    float s; //salari
    float t; //total hours on month
    float m; // monthly salary

    printf("Enter you salari(per hour): ");
    scanf("%f" ,&s);
    printf("Enter hour you work in a month: ");
    scanf("%f" ,&t);
    m=t*s;
    printf("your monthly salary should be %.2f \n" ,m);
    return 0;
}