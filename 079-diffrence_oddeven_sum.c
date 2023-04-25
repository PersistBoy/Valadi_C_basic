#include <stdio.h>

int main()
{
    int i,num,OddSum=0,EvenSum=0,diffrence;

    do{
        printf("Enter a valid and positive num: ");
        scanf("%d" ,&num);
    }while(num<=0);

    for (i=1 ; i<=num ; i+=2)
    {
        EvenSum=EvenSum+i;
    }
    printf("the sum of even numbers is %d \n" ,EvenSum);
    for (i=2 ; i<=num ; i+=2)
    {
        OddSum=OddSum+i;
    }
    printf("the sum of even numbers is %d \n" ,OddSum);
    diffrence=EvenSum-OddSum;
    if(diffrence<0)
        diffrence=diffrence*-1;
    printf("the difrrensec between %d(Evensum) and %d(Oddsum) is : %d\n" ,EvenSum,OddSum,diffrence);
    return 0;

}