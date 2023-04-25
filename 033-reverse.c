#include <stdio.h>

int main()
{
    int MainNumber;
    int a,b,c;
    int ReverseNum;
    printf("Enter a 3-digit number: "); //531
    scanf("%d" ,&MainNumber);
    a=MainNumber%10; //1
    b=(MainNumber/10)%10; //3
    c=(MainNumber/100)%10; //5
    printf("the reverse number is %d%d%d\n" ,a,b,c);

    ReverseNum=a;
    ReverseNum=(ReverseNum*10)+b;
    ReverseNum=(ReverseNum*10)+c;
    printf("the number is : %d" ,ReverseNum);

    return 0;
}