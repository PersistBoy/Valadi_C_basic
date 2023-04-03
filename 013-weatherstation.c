#include <stdio.h>

int main()
{
    double Fnum1;
    double Cnum1;

    double Fnum2;
    double Cnum2;

    printf("Enter the fahrenheit:");
    scanf("%lf" ,&Fnum1); // 3 saat o nim dargir in boodam ke chera dare be man -17.3333 mide . fahmidam k be jaye %lf zade boodam %f
    Cnum1=(Fnum1-32)/1.8;
    printf("celsius is: %lf\n" ,Cnum1);

    
    printf("Enter the celsius:\n");
    scanf("%lf" ,&Fnum2);
    Cnum2=(Fnum2*1.8)+32;
    printf("fahrenheit is: %lf\n" ,Cnum2);

    return 0;
}