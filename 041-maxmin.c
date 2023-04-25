#include <stdio.h>
#include <stdlib.h>

int main()
{

    float num1,num2;
    printf("Enter 2 number (Enteger or floating number): \n");
    scanf("%f" ,&num1);
    scanf("%f" ,&num2);

    if (num1>num2) {
        printf(" BIG  is %f \n" ,num1);
        printf("SMALL is %f \n" ,num2);
    }
    else if(num1==num2) {
        printf("Both Numbers is same (%f)\n" ,num1);
    }
    else {
        printf(" BIG  is %f \n" ,num2);
        printf("SMALL is %f \n" ,num1);
    }
        return 0;
}