#include <stdio.h>

int main() //7563
{
    int num,OddSum=0,EvenSum=0,i,differences,DivideRemaining;

    printf("Enter a number: ");
    scanf("%d" ,&num);
    while (1)
    {
        DivideRemaining=num%10;
        if (DivideRemaining%2==0) // if Divide remaining is an odd number
            OddSum=OddSum+DivideRemaining;
        else                      // if Divide remaining is an Even number
            EvenSum=EvenSum+DivideRemaining;
        num=num/10;
        if (num<1)
            break;
    }
    differences=EvenSum-OddSum;
    if (differences==0)
        printf("there is no differences . i mean diffrensec = %d\n" ,differences);
    else if (differences<0){
        differences=differences*-1;
        printf("the differences = %d\n" ,differences);
    }
    else 
        printf("the differences = %d\n" ,differences);
    return 0;
}