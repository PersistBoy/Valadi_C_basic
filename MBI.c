#include <stdio.h>

int main()
{
    float q,v,bmi,MinNormalv,MaxNormalv;
    printf("tell me your height: ");
    scanf("%f" ,&q);
    printf("tell me your wight: ");
    scanf("%f" ,&v);

    bmi=v/(q*q);
    MinNormalv=(q*q)*18.5;
    MaxNormalv=(q*q)*24.9;

    if (bmi<18.5) {
        printf("you are underweight with %.2f bmi rate . your normal weight must between %.2f and %.2f \n" ,bmi,MinNormalv,MaxNormalv);
        else 
            if (bmi<=24.9) 
        printf("you are normal with %.2f bmi rate . your normal weight must between %.2f and %.2f \n" ,bmi,MinNormalv,MaxNormalv);
        else 
           
            if (bmi<=30) 
        printf("you are normal with %.2f bmi rate . your normal weight must between %.2f and %.2f \n" ,bmi,MinNormalv,MaxNormalv);
        
        }
    return 0;
}