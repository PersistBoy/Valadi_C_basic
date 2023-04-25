#include <stdio.h>

int main()
{
    float weight,height,bmi,MinNormalWeight,MaxNormalWeight;
    printf("Plz Enter Your Height(m):\n");
     scanf("%f" ,&height);
    printf("Plz Enter Your Weight(kg):\n");
     scanf("%f" ,&weight);

    bmi=weight/(height*height);
    
    MaxNormalWeight=24.9*(height*height);
    MinNormalWeight=18.5*(height*height);

    if (bmi<18.5)
        printf("You are \"Under Weight\" with %.2f as BMI rate number . Your ideal weight should be between %.2fkg and %.2fkg\n" ,bmi,MinNormalWeight,MaxNormalWeight);
    else if (bmi<25)
        printf("You are \"Normal\" with %.2f as BMI rate number\n" ,bmi);
    else if (bmi<30)
        printf("You are \"Over Weight\" with %.2f as BMI rate number . Your ideal weight should be between %.2fkg and %.2fkg\n" ,bmi,MinNormalWeight,MaxNormalWeight);
    else if (bmi<35)
        printf("You are \"Obess Class1\" with %.2f as BMI rate number . Your ideal weight should be between %.2fkg and %.2fkg\n" ,bmi,MinNormalWeight,MaxNormalWeight);
    else if (bmi<40)
        printf("You are \"Obess Class2\" with %.2f as BMI rate number . Your ideal weight should be between %.2fkg and %.2fkg\n" ,bmi,MinNormalWeight,MaxNormalWeight);
    else
        printf("OMG , what the fuck are you doing here?? call 911 idiot or Die like a fat pig and make others comfortable.\nAnyway, if you want to know your BMI. I will tell you.\nThat number is FUCKING %.2f dumber rate . And your ideal weight is between %.2fkg and %.2fkg\n " ,bmi,MinNormalWeight,MaxNormalWeight);
return 0;
}