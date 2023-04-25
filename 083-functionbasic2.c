#include <stdio.h>

int returnMaxfromThreeNum()
{
    int num1,num2,num3;
    printf("Enter a num1: ");
    scanf("%d" ,&num1);
    
    printf("Enter a num2: ");
    scanf("%d" ,&num2);
    
    printf("Enter a num3: ");
    scanf("%d" ,&num3);

    if (num1>num2)
        if (num1>num3)
            return num1;
        else 
            return num3;
    else if (num2>num3)
        return num2;
    else 
        return num3;
}

int main()
{
    int max;
    max = returnMaxfromThreeNum();
    printf("%d\n" ,max);
    return 0;
}