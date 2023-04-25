#include <stdio.h>

int main()
{
    int MainNumber;
    int a,b,c; //531

    printf("Enter a 3digits number: ");
    scanf("%d" ,&MainNumber); //531
    a=MainNumber%10;
    b=(MainNumber/10)%10;
    c=(MainNumber/100)%10;
    printf("%d" ,a+b+c);
    return 0;
}