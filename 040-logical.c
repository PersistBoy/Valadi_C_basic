#include <stdio.h>

int main()
{
    float grade,pocket;

    printf("give me your math grade: ");
    scanf("%f" ,&grade);

    printf("give me total money on your pocket: ");
    scanf("%f" ,&pocket);

    if (grade>=90 && pocket<50)
    printf("OK you can go to yout father\n");
    else
    printf("sorry you dont have requirments\n");
    
    return 0;
}